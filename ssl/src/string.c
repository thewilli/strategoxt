/*

Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*/

#include "stratego.h"
#include <stdlib.h>

/* Strings */

ATerm SSL_is_string(ATerm t)
{ 
  char *k;
  if(ATmatch(t, "<str>", &k))
    return(t); 
  else 
    _fail(t);
  return(t);
}

/* New: generating new strings */

int new_counter = 0;
int new_alphacounter = 0;
char new_string[256] = "";
#define ASCIIa 97

ATerm SSL_new(void)
{
  sprintf(new_string, "%c_%d", ASCIIa + new_alphacounter, new_counter);
  while(AT_findSymbol(new_string, 0, ATtrue)) {
    new_alphacounter++;
    if(new_alphacounter % 26 == 0) {
      new_alphacounter = 0; 
      new_counter++;
    }
    sprintf(new_string, "%c_%d", ASCIIa + new_alphacounter, new_counter);
  }
  return((ATerm) ATmakeAppl0(ATmakeSymbol(new_string, 0, ATtrue)));
}

ATerm SSL_implode_string(ATerm chars)
{ 
  int i;
  
  /* Initial buffer size */
  static int size = 1024;
  static char* str = NULL;

  ATerm t;

  // ATfprintf(stderr, "SSL_implode_string(%t)\n");

  /* Allocate initial buffer */
  if( str == NULL )
  {
     str = (char*)malloc( size ); 
     assert( str != NULL );
  }

  /* ATfprintf(stderr, "chars = %t\n", chars); */
  for(i = 0; chars != ATempty; 
      chars = (ATerm) ATgetNext((ATermList) chars), i++)
    {
    
     /* more room needed to store imploded string */
     if( i + 1 >= size )
     {
        /* double the allocated buffer */
        size *= 2;
        str = (char*)realloc( str, size );
        assert( str != NULL );
     }
     
      t = ATgetFirst((ATermList) chars);
      /* ATfprintf(stderr, "t = %t\n", t); */
      if(!ATisInt(t))
	_fail(chars);
      else
	str[i] = ATgetInt((ATermInt) t);
    }
  str[i] = '\0';

  /* Try to keep buffer size close to 1024 bytes whenever possible */
  if( size > 1024 )
  {
     size = i + 1;
     if (size < 1024)
     	size = 1024;
     str = (char*)realloc( str, size);
  }
  {
    ATerm t = (ATerm) ATmakeString(str);
    //ATfprintf(stderr, "SSL_implode_string = %s = %t\n", str, t);
    return(t);
  }
}

ATerm SSL_explode_string(ATerm t)
{ 
  char *str;
  int i;
  ATermList chars;
  //ATfprintf(stderr, "SSL_explode_string(%t)\n", t);
  if(!ATisString(t))
    _fail(t);
  str = ATgetName(ATgetSymbol(t));
  for(i = 0; str[i] != '\0'; i++) ;
  for(chars = ATempty; i > 0; i--) {
    chars = ATinsert(chars, (ATerm) ATmakeInt(str[i - 1]));
    // if(str[i - 1] == 92) i--;
  }
  //ATfprintf(stderr, "SSL_explode_string : %t\n", chars);
  return((ATerm) chars);
}
