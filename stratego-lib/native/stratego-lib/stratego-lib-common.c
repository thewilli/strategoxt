#include <srts/stratego.h>
#include <stdio.h>

/**
 * Initialization
 */
static ATerm stdin_term  = NULL;
static ATerm stdout_term = NULL;
static ATerm stderr_term = NULL;

static void (* SSL_initialize_next)(void) = NULL;

static void SSL_initialize()
{
  AFun fun;

  fun = ATmakeAFun("stdin", 0, ATfalse);
  stdin_term = (ATerm) ATmakeAppl(fun);

  fun = ATmakeAFun("stdout", 0, ATfalse);
  stdout_term = (ATerm) ATmakeAppl(fun);

  fun = ATmakeAFun("stderr", 0, ATfalse);
  stderr_term = (ATerm) ATmakeAppl(fun);

  ATprotect(&stdin_term);
  ATprotect(&stdout_term);
  ATprotect(&stderr_term);

  if(SSL_initialize_next != NULL)
    SSL_initialize_next();
}

static void register_init(void) __attribute__((constructor));
static void register_init(void)
{
  SSL_initialize_next  = SRTS_stratego_initialize;
  SRTS_stratego_initialize = &SSL_initialize;
}

ATerm AT_pointer_to_term(void* pointer) {
  return (ATerm) ATmakeBlob(0, pointer);
}

void* AT_term_to_pointer(ATerm term) {
  void* pointer = NULL;

  if(ATisBlob(term)) {
    if(ATgetBlobSize((ATermBlob) term) != 0) {
      return NULL;
    } else {
      pointer = ATgetBlobData((ATermBlob) term);
    }
  } else {
    return NULL;
  }

  return pointer;
}

/**
 * Old FILE* representations
 * bootstrap problem
 */
FILE* stream_from_term_transitional(ATerm stream) {
  FILE* result = NULL;

  if(stream == stdout_term) {
    result = stdout;
  } else if(stream == stderr_term) {
    result = stderr;
  } else if(stream == stdin_term) {
    result = stdin;
  } else if(ATisInt(stream)) { // file pointer
    result = (FILE*) ATgetInt((ATermInt)stream);
  } else { // not a stream
    _fail(stream);
  }

  return result;
}

/**
 * Returns a FILE* for a given ATerm
 *
 * It handles all possible representations of streams in Stratego.
 */
FILE* stream_from_term(ATerm stream) {
  if(ATisBlob(stream)) {
    return (FILE*) AT_term_to_pointer(stream);
  } else {
    return stream_from_term_transitional(stream);
  }
}

/**
 * Converts a FILE* the a representation in an ATerm.
 */
ATerm stream_to_term(FILE* stream) {
  return AT_pointer_to_term((void*) stream);
}

/**
 * Returns a ATermTable for a given ATerm
 */
ATermTable hashtable_from_term(ATerm table) {
  ATermTable result = NULL;

  if(ATisBlob(table)) {
    result = (ATermTable) AT_term_to_pointer(table);
  } else if(ATisInt(table)) {
    result = (ATermTable) ATgetInt((ATermInt)table);
  } else {
    fprintf(stderr, "[srts | error] SRTS/table/table_from_term: not blob \n");
    _fail(table);
  }

  return result;
}

/**
 * Converts an ATermTable to  a representation in an ATerm.
 */
ATerm hashtable_to_term(ATermTable table) {
  return AT_pointer_to_term((void*) table);
}

/**
 * Returns a IndexedSet for a given ATerm
 */
ATermIndexedSet indexedSet_from_term(ATerm set_term) {
  ATermIndexedSet result = NULL;

  if(ATisBlob(set_term)) {
    result = (ATermIndexedSet) AT_term_to_pointer(set_term);
  }
  else if(ATisInt(set_term)) {
    result = (ATermIndexedSet) ATgetInt((ATermInt) set_term);
  } else {
    fprintf(stderr, "[srts | error] SRTS/sets/indexedSet_from_term: not a blob \n");
    _fail(set_term);
  }

  return result;
}

/**
 * Converts an IndexedSet to  a representation in an ATerm.
 */
ATerm indexedSet_to_term(ATermIndexedSet set) {
  return AT_pointer_to_term((void*) set);
}

