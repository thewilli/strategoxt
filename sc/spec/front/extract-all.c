#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Anno_2;
Symbol sym_ListVar_1;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  init_constant_terms();
}
ATerm term_q_30;
ATerm term_i_30;
ATerm term_a_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_u_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_m_25;
ATerm term_c_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_h_23;
ATerm term_t_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_q_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_e_9;
ATerm term_u_7;
ATerm term_l_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
void init_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Op_2, term_z_11, (ATerm) ATempty);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_q_15);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_v_19);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_19);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_q_15);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_q_15);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_g_29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_q_15);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__3, term_f_29, term_g_29, (ATerm) ATempty);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm j_74 (ATerm), ATerm k_74 (ATerm));
ATerm SDef_3 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm p_74 (ATerm));
ATerm Let_2 (ATerm, ATerm l_74 (ATerm), ATerm m_74 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_96 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm alltd_1 (ATerm, ATerm q_89 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm h_87 (ATerm), ATerm i_87 (ATerm));
ATerm substitute_1 (ATerm, ATerm j_87 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm Prim_2 (ATerm, ATerm z_72 (ATerm), ATerm a_73 (ATerm));
ATerm Explode_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm Op_2 (ATerm, ATerm d_75 (ATerm), ATerm e_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm r_83 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm u_92 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm f_98 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm j_76 (ATerm), ATerm k_76 (ATerm));
ATerm Con_3 (ATerm, ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm i_76 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm h_73 (ATerm), ATerm i_73 (ATerm));
ATerm oncetd_1 (ATerm, ATerm c_89 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_87 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm a_92 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm b_102 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm s_92 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm x_100 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm));
ATerm zip_1 (ATerm, ATerm p_92 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm u_112 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_98 (ATerm), ATerm v_98 (ATerm));
ATerm for_3 (ATerm, ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm z_98 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm b_113 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm d_113 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_101 (ATerm), ATerm g_101 (ATerm));
ATerm union_1 (ATerm, ATerm b_101 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm i_75 (ATerm));
ATerm Cons_2 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm));
ATerm Specification_1 (ATerm, ATerm k_75 (ATerm));
ATerm _2 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_84 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_108 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_106 (ATerm));
ATerm debug_1 (ATerm, ATerm d_105 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_91 (ATerm), ATerm l_91 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_101 (ATerm), ATerm n_101 (ATerm));
ATerm crush_2 (ATerm, ATerm q_100 (ATerm), ATerm r_100 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_108 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_106 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_110 (ATerm));
ATerm map_1 (ATerm, ATerm h_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_110 (ATerm));
ATerm Program_1 (ATerm, ATerm x_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_105 (ATerm));
ATerm Undefined_1 (ATerm, ATerm y_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_84 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_109 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_90 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_110 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_110 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_110 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_106 (ATerm), ATerm w_106 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_106 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(((ATgetType(i_3) == AT_LIST) && ATisEmpty(i_3)))
    {
      {
        ATerm k_4 = NULL,m_4 = NULL;
        ATerm j_6;
        j_6 = t;
        {
          ATerm l_4 = NULL;
          t = SSLgetAnnotations(not_null(i_3));
          {
            l_4 = t;
            if(((k_4 != NULL) && (k_4 != l_4)))
              _fail(l_4);
            else
              k_4 = l_4;
          }
        }
        t = j_6;
        {
          ATerm o_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_4));
          {
            o_5 = t;
            if(((m_4 != NULL) && (m_4 != o_5)))
              _fail(o_5);
            else
              m_4 = o_5;
          }
          t = not_null(m_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  g_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_6), not_null(m_6)), term_o_6), not_null(l_6)), term_n_6);
        t = error_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
  t_6 = t;
  r_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      x_6 = ATgetArgument(t_6, 1);
      s_6 :
      if(match_cons(u_6, sym_Mod_2))
        {
          v_6 = ATgetArgument(u_6, 0);
          w_6 = ATgetArgument(u_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_6), not_null(x_6)), term_o_6), not_null(w_6)), term_q_6), not_null(v_6)), term_n_6);
            t = error_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefs_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  d_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      e_7 :
      if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
        {
          i_7 = ATgetFirst((ATermList) h_7);
          j_7 = (ATerm) ATgetNext((ATermList) h_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(j_7)), not_null(i_7));
            {
              ATerm e_0 (ATerm t)
              {
                ATerm y_6 = t;
                int z_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    ;
                    LocalPopChoice(z_6);
                  }
                else
                  {
                    t = y_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, e_0);
            }
            t = not_null(g_7);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  p_7 :
  if(match_cons(r_7, sym__2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      q_7 :
      if(((ATgetType(t_7) == AT_LIST) && ATisEmpty(t_7)))
        {
          t = not_null(s_7);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm a_7;
  a_7 = t;
  {
    t = error_0(t);
    {
      t = term_b_7;
      t = exit_0(t);
    }
  }
  t = a_7;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm k_7;
  k_7 = t;
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    y_7 = t;
    if(((x_7 != NULL) && (x_7 != y_7)))
      _fail(y_7);
    else
      x_7 = y_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, not_null(x_7));
      t = printnl_0(t);
    }
  }
  t = k_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  j_8 :
  if(match_cons(l_8, sym__2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      k_8 :
      if(match_int(n_8, 0))
        {
          ATerm m_7 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
              t = not_null(m_8);
              {
                t = Arities_0(t);
                {
                  p_8 = t;
                  e_8 :
                  if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
                    {
                      q_8 = ATgetFirst((ATermList) p_8);
                      r_8 = (ATerm) ATgetNext((ATermList) p_8);
                      f_8 :
                      if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
                        {
                          s_8 = ATgetFirst((ATermList) r_8);
                          t_8 = (ATerm) ATgetNext((ATermList) r_8);
                          {
                            ATerm o_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  ATerm u_8 = NULL;
                                  u_8 = t;
                                  d_8 :
                                  if(!(match_int(u_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, h_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = o_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), term_u_7);
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
              ;
              LocalPopChoice(n_7);
            }
          else
            {
              t = m_7;
              {
                ATerm w_8 = NULL;
                ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
                t = not_null(m_8);
                {
                  t = Arities_0(t);
                  {
                    x_8 = t;
                    h_8 :
                    if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
                      {
                        y_8 = ATgetFirst((ATermList) x_8);
                        z_8 = (ATerm) ATgetNext((ATermList) x_8);
                        i_8 :
                        if(((ATgetType(z_8) == AT_LIST) && ATisEmpty(z_8)))
                          {
                            {
                              if(((w_8 != NULL) && (w_8 != y_8)))
                                _fail(y_8);
                              else
                                w_8 = y_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
                                t = Definitions_0(t);
                              }
                            }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
              }
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm j_74 (ATerm), ATerm k_74 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Rec_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm q_9 = NULL,s_9 = NULL;
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(k_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
        {
          t = not_null(l_9);
          {
            ATerm u_9 = NULL;
            t = j_74(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = k_74(t);
                  {
                    u_9 = t;
                    {
                      ATerm x_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(s_9), not_null(u_9)), not_null(q_9));
                      {
                        x_9 = t;
                        if(((w_9 != NULL) && (w_9 != x_9)))
                          _fail(x_9);
                        else
                          w_9 = x_9;
                      }
                      t = not_null(w_9);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm p_74 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_SDef_3))
    {
      l_10 = ATgetArgument(k_10, 0);
      m_10 = ATgetArgument(k_10, 1);
      n_10 = ATgetArgument(k_10, 2);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(k_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(l_10);
          {
            ATerm w_10 = NULL;
            t = n_74(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = o_74(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = p_74(t);
                        {
                          y_10 = t;
                          {
                            ATerm b_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_10), not_null(w_10), not_null(y_10)), not_null(s_10));
                            {
                              b_11 = t;
                              if(((a_11 != NULL) && (a_11 != b_11)))
                                _fail(b_11);
                              else
                                a_11 = b_11;
                            }
                            t = not_null(a_11);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Let_2 (ATerm t, ATerm l_74 (ATerm), ATerm m_74 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm u_11 = NULL,w_11 = NULL;
        ATerm v_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm y_11 = NULL;
            t = l_74(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = m_74(t);
                  {
                    y_11 = t;
                    {
                      ATerm b_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_11), not_null(y_11)), not_null(u_11));
                      {
                        b_12 = t;
                        if(((a_12 != NULL) && (a_12 != b_12)))
                          _fail(b_12);
                        else
                          a_12 = b_12;
                      }
                      t = not_null(a_12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_87, d_87);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, f_87, f_87, d_87);
            ;
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            t = Rec_2(t, f_87, d_87);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Rec_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_SDef_3))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      w_12 = ATgetArgument(t_12, 2);
      {
        t = not_null(v_12);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
            a_13 = t;
            r_12 :
            if(match_cons(a_13, sym_VarDec_2))
              {
                b_13 = ATgetArgument(a_13, 0);
                c_13 = ATgetArgument(a_13, 1);
                t = not_null(b_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Let_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        t = not_null(l_13);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
            p_13 = t;
            i_13 :
            if(match_cons(p_13, sym_SDef_3))
              {
                q_13 = ATgetArgument(p_13, 0);
                r_13 = ATgetArgument(p_13, 1);
                s_13 = ATgetArgument(p_13, 2);
                t = not_null(q_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, m_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm u_100 (ATerm))
{
  ATerm c_14 = NULL;
  ATerm e_14 = NULL;
  c_14 = t;
  {
    ATerm f_14 = NULL;
    ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
    t = not_null(c_14);
    {
      f_14 = t;
      {
        t = SSL_explode_term(not_null(f_14));
        {
          h_14 = t;
          b_14 :
          if(match_cons(h_14, sym__2))
            {
              i_14 = ATgetArgument(h_14, 0);
              j_14 = ATgetArgument(h_14, 1);
              if(((e_14 != NULL) && (e_14 != j_14)))
                _fail(j_14);
              else
                e_14 = j_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_14);
      t = foldr_3(t, s_100, t_100, u_100);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_96 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm b_8 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_96(t);
          ;
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm g_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL;
          ATerm v_8;
          v_8 = t;
          {
            ATerm p_14 = NULL;
            t = h_96(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = v_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, t_0);
              t = diff_1(t, j_96);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = i_96(t, r_0, q_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          ;
          LocalPopChoice(o_8);
        }
      else
        {
          t = g_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, q_14);
          }
        }
      return(t);
    }
    t = split_2(t, p_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = q_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
    z_14 = t;
    u_14 :
    if(match_cons(z_14, sym_Call_2))
      {
        a_15 = ATgetArgument(z_14, 0);
        c_15 = ATgetArgument(z_14, 1);
        v_14 :
        if(match_cons(a_15, sym_SVar_1))
          {
            b_15 = ATgetArgument(a_15, 0);
            {
              ATerm f_15 = NULL;
              ATerm g_15 = NULL;
              t = not_null(c_15);
              {
                t = length_0(t);
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(f_15)));
            }
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        {
          ATerm c_9 = t;
          int d_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(d_9);
            }
          else
            {
              t = c_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
    h_15 = t;
    x_14 :
    if(match_cons(h_15, sym__2))
      {
        i_15 = ATgetArgument(h_15, 0);
        l_15 = ATgetArgument(h_15, 1);
        y_14 :
        if(match_cons(i_15, sym__2))
          {
            j_15 = ATgetArgument(i_15, 0);
            k_15 = ATgetArgument(i_15, 1);
            if(((j_15 != NULL) && (j_15 != l_15)))
              _fail(l_15);
            else
              j_15 = l_15;
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  x_15 = t;
  {
    ATerm c_16 = NULL;
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
    t = not_null(x_15);
    {
      c_16 = t;
      {
        t = SSL_explode_term(not_null(c_16));
        {
          e_16 = t;
          t_15 :
          if(match_cons(e_16, sym__2))
            {
              f_16 = ATgetArgument(e_16, 0);
              g_16 = ATgetArgument(e_16, 1);
              u_15 :
              if(match_string(f_16, ""))
                {
                  v_15 :
                  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                    {
                      h_16 = ATgetFirst((ATermList) g_16);
                      i_16 = (ATerm) ATgetNext((ATermList) g_16);
                      w_15 :
                      if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
                        {
                          j_16 = ATgetFirst((ATermList) i_16);
                          k_16 = (ATerm) ATgetNext((ATermList) i_16);
                          {
                            if(((z_15 != NULL) && (z_15 != h_16)))
                              _fail(h_16);
                            else
                              z_15 = h_16;
                            {
                              if(((b_16 != NULL) && (b_16 != j_16)))
                                _fail(j_16);
                              else
                                b_16 = j_16;
                              if(((a_16 != NULL) && (a_16 != k_16)))
                                _fail(k_16);
                              else
                                a_16 = k_16;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(b_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_e_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm q_16 = NULL,s_16 = NULL;
    ATerm f_9;
    f_9 = t;
    {
      ATerm r_16 = NULL;
      t = Fst_0(t);
      {
        r_16 = t;
        if(((q_16 != NULL) && (q_16 != r_16)))
          _fail(r_16);
        else
          q_16 = r_16;
      }
    }
    t = f_9;
    {
      ATerm t_16 = NULL;
      t = Snd_0(t);
      {
        t_16 = t;
        if(((s_16 != NULL) && (s_16 != t_16)))
          _fail(t_16);
        else
          s_16 = t_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_16), not_null(s_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  a_17 = t;
  x_16 :
  if(match_cons(a_17, sym_Call_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      d_17 = ATgetArgument(a_17, 1);
      y_16 :
      if(match_cons(b_17, sym_SVar_1))
        {
          c_17 = ATgetArgument(b_17, 0);
          z_16 :
          if(((ATgetType(d_17) == AT_LIST) && ATisEmpty(d_17)))
            {
              t = not_null(c_17);
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      i_17 :
      if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          n_17 = (ATerm) ATgetNext((ATermList) l_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(n_17));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look1_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  v_17 = t;
  s_17 :
  if(match_cons(v_17, sym__2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      t_17 :
      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
        {
          y_17 = ATgetFirst((ATermList) x_17);
          b_18 = (ATerm) ATgetNext((ATermList) x_17);
          u_17 :
          if(match_cons(y_17, sym__2))
            {
              z_17 = ATgetArgument(y_17, 0);
              a_18 = ATgetArgument(y_17, 1);
              {
                ATerm d_18 = NULL;
                if(((w_17 != NULL) && (w_17 != z_17)))
                  _fail(z_17);
                else
                  w_17 = z_17;
                {
                  if(((d_18 != NULL) && (d_18 != a_18)))
                    _fail(a_18);
                  else
                    d_18 = a_18;
                  t = not_null(d_18);
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = w_87(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = x_87(t);
            {
              o_18 = t;
              if(((m_18 != NULL) && (m_18 != o_18)))
                _fail(o_18);
              else
                m_18 = o_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(m_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm q_89 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm i_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_89(t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = i_9;
        t = _all(t, s_18);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm c_19 = NULL;
        if(((c_19 != NULL) && (c_19 != z_18)))
          _fail(z_18);
        else
          c_19 = z_18;
      }
    }
  else
    {
      if(match_cons(x_18, sym__3))
        {
          y_18 = ATgetArgument(x_18, 0);
          z_18 = ATgetArgument(x_18, 1);
          a_19 = ATgetArgument(x_18, 2);
          {
            ATerm i_19 = NULL;
            ATerm j_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(z_18));
            {
              t = zip_1(t, _id);
              {
                j_19 = t;
                if(((i_19 != NULL) && (i_19 != j_19)))
                  _fail(j_19);
                else
                  i_19 = j_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(a_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm h_87 (ATerm), ATerm i_87 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = subs_args_0(t);
  {
    p_19 = t;
    o_19 :
    if(match_cons(p_19, sym__2))
      {
        q_19 = ATgetArgument(p_19, 0);
        r_19 = ATgetArgument(p_19, 1);
        {
          t = not_null(r_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(q_19);
                return(t);
              }
              t = SubsVar_2(t, h_87, c_1);
              t = i_87(t);
              return(t);
            }
            t = alltd_1(t, b_1);
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm j_87 (ATerm))
{
  t = substitute_2(t, j_87, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_VarDec_2))
    {
      c_20 = ATgetArgument(b_20, 0);
      d_20 = ATgetArgument(b_20, 1);
      {
        ATerm h_20 = NULL,j_20 = NULL;
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(b_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
        {
          t = not_null(c_20);
          {
            ATerm l_20 = NULL;
            t = q_74(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = r_74(t);
                  {
                    l_20 = t;
                    {
                      ATerm o_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_20), not_null(l_20)), not_null(h_20));
                      {
                        o_20 = t;
                        if(((n_20 != NULL) && (n_20 != o_20)))
                          _fail(o_20);
                        else
                          n_20 = o_20;
                      }
                      t = not_null(n_20);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  i_21 = t;
  g_21 :
  if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
    {
      j_21 = ATgetFirst((ATermList) i_21);
      n_21 = (ATerm) ATgetNext((ATermList) i_21);
      h_21 :
      if(match_cons(j_21, sym_SDef_3))
        {
          k_21 = ATgetArgument(j_21, 0);
          l_21 = ATgetArgument(j_21, 1);
          m_21 = ATgetArgument(j_21, 2);
          {
            ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,p_22 = NULL;
            ATerm o_9;
            o_9 = t;
            {
              ATerm v_21 = NULL;
              t = not_null(l_21);
              {
                ATerm b_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  v_21 = t;
                  {
                    if(((s_21 != NULL) && (s_21 != v_21)))
                      _fail(v_21);
                    else
                      s_21 = v_21;
                    {
                      t = not_null(s_21);
                      {
                        ATerm o_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
                          w_21 = t;
                          x_20 :
                          if(match_cons(w_21, sym_VarDec_2))
                            {
                              x_21 = ATgetArgument(w_21, 0);
                              y_21 = ATgetArgument(w_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_21)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          b_22 = t;
                          {
                            if(((t_21 != NULL) && (t_21 != b_22)))
                              _fail(b_22);
                            else
                              t_21 = b_22;
                            {
                              t = not_null(i_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
                                  c_22 = t;
                                  d_21 :
                                  if(match_cons(c_22, sym_SDef_3))
                                    {
                                      d_22 = ATgetArgument(c_22, 0);
                                      e_22 = ATgetArgument(c_22, 1);
                                      f_22 = ATgetArgument(c_22, 2);
                                      {
                                        ATerm i_22 = NULL;
                                        ATerm n_22 = NULL;
                                        t = not_null(e_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
                                            j_22 = t;
                                            b_21 :
                                            if(match_cons(j_22, sym_VarDec_2))
                                              {
                                                k_22 = ATgetArgument(j_22, 0);
                                                l_22 = ATgetArgument(j_22, 1);
                                                t = not_null(k_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            n_22 = t;
                                            if(((i_22 != NULL) && (i_22 != n_22)))
                                              _fail(n_22);
                                            else
                                              i_22 = n_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(i_22), not_null(t_21), not_null(f_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  o_22 = t;
                                  if(((u_21 != NULL) && (u_21 != o_22)))
                                    _fail(o_22);
                                  else
                                    u_21 = o_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = o_9;
            {
              ATerm q_22 = NULL;
              t = not_null(u_21);
              {
                t = choices_0(t);
                {
                  q_22 = t;
                  if(((p_22 != NULL) && (p_22 != q_22)))
                    _fail(q_22);
                  else
                    p_22 = q_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_21), not_null(s_21), not_null(p_22));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  b_23 :
  if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
    {
      e_23 = ATgetFirst((ATermList) d_23);
      f_23 = (ATerm) ATgetNext((ATermList) d_23);
      c_23 :
      if(((ATgetType(f_23) == AT_LIST) && ATisEmpty(f_23)))
        {
          t = not_null(e_23);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm p_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = p_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      q_23 = ATgetArgument(m_23, 1);
      l_23 :
      if(match_cons(n_23, sym__2))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          {
            ATerm u_23 = NULL;
            ATerm v_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(p_23));
            {
              t = Definitions_0(t);
              {
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(q_23));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  q_24 = t;
  o_24 :
  if(match_cons(q_24, sym_ExplodeCong_2))
    {
      r_24 = ATgetArgument(q_24, 0);
      p_24 = ATgetArgument(q_24, 1);
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
        ATerm y_24 = NULL;
        ATerm z_24 = NULL;
        t = new_0(t);
        {
          y_24 = t;
          {
            if(((u_24 != NULL) && (u_24 != y_24)))
              _fail(y_24);
            else
              u_24 = y_24;
            {
              ATerm a_25 = NULL;
              t = new_0(t);
              {
                z_24 = t;
                {
                  if(((v_24 != NULL) && (v_24 != z_24)))
                    _fail(z_24);
                  else
                    v_24 = z_24;
                  {
                    ATerm b_25 = NULL;
                    t = new_0(t);
                    {
                      a_25 = t;
                      {
                        if(((w_24 != NULL) && (w_24 != a_25)))
                          _fail(a_25);
                        else
                          w_24 = a_25;
                        {
                          t = new_0(t);
                          {
                            b_25 = t;
                            if(((x_24 != NULL) && (x_24 != b_25)))
                              _fail(b_25);
                            else
                              x_24 = b_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24)), not_null(v_24)), not_null(u_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
      }
    }
  else
    {
      if(match_cons(q_24, sym_Build_1))
        {
          r_24 = ATgetArgument(q_24, 0);
          {
            ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
            ATerm h_25 = NULL;
            ATerm l_25 = NULL;
            t = new_0(t);
            {
              h_25 = t;
              {
                if(((f_25 != NULL) && (f_25 != h_25)))
                  _fail(h_25);
                else
                  f_25 = h_25;
                {
                  t = not_null(r_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
                      i_25 = t;
                      h_24 :
                      if(match_cons(i_25, sym_Explode_2))
                        {
                          j_25 = ATgetArgument(i_25, 0);
                          k_25 = ATgetArgument(i_25, 1);
                          {
                            if(((d_25 != NULL) && (d_25 != j_25)))
                              _fail(j_25);
                            else
                              d_25 = j_25;
                            {
                              if(((e_25 != NULL) && (e_25 != k_25)))
                                _fail(k_25);
                              else
                                e_25 = k_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      l_25 = t;
                      if(((g_25 != NULL) && (g_25 != l_25)))
                        _fail(l_25);
                      else
                        g_25 = l_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(d_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_25)))));
          }
        }
      else
        {
          if(match_cons(q_24, sym_Match_1))
            {
              r_24 = ATgetArgument(q_24, 0);
              {
                ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
                ATerm s_25 = NULL;
                ATerm t_25 = NULL;
                t = new_0(t);
                {
                  s_25 = t;
                  {
                    if(((p_25 != NULL) && (p_25 != s_25)))
                      _fail(s_25);
                    else
                      p_25 = s_25;
                    {
                      ATerm x_25 = NULL;
                      t = new_0(t);
                      {
                        t_25 = t;
                        {
                          if(((q_25 != NULL) && (q_25 != t_25)))
                            _fail(t_25);
                          else
                            q_25 = t_25;
                          {
                            t = not_null(r_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
                                u_25 = t;
                                m_24 :
                                if(match_cons(u_25, sym_Explode_2))
                                  {
                                    v_25 = ATgetArgument(u_25, 0);
                                    w_25 = ATgetArgument(u_25, 1);
                                    {
                                      if(((n_25 != NULL) && (n_25 != v_25)))
                                        _fail(v_25);
                                      else
                                        n_25 = v_25;
                                      {
                                        if(((o_25 != NULL) && (o_25 != w_25)))
                                          _fail(w_25);
                                        else
                                          o_25 = w_25;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_25));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                x_25 = t;
                                if(((r_25 != NULL) && (r_25 != x_25)))
                                  _fail(x_25);
                                else
                                  r_25 = x_25;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(n_25)))))));
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Match_1))
    {
      d_27 = ATgetArgument(c_27, 0);
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
            ATerm j_27 = NULL;
            ATerm n_27 = NULL;
            t = new_0(t);
            {
              j_27 = t;
              {
                if(((h_27 != NULL) && (h_27 != j_27)))
                  _fail(j_27);
                else
                  h_27 = j_27;
                {
                  t = not_null(d_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
                      k_27 = t;
                      r_26 :
                      if(match_cons(k_27, sym_Anno_2))
                        {
                          l_27 = ATgetArgument(k_27, 0);
                          m_27 = ATgetArgument(k_27, 1);
                          {
                            if(((f_27 != NULL) && (f_27 != l_27)))
                              _fail(l_27);
                            else
                              f_27 = l_27;
                            {
                              if(((g_27 != NULL) && (g_27 != m_27)))
                                _fail(m_27);
                              else
                                g_27 = m_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_27)), not_null(f_27));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      n_27 = t;
                      if(((i_27 != NULL) && (i_27 != n_27)))
                        _fail(n_27);
                      else
                        i_27 = n_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_27))))));
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                  ATerm s_27 = NULL;
                  ATerm v_27 = NULL;
                  t = new_0(t);
                  {
                    s_27 = t;
                    {
                      if(((q_27 != NULL) && (q_27 != s_27)))
                        _fail(s_27);
                      else
                        q_27 = s_27;
                      {
                        t = not_null(d_27);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm t_27 = NULL,u_27 = NULL;
                            t_27 = t;
                            v_26 :
                            if(match_cons(t_27, sym_RootApp_1))
                              {
                                u_27 = ATgetArgument(t_27, 0);
                                {
                                  if(((p_27 != NULL) && (p_27 != u_27)))
                                    _fail(u_27);
                                  else
                                    p_27 = u_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, k_1);
                          {
                            v_27 = t;
                            if(((r_27 != NULL) && (r_27 != v_27)))
                              _fail(v_27);
                            else
                              r_27 = v_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27))), not_null(p_27))));
                  ;
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  {
                    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
                    ATerm b_28 = NULL;
                    ATerm f_28 = NULL;
                    t = new_0(t);
                    {
                      b_28 = t;
                      {
                        if(((z_27 != NULL) && (z_27 != b_28)))
                          _fail(b_28);
                        else
                          z_27 = b_28;
                        {
                          t = not_null(d_27);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
                              c_28 = t;
                              z_26 :
                              if(match_cons(c_28, sym_App_2))
                                {
                                  d_28 = ATgetArgument(c_28, 0);
                                  e_28 = ATgetArgument(c_28, 1);
                                  {
                                    if(((y_27 != NULL) && (y_27 != d_28)))
                                      _fail(d_28);
                                    else
                                      y_27 = d_28;
                                    {
                                      if(((x_27 != NULL) && (x_27 != e_28)))
                                        _fail(e_28);
                                      else
                                        x_27 = e_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, l_1);
                            {
                              f_28 = t;
                              if(((a_28 != NULL) && (a_28 != f_28)))
                                _fail(f_28);
                              else
                                a_28 = f_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_27)), not_null(y_27)))));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp1_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
  m_32 = t;
  k_32 :
  if(match_cons(m_32, sym_Match_1))
    {
      n_32 = ATgetArgument(m_32, 0);
      l_32 :
      if(match_cons(n_32, sym_RootApp_1))
        {
          o_32 = ATgetArgument(n_32, 0);
          t = not_null(o_32);
        }
      else
        {
          if(match_cons(n_32, sym_App_2))
            {
              o_32 = ATgetArgument(n_32, 0);
              p_32 = ATgetArgument(n_32, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(o_32), not_null(p_32));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  y_33 = t;
  x_33 :
  if(match_cons(y_33, sym_Match_1))
    {
      z_33 = ATgetArgument(y_33, 0);
      {
        ATerm b_34 = NULL,c_34 = NULL;
        ATerm b_37 = NULL;
        t = not_null(z_33);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm d_34 = NULL,e_34 = NULL,a_37 = NULL;
            d_34 = t;
            x_32 :
            if(match_cons(d_34, sym_RootApp_1))
              {
                e_34 = ATgetArgument(d_34, 0);
                v_33 :
                if(match_cons(e_34, sym_Match_1))
                  {
                    a_37 = ATgetArgument(e_34, 0);
                    {
                      if(((b_34 != NULL) && (b_34 != a_37)))
                        _fail(a_37);
                      else
                        b_34 = a_37;
                      t = not_null(b_34);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = pat_td_1(t, m_1);
          {
            b_37 = t;
            if(((c_34 != NULL) && (c_34 != b_37)))
              _fail(b_37);
            else
              c_34 = b_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(c_34));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  v_37 = t;
  u_37 :
  if(match_cons(v_37, sym_Build_1))
    {
      w_37 = ATgetArgument(v_37, 0);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_37 = NULL,z_37 = NULL,f_38 = NULL,g_38 = NULL;
            ATerm h_38 = NULL;
            ATerm l_38 = NULL;
            t = new_0(t);
            {
              h_38 = t;
              {
                if(((f_38 != NULL) && (f_38 != h_38)))
                  _fail(h_38);
                else
                  f_38 = h_38;
                {
                  t = not_null(w_37);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
                      i_38 = t;
                      k_37 :
                      if(match_cons(i_38, sym_Anno_2))
                        {
                          j_38 = ATgetArgument(i_38, 0);
                          k_38 = ATgetArgument(i_38, 1);
                          {
                            if(((y_37 != NULL) && (y_37 != j_38)))
                              _fail(j_38);
                            else
                              y_37 = j_38;
                            {
                              if(((z_37 != NULL) && (z_37 != k_38)))
                                _fail(k_38);
                              else
                                z_37 = k_38;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_38));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, n_1);
                    {
                      l_38 = t;
                      if(((g_38 != NULL) && (g_38 != l_38)))
                        _fail(l_38);
                      else
                        g_38 = l_38;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_q_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), not_null(y_37))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_38))));
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm r_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
                  ATerm q_38 = NULL;
                  ATerm z_38 = NULL;
                  t = new_0(t);
                  {
                    q_38 = t;
                    {
                      if(((o_38 != NULL) && (o_38 != q_38)))
                        _fail(q_38);
                      else
                        o_38 = q_38;
                      {
                        t = not_null(w_37);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm r_38 = NULL,s_38 = NULL;
                            r_38 = t;
                            o_37 :
                            if(match_cons(r_38, sym_RootApp_1))
                              {
                                s_38 = ATgetArgument(r_38, 0);
                                {
                                  if(((n_38 != NULL) && (n_38 != s_38)))
                                    _fail(s_38);
                                  else
                                    n_38 = s_38;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_38));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, o_1);
                          {
                            z_38 = t;
                            if(((p_38 != NULL) && (p_38 != z_38)))
                              _fail(z_38);
                            else
                              p_38 = z_38;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_38), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_38))));
                  ;
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = r_10;
                  {
                    ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
                    ATerm f_39 = NULL;
                    ATerm j_39 = NULL;
                    t = new_0(t);
                    {
                      f_39 = t;
                      {
                        if(((d_39 != NULL) && (d_39 != f_39)))
                          _fail(f_39);
                        else
                          d_39 = f_39;
                        {
                          t = not_null(w_37);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
                              g_39 = t;
                              s_37 :
                              if(match_cons(g_39, sym_App_2))
                                {
                                  h_39 = ATgetArgument(g_39, 0);
                                  i_39 = ATgetArgument(g_39, 1);
                                  {
                                    if(((b_39 != NULL) && (b_39 != h_39)))
                                      _fail(h_39);
                                    else
                                      b_39 = h_39;
                                    {
                                      if(((c_39 != NULL) && (c_39 != i_39)))
                                        _fail(i_39);
                                      else
                                        c_39 = i_39;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_39));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, p_1);
                            {
                              j_39 = t;
                              if(((e_39 != NULL) && (e_39 != j_39)))
                                _fail(j_39);
                              else
                                e_39 = j_39;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_39), not_null(c_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_39)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_39))));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
  a_40 = t;
  y_39 :
  if(match_cons(a_40, sym_Build_1))
    {
      b_40 = ATgetArgument(a_40, 0);
      z_39 :
      if(match_cons(b_40, sym_RootApp_1))
        {
          c_40 = ATgetArgument(b_40, 0);
          t = not_null(c_40);
        }
      else
        {
          if(match_cons(b_40, sym_App_2))
            {
              c_40 = ATgetArgument(b_40, 0);
              d_40 = ATgetArgument(b_40, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_40)), not_null(c_40));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm t_76 (ATerm), ATerm u_76 (ATerm))
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_As_2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      {
        ATerm y_40 = NULL,a_41 = NULL;
        ATerm z_40 = NULL;
        t = SSLgetAnnotations(not_null(p_40));
        {
          z_40 = t;
          if(((y_40 != NULL) && (y_40 != z_40)))
            _fail(z_40);
          else
            y_40 = z_40;
        }
        {
          t = not_null(q_40);
          {
            ATerm c_41 = NULL;
            t = t_76(t);
            {
              a_41 = t;
              {
                t = not_null(r_40);
                {
                  ATerm e_41 = NULL;
                  t = u_76(t);
                  {
                    c_41 = t;
                    {
                      ATerm f_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(a_41), not_null(c_41)), not_null(y_40));
                      {
                        f_41 = t;
                        if(((e_41 != NULL) && (e_41 != f_41)))
                          _fail(f_41);
                        else
                          e_41 = f_41;
                      }
                      t = not_null(e_41);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm z_72 (ATerm), ATerm a_73 (ATerm))
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  m_42 :
  if(match_cons(o_42, sym_Prim_2))
    {
      p_42 = ATgetArgument(o_42, 0);
      q_42 = ATgetArgument(o_42, 1);
      {
        ATerm u_42 = NULL,w_42 = NULL;
        ATerm v_42 = NULL;
        t = SSLgetAnnotations(not_null(o_42));
        {
          v_42 = t;
          if(((u_42 != NULL) && (u_42 != v_42)))
            _fail(v_42);
          else
            u_42 = v_42;
        }
        {
          t = not_null(p_42);
          {
            ATerm y_42 = NULL;
            t = z_72(t);
            {
              w_42 = t;
              {
                t = not_null(q_42);
                {
                  ATerm a_43 = NULL;
                  t = a_73(t);
                  {
                    y_42 = t;
                    {
                      ATerm b_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_42), not_null(y_42)), not_null(u_42));
                      {
                        b_43 = t;
                        if(((a_43 != NULL) && (a_43 != b_43)))
                          _fail(b_43);
                        else
                          a_43 = b_43;
                      }
                      t = not_null(a_43);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym_Explode_2))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      {
        ATerm a_44 = NULL,c_44 = NULL;
        ATerm b_44 = NULL;
        t = SSLgetAnnotations(not_null(u_43));
        {
          b_44 = t;
          if(((a_44 != NULL) && (a_44 != b_44)))
            _fail(b_44);
          else
            a_44 = b_44;
        }
        {
          t = not_null(v_43);
          {
            ATerm e_44 = NULL;
            t = p_76(t);
            {
              c_44 = t;
              {
                t = not_null(w_43);
                {
                  ATerm g_44 = NULL;
                  t = q_76(t);
                  {
                    e_44 = t;
                    {
                      ATerm h_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(c_44), not_null(e_44)), not_null(a_44));
                      {
                        h_44 = t;
                        if(((g_44 != NULL) && (g_44 != h_44)))
                          _fail(h_44);
                        else
                          g_44 = h_44;
                      }
                      t = not_null(g_44);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm d_75 (ATerm), ATerm e_75 (ATerm))
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(match_cons(t_44, sym_Op_2))
    {
      u_44 = ATgetArgument(t_44, 0);
      v_44 = ATgetArgument(t_44, 1);
      {
        ATerm z_44 = NULL,b_45 = NULL;
        ATerm a_45 = NULL;
        t = SSLgetAnnotations(not_null(t_44));
        {
          a_45 = t;
          if(((z_44 != NULL) && (z_44 != a_45)))
            _fail(a_45);
          else
            z_44 = a_45;
        }
        {
          t = not_null(u_44);
          {
            ATerm d_45 = NULL;
            t = d_75(t);
            {
              b_45 = t;
              {
                t = not_null(v_44);
                {
                  ATerm f_45 = NULL;
                  t = e_75(t);
                  {
                    d_45 = t;
                    {
                      ATerm g_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(b_45), not_null(d_45)), not_null(z_44));
                      {
                        g_45 = t;
                        if(((f_45 != NULL) && (f_45 != g_45)))
                          _fail(g_45);
                        else
                          f_45 = g_45;
                      }
                      t = not_null(f_45);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pat_td_1 (ATerm t, ATerm r_83 (ATerm))
{
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_83(t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = x_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, r_83);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm e_11 = t;
              int f_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, r_83);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  ;
                  LocalPopChoice(f_11);
                }
              else
                {
                  t = e_11;
                  {
                    ATerm g_11 = t;
                    int h_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, r_83);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        ;
                        LocalPopChoice(h_11);
                      }
                    else
                      {
                        t = g_11;
                        {
                          ATerm i_11 = t;
                          int j_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, r_83);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              ;
                              LocalPopChoice(j_11);
                            }
                          else
                            {
                              t = i_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, r_83);
                                  return(t);
                                }
                                t = As_2(t, _id, w_1);
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bapp0_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL;
  j_46 = t;
  i_46 :
  if(match_cons(j_46, sym_Build_1))
    {
      k_46 = ATgetArgument(j_46, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_46 = NULL,n_46 = NULL;
            ATerm r_46 = NULL;
            t = not_null(k_46);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
                o_46 = t;
                b_46 :
                if(match_cons(o_46, sym_RootApp_1))
                  {
                    p_46 = ATgetArgument(o_46, 0);
                    c_46 :
                    if(match_cons(p_46, sym_Build_1))
                      {
                        q_46 = ATgetArgument(p_46, 0);
                        {
                          if(((m_46 != NULL) && (m_46 != q_46)))
                            _fail(q_46);
                          else
                            m_46 = q_46;
                          t = not_null(m_46);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = pat_td_1(t, x_1);
              {
                r_46 = t;
                if(((n_46 != NULL) && (n_46 != r_46)))
                  _fail(r_46);
                else
                  n_46 = r_46;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_46));
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
              ATerm e_47 = NULL;
              t = not_null(k_46);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm w_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
                  w_46 = t;
                  f_46 :
                  if(match_cons(w_46, sym_App_2))
                    {
                      b_47 = ATgetArgument(w_46, 0);
                      d_47 = ATgetArgument(w_46, 1);
                      g_46 :
                      if(match_cons(b_47, sym_Build_1))
                        {
                          c_47 = ATgetArgument(b_47, 0);
                          {
                            if(((u_46 != NULL) && (u_46 != c_47)))
                              _fail(c_47);
                            else
                              u_46 = c_47;
                            {
                              if(((t_46 != NULL) && (t_46 != d_47)))
                                _fail(d_47);
                              else
                                t_46 = d_47;
                              t = not_null(u_46);
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = pat_td_1(t, y_1);
                {
                  e_47 = t;
                  if(((v_46 != NULL) && (v_46 != e_47)))
                    _fail(e_47);
                  else
                    v_46 = e_47;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_46));
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp_0 (ATerm t)
{
  ATerm m_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = m_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  y_47 :
  if(match_cons(f_48, sym_Lets_2))
    {
      g_48 = ATgetArgument(f_48, 0);
      h_48 = ATgetArgument(f_48, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_48), not_null(h_48));
    }
  else
    {
      if(match_cons(f_48, sym_LChoices_1))
        {
          g_48 = ATgetArgument(f_48, 0);
          z_47 :
          if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
            {
              c_48 = ATgetFirst((ATermList) g_48);
              d_48 = (ATerm) ATgetNext((ATermList) g_48);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(d_48)));
            }
          else
            {
              if(((ATgetType(g_48) == AT_LIST) && ATisEmpty(g_48)))
                {
                  t = term_e_9;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(f_48, sym_Choices_1))
            {
              g_48 = ATgetArgument(f_48, 0);
              a_48 :
              if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
                {
                  c_48 = ATgetFirst((ATermList) g_48);
                  d_48 = (ATerm) ATgetNext((ATermList) g_48);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(d_48)));
                }
              else
                {
                  if(((ATgetType(g_48) == AT_LIST) && ATisEmpty(g_48)))
                    {
                      t = term_e_9;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(f_48, sym_Seqs_1))
                {
                  g_48 = ATgetArgument(f_48, 0);
                  b_48 :
                  if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
                    {
                      c_48 = ATgetFirst((ATermList) g_48);
                      d_48 = (ATerm) ATgetNext((ATermList) g_48);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_48)));
                    }
                  else
                    {
                      if(((ATgetType(g_48) == AT_LIST) && ATisEmpty(g_48)))
                        {
                          t = term_x_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(f_48, sym_DefaultVarDec_1))
                    {
                      g_48 = ATgetArgument(f_48, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12));
                    }
                  else
                    {
                      if(match_cons(f_48, sym_InfixApp_3))
                        {
                          g_48 = ATgetArgument(f_48, 0);
                          h_48 = ATgetArgument(f_48, 1);
                          e_48 = ATgetArgument(f_48, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_48), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_48)), not_null(g_48))));
                        }
                      else
                        {
                          if(match_cons(f_48, sym_BAM_3))
                            {
                              g_48 = ATgetArgument(f_48, 0);
                              h_48 = ATgetArgument(f_48, 1);
                              e_48 = ATgetArgument(f_48, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(e_48))), not_null(g_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_48))));
                            }
                          else
                            {
                              if(match_cons(f_48, sym_AM_2))
                                {
                                  g_48 = ATgetArgument(f_48, 0);
                                  h_48 = ATgetArgument(f_48, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_48)));
                                }
                              else
                                {
                                  if(match_cons(f_48, sym_MA_2))
                                    {
                                      g_48 = ATgetArgument(f_48, 0);
                                      h_48 = ATgetArgument(f_48, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_48)), not_null(h_48));
                                    }
                                  else
                                    {
                                      if(match_cons(f_48, sym_BA_2))
                                        {
                                          g_48 = ATgetArgument(f_48, 0);
                                          h_48 = ATgetArgument(f_48, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_48)), not_null(g_48));
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  v_49 = t;
  s_49 :
  if(match_cons(v_49, sym__2))
    {
      w_49 = ATgetArgument(v_49, 0);
      z_49 = ATgetArgument(v_49, 1);
      t_49 :
      if(match_cons(w_49, sym__2))
        {
          x_49 = ATgetArgument(w_49, 0);
          y_49 = ATgetArgument(w_49, 1);
          u_49 :
          if(match_cons(z_49, sym__2))
            {
              a_50 = ATgetArgument(z_49, 0);
              b_50 = ATgetArgument(z_49, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_50)), not_null(x_49)), (ATerm) ATinsert(CheckATermList(not_null(b_50)), not_null(y_49)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip3_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  i_50 :
  if(((ATgetType(j_50) == AT_LIST) && !(ATisEmpty(j_50))))
    {
      k_50 = ATgetFirst((ATermList) j_50);
      l_50 = (ATerm) ATgetNext((ATermList) j_50);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_50), not_null(l_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  q_50 :
  if(((ATgetType(r_50) == AT_LIST) && ATisEmpty(r_50)))
    {
      t = term_e_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm u_92 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, u_92);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  ATerm d_51 (ATerm t)
  {
    ATerm a_51 = NULL;
    ATerm b_51 = NULL;
    t = not_null(x_50);
    {
      ATerm f_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_12;
        }
      {
        t = new_0(t);
        {
          b_51 = t;
          if(((a_51 != NULL) && (a_51 != b_51)))
            _fail(b_51);
          else
            a_51 = b_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(a_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_50)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_51))));
    return(t);
  }
  ATerm e_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_50))));
    return(t);
  }
  x_50 = t;
  w_50 :
  if(match_cons(x_50, sym_Var_1))
    {
      y_50 = ATgetArgument(x_50, 0);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_51(t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = e_51(t);
          }
      }
    }
  else
    {
      t = d_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm p_51 = NULL,q_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym_Var_1))
    {
      q_51 = ATgetArgument(p_51, 0);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_51 = NULL,v_51 = NULL;
            ATerm u_51 = NULL;
            t = SSLgetAnnotations(not_null(p_51));
            {
              u_51 = t;
              if(((t_51 != NULL) && (t_51 != u_51)))
                _fail(u_51);
              else
                t_51 = u_51;
            }
            {
              t = not_null(q_51);
              {
                ATerm x_51 = NULL;
                t = o_0(t);
                {
                  v_51 = t;
                  {
                    ATerm y_51 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(v_51)), not_null(t_51));
                    {
                      y_51 = t;
                      if(((x_51 != NULL) && (x_51 != y_51)))
                        _fail(y_51);
                      else
                        x_51 = y_51;
                    }
                    t = not_null(x_51);
                  }
                }
              }
            }
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            {
              ATerm b_52 = NULL,d_52 = NULL;
              ATerm c_52 = NULL;
              t = SSLgetAnnotations(not_null(p_51));
              {
                c_52 = t;
                if(((b_52 != NULL) && (b_52 != c_52)))
                  _fail(c_52);
                else
                  b_52 = c_52;
              }
              {
                t = not_null(q_51);
                {
                  ATerm f_52 = NULL;
                  t = o_0(t);
                  {
                    d_52 = t;
                    {
                      ATerm g_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(d_52)), not_null(b_52));
                      {
                        g_52 = t;
                        if(((f_52 != NULL) && (f_52 != g_52)))
                          _fail(g_52);
                        else
                          f_52 = g_52;
                      }
                      t = not_null(f_52);
                    }
                  }
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL;
  u_52 = t;
  t_52 :
  if(match_cons(u_52, sym_Prim_2))
    {
      v_52 = ATgetArgument(u_52, 0);
      w_52 = ATgetArgument(u_52, 1);
      {
        ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
        ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
        t = not_null(w_52);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm o_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_12;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(w_52);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm a_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, a_2);
                {
                  c_53 = t;
                  r_52 :
                  if(match_cons(c_53, sym__2))
                    {
                      d_53 = ATgetArgument(c_53, 0);
                      e_53 = ATgetArgument(c_53, 1);
                      s_52 :
                      if(match_cons(e_53, sym__2))
                        {
                          f_53 = ATgetArgument(e_53, 0);
                          g_53 = ATgetArgument(e_53, 1);
                          {
                            if(((z_52 != NULL) && (z_52 != d_53)))
                              _fail(d_53);
                            else
                              z_52 = d_53;
                            {
                              if(((a_53 != NULL) && (a_53 != f_53)))
                                _fail(f_53);
                              else
                                a_53 = f_53;
                              if(((b_53 != NULL) && (b_53 != g_53)))
                                _fail(g_53);
                              else
                                b_53 = g_53;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_53)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_52), not_null(b_53))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm j_53 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      t = f_98(t);
      t = j_53(t);
      return(t);
    }
    t = try_1(t, b_2);
    return(t);
  }
  t = j_53(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm r_53 = NULL;
  r_53 = t;
  q_53 :
  if(match_cons(r_53, sym_Wld_0))
    {
      ATerm t_53 = NULL,v_53 = NULL;
      ATerm p_12;
      p_12 = t;
      {
        ATerm u_53 = NULL;
        t = SSLgetAnnotations(not_null(r_53));
        {
          u_53 = t;
          if(((t_53 != NULL) && (t_53 != u_53)))
            _fail(u_53);
          else
            t_53 = u_53;
        }
      }
      t = p_12;
      {
        ATerm w_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(t_53));
        {
          w_53 = t;
          if(((v_53 != NULL) && (v_53 != w_53)))
            _fail(w_53);
          else
            v_53 = w_53;
        }
        t = not_null(v_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm q_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm j_76 (ATerm), ATerm k_76 (ATerm))
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  o_54 :
  if(match_cons(p_54, sym_App_2))
    {
      q_54 = ATgetArgument(p_54, 0);
      r_54 = ATgetArgument(p_54, 1);
      {
        ATerm z_54 = NULL,b_55 = NULL;
        ATerm a_55 = NULL;
        t = SSLgetAnnotations(not_null(p_54));
        {
          a_55 = t;
          if(((z_54 != NULL) && (z_54 != a_55)))
            _fail(a_55);
          else
            z_54 = a_55;
        }
        {
          t = not_null(q_54);
          {
            ATerm d_55 = NULL;
            t = j_76(t);
            {
              b_55 = t;
              {
                t = not_null(r_54);
                {
                  ATerm f_55 = NULL;
                  t = k_76(t);
                  {
                    d_55 = t;
                    {
                      ATerm n_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(b_55), not_null(d_55)), not_null(z_54));
                      {
                        n_55 = t;
                        if(((f_55 != NULL) && (f_55 != n_55)))
                          _fail(n_55);
                        else
                          f_55 = n_55;
                      }
                      t = not_null(f_55);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm i_76 (ATerm))
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
  a_56 = t;
  z_55 :
  if(match_cons(a_56, sym_Con_3))
    {
      b_56 = ATgetArgument(a_56, 0);
      c_56 = ATgetArgument(a_56, 1);
      d_56 = ATgetArgument(a_56, 2);
      {
        ATerm i_56 = NULL,k_56 = NULL;
        ATerm j_56 = NULL;
        t = SSLgetAnnotations(not_null(a_56));
        {
          j_56 = t;
          if(((i_56 != NULL) && (i_56 != j_56)))
            _fail(j_56);
          else
            i_56 = j_56;
        }
        {
          t = not_null(b_56);
          {
            ATerm m_56 = NULL;
            t = g_76(t);
            {
              k_56 = t;
              {
                t = not_null(c_56);
                {
                  ATerm o_56 = NULL;
                  t = h_76(t);
                  {
                    m_56 = t;
                    {
                      t = not_null(d_56);
                      {
                        ATerm q_56 = NULL;
                        t = i_76(t);
                        {
                          o_56 = t;
                          {
                            ATerm r_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(k_56), not_null(m_56), not_null(o_56)), not_null(i_56));
                            {
                              r_56 = t;
                              if(((q_56 != NULL) && (q_56 != r_56)))
                                _fail(r_56);
                              else
                                q_56 = r_56;
                            }
                            t = not_null(q_56);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pureterm_0 (ATerm t)
{
  ATerm z_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  h_57 = t;
  f_57 :
  if(match_cons(h_57, sym_SRule_1))
    {
      i_57 = ATgetArgument(h_57, 0);
      g_57 :
      if(match_cons(i_57, sym_StratRule_3))
        {
          j_57 = ATgetArgument(i_57, 0);
          k_57 = ATgetArgument(i_57, 1);
          l_57 = ATgetArgument(i_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_57)), (ATerm) ATmakeAppl(sym_Where_1, not_null(l_57))), not_null(j_57)));
        }
      else
        {
          if(match_cons(i_57, sym_Rule_3))
            {
              j_57 = ATgetArgument(i_57, 0);
              k_57 = ATgetArgument(i_57, 1);
              l_57 = ATgetArgument(i_57, 2);
              {
                t = not_null(j_57);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(k_57);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(k_57))), (ATerm) ATmakeAppl(sym_Where_1, not_null(l_57))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_57))));
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm h_73 (ATerm), ATerm i_73 (ATerm))
{
  ATerm c_58 = NULL,e_58 = NULL,f_58 = NULL;
  c_58 = t;
  b_58 :
  if(match_cons(c_58, sym_Scope_2))
    {
      e_58 = ATgetArgument(c_58, 0);
      f_58 = ATgetArgument(c_58, 1);
      {
        ATerm j_58 = NULL,l_58 = NULL;
        ATerm k_58 = NULL;
        t = SSLgetAnnotations(not_null(c_58));
        {
          k_58 = t;
          if(((j_58 != NULL) && (j_58 != k_58)))
            _fail(k_58);
          else
            j_58 = k_58;
        }
        {
          t = not_null(e_58);
          {
            ATerm n_58 = NULL;
            t = h_73(t);
            {
              l_58 = t;
              {
                t = not_null(f_58);
                {
                  ATerm p_58 = NULL;
                  t = i_73(t);
                  {
                    n_58 = t;
                    {
                      ATerm q_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(l_58), not_null(n_58)), not_null(j_58));
                      {
                        q_58 = t;
                        if(((p_58 != NULL) && (p_58 != q_58)))
                          _fail(q_58);
                        else
                          p_58 = q_58;
                      }
                      t = not_null(p_58);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm c_89 (ATerm))
{
  ATerm w_58 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_89(t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = _one(t, w_58);
      }
    return(t);
  }
  t = w_58(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,q_59 = NULL,r_59 = NULL;
  l_59 = t;
  j_59 :
  if(match_cons(l_59, sym_SRule_1))
    {
      m_59 = ATgetArgument(l_59, 0);
      k_59 :
      if(match_cons(m_59, sym_Rule_3))
        {
          n_59 = ATgetArgument(m_59, 0);
          q_59 = ATgetArgument(m_59, 1);
          r_59 = ATgetArgument(m_59, 2);
          {
            ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
            ATerm j_60 = NULL;
            ATerm p_60 = NULL;
            t = new_0(t);
            {
              j_60 = t;
              {
                if(((g_60 != NULL) && (g_60 != j_60)))
                  _fail(j_60);
                else
                  g_60 = j_60;
                {
                  t = not_null(n_59);
                  {
                    ATerm x_60 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
                      k_60 = t;
                      a_59 :
                      if(match_cons(k_60, sym_Con_3))
                        {
                          l_60 = ATgetArgument(k_60, 0);
                          n_60 = ATgetArgument(k_60, 1);
                          o_60 = ATgetArgument(k_60, 2);
                          b_59 :
                          if(match_cons(l_60, sym_Var_1))
                            {
                              m_60 = ATgetArgument(l_60, 0);
                              {
                                if(((f_60 != NULL) && (f_60 != m_60)))
                                  _fail(m_60);
                                else
                                  f_60 = m_60;
                                {
                                  if(((d_60 != NULL) && (d_60 != n_60)))
                                    _fail(n_60);
                                  else
                                    d_60 = n_60;
                                  {
                                    if(((b_60 != NULL) && (b_60 != o_60)))
                                      _fail(o_60);
                                    else
                                      b_60 = o_60;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_60));
                                  }
                                }
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, e_2);
                    {
                      p_60 = t;
                      {
                        if(((h_60 != NULL) && (h_60 != p_60)))
                          _fail(p_60);
                        else
                          h_60 = p_60;
                        {
                          t = not_null(q_59);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
                              q_60 = t;
                              e_59 :
                              if(match_cons(q_60, sym_Con_3))
                                {
                                  r_60 = ATgetArgument(q_60, 0);
                                  t_60 = ATgetArgument(q_60, 1);
                                  u_60 = ATgetArgument(q_60, 2);
                                  f_59 :
                                  if(match_cons(r_60, sym_Var_1))
                                    {
                                      s_60 = ATgetArgument(r_60, 0);
                                      g_59 :
                                      if(match_cons(u_60, sym_Call_2))
                                        {
                                          v_60 = ATgetArgument(u_60, 0);
                                          w_60 = ATgetArgument(u_60, 1);
                                          h_59 :
                                          if(((ATgetType(w_60) == AT_LIST) && ATisEmpty(w_60)))
                                            {
                                              {
                                                if(((f_60 != NULL) && (f_60 != s_60)))
                                                  _fail(s_60);
                                                else
                                                  f_60 = s_60;
                                                {
                                                  if(((e_60 != NULL) && (e_60 != t_60)))
                                                    _fail(t_60);
                                                  else
                                                    e_60 = t_60;
                                                  {
                                                    if(((c_60 != NULL) && (c_60 != v_60)))
                                                      _fail(v_60);
                                                    else
                                                      c_60 = v_60;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_60));
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = oncetd_1(t, f_2);
                            {
                              x_60 = t;
                              if(((i_60 != NULL) && (i_60 != x_60)))
                                _fail(x_60);
                              else
                                i_60 = x_60;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_60), not_null(i_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_59), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(c_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_60), not_null(e_60), term_x_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_60)))))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm desugarRule_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm h_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(n_13);
      }
    else
      {
        t = h_13;
        {
          ATerm o_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = o_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_87 (ATerm))
{
  t = y_87(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, y_87);
      return(t);
    }
    t = _all(t, h_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm w_13 = t;
              int x_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  {
                    ATerm y_13 = t;
                    int z_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(z_13);
                      }
                    else
                      {
                        t = y_13;
                        {
                          ATerm a_14 = t;
                          int d_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(d_14);
                            }
                          else
                            {
                              t = a_14;
                              t = Expl_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, j_2);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm j_61 = NULL;
  j_61 = t;
  i_61 :
  if(match_cons(j_61, sym__0))
    {
      ATerm l_61 = NULL,n_61 = NULL;
      ATerm g_14;
      g_14 = t;
      {
        ATerm m_61 = NULL;
        t = SSLgetAnnotations(not_null(j_61));
        {
          m_61 = t;
          if(((l_61 != NULL) && (l_61 != m_61)))
            _fail(m_61);
          else
            l_61 = m_61;
        }
      }
      t = g_14;
      {
        ATerm o_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(l_61));
        {
          o_61 = t;
          if(((n_61 != NULL) && (n_61 != o_61)))
            _fail(o_61);
          else
            n_61 = o_61;
        }
        t = not_null(n_61);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm a_62 = NULL;
  ATerm c_62 = NULL,d_62 = NULL,l_62 = NULL,n_62 = NULL;
  a_62 = t;
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm e_62 = NULL;
      ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
      t = not_null(a_62);
      {
        e_62 = t;
        {
          t = SSL_explode_term(not_null(e_62));
          {
            g_62 = t;
            v_61 :
            if(match_cons(g_62, sym__2))
              {
                h_62 = ATgetArgument(g_62, 0);
                i_62 = ATgetArgument(g_62, 1);
                w_61 :
                if(match_string(h_62, ""))
                  {
                    x_61 :
                    if(((ATgetType(i_62) == AT_LIST) && !(ATisEmpty(i_62))))
                      {
                        j_62 = ATgetFirst((ATermList) i_62);
                        k_62 = (ATerm) ATgetNext((ATermList) i_62);
                        {
                          if(((c_62 != NULL) && (c_62 != j_62)))
                            _fail(j_62);
                          else
                            c_62 = j_62;
                          if(((d_62 != NULL) && (d_62 != k_62)))
                            _fail(k_62);
                          else
                            d_62 = k_62;
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = k_14;
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm m_62 = NULL;
        t = term_z_9;
        {
          m_62 = t;
          if(((l_62 != NULL) && (l_62 != m_62)))
            _fail(m_62);
          else
            l_62 = m_62;
        }
      }
      t = l_14;
      {
        t = SSL_mkterm(not_null(l_62), not_null(d_62));
        {
          n_62 = t;
          t = not_null(n_62);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm a_63 = NULL;
  ATerm j_63 = NULL,k_63 = NULL;
  a_63 = t;
  {
    ATerm l_63 = NULL;
    ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL;
    t = not_null(a_63);
    {
      l_63 = t;
      {
        t = SSL_explode_term(not_null(l_63));
        {
          p_63 = t;
          x_62 :
          if(match_cons(p_63, sym__2))
            {
              q_63 = ATgetArgument(p_63, 0);
              r_63 = ATgetArgument(p_63, 1);
              y_62 :
              if(match_string(q_63, ""))
                {
                  z_62 :
                  if(((ATgetType(r_63) == AT_LIST) && !(ATisEmpty(r_63))))
                    {
                      s_63 = ATgetFirst((ATermList) r_63);
                      t_63 = (ATerm) ATgetNext((ATermList) r_63);
                      {
                        if(((k_63 != NULL) && (k_63 != s_63)))
                          _fail(s_63);
                        else
                          k_63 = s_63;
                        if(((j_63 != NULL) && (j_63 != t_63)))
                          _fail(t_63);
                        else
                          j_63 = t_63;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(k_63);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm a_92 (ATerm))
{
  ATerm u_64 = NULL,w_64 = NULL,y_64 = NULL;
  ATerm a_65 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_64 = NULL,s_64 = NULL;
        ATerm r_14;
        r_14 = t;
        {
          ATerm n_64 = NULL;
          t = map_1(t, Thd_0);
          {
            t = a_92(t);
            {
              n_64 = t;
              if(((m_64 != NULL) && (m_64 != n_64)))
                _fail(n_64);
              else
                m_64 = n_64;
            }
          }
        }
        t = r_14;
        {
          ATerm t_64 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = a_65(t);
            {
              t_64 = t;
              if(((s_64 != NULL) && (s_64 != t_64)))
                _fail(t_64);
              else
                s_64 = t_64;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(s_64)), not_null(m_64));
        }
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = a_65(t);
  {
    ATerm s_14;
    s_14 = t;
    {
      ATerm v_64 = NULL;
      v_64 = t;
      if(((u_64 != NULL) && (u_64 != v_64)))
        _fail(v_64);
      else
        u_64 = v_64;
    }
    t = s_14;
    {
      ATerm t_14;
      t_14 = t;
      {
        ATerm x_64 = NULL;
        t = term_z_9;
        {
          x_64 = t;
          if(((w_64 != NULL) && (w_64 != x_64)))
            _fail(x_64);
          else
            w_64 = x_64;
        }
      }
      t = t_14;
      {
        t = SSL_mkterm(not_null(w_64), not_null(u_64));
        {
          y_64 = t;
          t = not_null(y_64);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm k_65 = NULL;
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
  k_65 = t;
  {
    ATerm q_65 = NULL;
    ATerm r_65 = NULL;
    t = new_0(t);
    {
      q_65 = t;
      {
        if(((n_65 != NULL) && (n_65 != q_65)))
          _fail(q_65);
        else
          n_65 = q_65;
        {
          ATerm s_65 = NULL;
          t = new_0(t);
          {
            r_65 = t;
            {
              if(((o_65 != NULL) && (o_65 != r_65)))
                _fail(r_65);
              else
                o_65 = r_65;
              {
                t = new_0(t);
                {
                  s_65 = t;
                  if(((p_65 != NULL) && (p_65 != s_65)))
                    _fail(s_65);
                  else
                    p_65 = s_65;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_65)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_65)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_65)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_65))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(n_65), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12)), not_null(o_65), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_65)), not_null(p_65), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_65)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  y_65 :
  if(match_cons(z_65, sym__2))
    {
      a_66 = ATgetArgument(z_65, 0);
      b_66 = ATgetArgument(z_65, 1);
      {
        ATerm w_14 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(a_66), not_null(b_66));
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = w_14;
            t = SSL_subtr(not_null(a_66), not_null(b_66));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm b_102 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
    r_66 = t;
    g_66 :
    if(match_cons(r_66, sym__2))
      {
        s_66 = ATgetArgument(r_66, 0);
        t_66 = ATgetArgument(r_66, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_66), not_null(t_66), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL;
    y_66 = t;
    i_66 :
    if(match_cons(y_66, sym__3))
      {
        z_66 = ATgetArgument(y_66, 0);
        a_67 = ATgetArgument(y_66, 1);
        b_67 = ATgetArgument(y_66, 2);
        j_66 :
        if(match_int(z_66, 0))
          {
            t = not_null(b_67);
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
    e_67 = t;
    q_66 :
    if(match_cons(e_67, sym__3))
      {
        f_67 = ATgetArgument(e_67, 0);
        g_67 = ATgetArgument(e_67, 1);
        h_67 = ATgetArgument(e_67, 2);
        {
          ATerm l_67 = NULL,n_67 = NULL;
          ATerm e_15;
          e_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_67), term_b_7);
            t = geq_0(t);
          }
          t = e_15;
          {
            ATerm m_15;
            m_15 = t;
            {
              ATerm m_67 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_67), term_b_7);
              {
                t = subt_0(t);
                {
                  m_67 = t;
                  if(((l_67 != NULL) && (l_67 != m_67)))
                    _fail(m_67);
                  else
                    l_67 = m_67;
                }
              }
            }
            t = m_15;
            {
              ATerm o_67 = NULL;
              t = not_null(g_67);
              {
                t = b_102(t);
                {
                  o_67 = t;
                  if(((n_67 != NULL) && (n_67 != o_67)))
                    _fail(o_67);
                  else
                    n_67 = o_67;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(l_67), not_null(g_67), (ATerm) ATinsert(CheckATermList(not_null(h_67)), not_null(n_67)));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  f_68 :
  if(match_cons(g_68, sym__2))
    {
      h_68 = ATgetArgument(g_68, 0);
      i_68 = ATgetArgument(g_68, 1);
      {
        ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
        ATerm o_68 = NULL;
        ATerm p_68 = NULL;
        t = new_0(t);
        {
          o_68 = t;
          {
            if(((l_68 != NULL) && (l_68 != o_68)))
              _fail(o_68);
            else
              l_68 = o_68;
            {
              ATerm q_68 = NULL;
              t = new_0(t);
              {
                p_68 = t;
                {
                  if(((m_68 != NULL) && (m_68 != p_68)))
                    _fail(p_68);
                  else
                    m_68 = p_68;
                  {
                    t = new_0(t);
                    {
                      q_68 = t;
                      if(((n_68 != NULL) && (n_68 != q_68)))
                        _fail(q_68);
                      else
                        n_68 = q_68;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_68)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_68))), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_68)))), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_68))), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_68))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(l_68), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12)), not_null(m_68), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_68)), not_null(n_68), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_68)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL;
  y_68 = t;
  w_68 :
  if(match_cons(y_68, sym__2))
    {
      z_68 = ATgetArgument(y_68, 0);
      a_69 = ATgetArgument(y_68, 1);
      x_68 :
      if(((ATgetType(a_69) == AT_LIST) && ATisEmpty(a_69)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm s_92 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, s_92);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  n_69 :
  if(((ATgetType(o_69) == AT_LIST) && !(ATisEmpty(o_69))))
    {
      p_69 = ATgetFirst((ATermList) o_69);
      q_69 = (ATerm) ATgetNext((ATermList) o_69);
      t = not_null(q_69);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  z_69 = t;
  x_69 :
  if(((ATgetType(z_69) == AT_LIST) && !(ATisEmpty(z_69))))
    {
      a_70 = ATgetFirst((ATermList) z_69);
      b_70 = (ATerm) ATgetNext((ATermList) z_69);
      y_69 :
      if(((ATgetType(b_70) == AT_LIST) && ATisEmpty(b_70)))
        {
          t = not_null(a_70);
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL;
  ATerm f_74 (ATerm t)
  {
    ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,f_73 = NULL;
    ATerm p_15;
    p_15 = t;
    {
      ATerm o_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
      ATerm p_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), term_b_7);
      {
        t = add_0(t);
        {
          p_72 = t;
          if(((o_72 != NULL) && (o_72 != p_72)))
            _fail(p_72);
          else
            o_72 = p_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_72), term_q_15);
        {
          t = copy_1(t, new_0);
          {
            q_72 = t;
            n_71 :
            if(((ATgetType(q_72) == AT_LIST) && !(ATisEmpty(q_72))))
              {
                r_72 = ATgetFirst((ATermList) q_72);
                s_72 = (ATerm) ATgetNext((ATermList) q_72);
                {
                  ATerm t_72 = NULL;
                  if(((g_72 != NULL) && (g_72 != r_72)))
                    _fail(r_72);
                  else
                    g_72 = r_72;
                  {
                    if(((h_72 != NULL) && (h_72 != s_72)))
                      _fail(s_72);
                    else
                      h_72 = s_72;
                    {
                      t = not_null(h_72);
                      {
                        ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
                        t = last_0(t);
                        {
                          t_72 = t;
                          {
                            if(((f_72 != NULL) && (f_72 != t_72)))
                              _fail(t_72);
                            else
                              f_72 = t_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_72)), not_null(g_72)), not_null(h_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    u_72 = t;
                                    l_71 :
                                    if(match_cons(u_72, sym__6))
                                      {
                                        v_72 = ATgetArgument(u_72, 0);
                                        w_72 = ATgetArgument(u_72, 1);
                                        b_73 = ATgetArgument(u_72, 2);
                                        c_73 = ATgetArgument(u_72, 3);
                                        d_73 = ATgetArgument(u_72, 4);
                                        e_73 = ATgetArgument(u_72, 5);
                                        {
                                          if(((i_72 != NULL) && (i_72 != v_72)))
                                            _fail(v_72);
                                          else
                                            i_72 = v_72;
                                          {
                                            if(((j_72 != NULL) && (j_72 != w_72)))
                                              _fail(w_72);
                                            else
                                              j_72 = w_72;
                                            {
                                              if(((k_72 != NULL) && (k_72 != b_73)))
                                                _fail(b_73);
                                              else
                                                k_72 = b_73;
                                              {
                                                if(((l_72 != NULL) && (l_72 != c_73)))
                                                  _fail(c_73);
                                                else
                                                  l_72 = c_73;
                                                {
                                                  if(((m_72 != NULL) && (m_72 != d_73)))
                                                    _fail(d_73);
                                                  else
                                                    m_72 = d_73;
                                                  if(((n_72 != NULL) && (n_72 != e_73)))
                                                    _fail(e_73);
                                                  else
                                                    n_72 = e_73;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = p_15;
    {
      ATerm g_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_72)), not_null(k_72)), not_null(h_72));
      {
        t = concat_0(t);
        {
          g_73 = t;
          if(((f_73 != NULL) && (f_73 != g_73)))
            _fail(g_73);
          else
            f_73 = g_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_72), term_r_15), not_null(j_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(f_73)), not_null(g_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), not_null(l_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), not_null(n_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_72))))));
    }
    return(t);
  }
  ATerm g_74 (ATerm t)
  {
    ATerm k_73 = NULL;
    ATerm l_73 = NULL;
    t = new_0(t);
    {
      l_73 = t;
      if(((k_73 != NULL) && (k_73 != l_73)))
        _fail(l_73);
      else
        k_73 = l_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_72), term_r_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), (ATerm) ATempty))), term_x_11))));
    return(t);
  }
  ATerm h_74 (ATerm t)
  {
    ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,d_74 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm v_73 = NULL;
      ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL;
      t = new_0(t);
      {
        v_73 = t;
        {
          if(((o_73 != NULL) && (o_73 != v_73)))
            _fail(v_73);
          else
            o_73 = v_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  w_73 = t;
                  u_71 :
                  if(match_cons(w_73, sym__6))
                    {
                      x_73 = ATgetArgument(w_73, 0);
                      y_73 = ATgetArgument(w_73, 1);
                      z_73 = ATgetArgument(w_73, 2);
                      a_74 = ATgetArgument(w_73, 3);
                      b_74 = ATgetArgument(w_73, 4);
                      c_74 = ATgetArgument(w_73, 5);
                      {
                        if(((p_73 != NULL) && (p_73 != x_73)))
                          _fail(x_73);
                        else
                          p_73 = x_73;
                        {
                          if(((q_73 != NULL) && (q_73 != y_73)))
                            _fail(y_73);
                          else
                            q_73 = y_73;
                          {
                            if(((r_73 != NULL) && (r_73 != z_73)))
                              _fail(z_73);
                            else
                              r_73 = z_73;
                            {
                              if(((s_73 != NULL) && (s_73 != a_74)))
                                _fail(a_74);
                              else
                                s_73 = a_74;
                              {
                                if(((t_73 != NULL) && (t_73 != b_74)))
                                  _fail(b_74);
                                else
                                  t_73 = b_74;
                                if(((u_73 != NULL) && (u_73 != c_74)))
                                  _fail(c_74);
                                else
                                  u_73 = c_74;
                              }
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
        }
      }
    }
    t = s_15;
    {
      ATerm e_74 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(t_73));
      {
        t = conc_0(t);
        {
          e_74 = t;
          if(((d_74 != NULL) && (d_74 != e_74)))
            _fail(e_74);
          else
            d_74 = e_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_72), term_y_15), not_null(q_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(d_74)), not_null(o_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_72), not_null(s_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(a_72), not_null(u_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_73))))));
    }
    return(t);
  }
  z_71 = t;
  w_71 :
  if(match_cons(z_71, sym__3))
    {
      a_72 = ATgetArgument(z_71, 0);
      b_72 = ATgetArgument(z_71, 1);
      c_72 = ATgetArgument(z_71, 2);
      x_71 :
      if(match_string(b_72, "T"))
        {
          y_71 :
          if(match_int(c_72, 0))
            {
              ATerm d_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_74(t);
                  ;
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = d_16;
                  t = g_74(t);
                }
            }
          else
            {
              t = f_74(t);
            }
        }
      else
        {
          if(match_string(b_72, "D"))
            {
              t = h_74(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm h_75 = NULL,j_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL;
  h_75 = t;
  c_75 :
  if(match_cons(h_75, sym__2))
    {
      j_75 = ATgetArgument(h_75, 0);
      p_75 = ATgetArgument(h_75, 1);
      f_75 :
      if(match_cons(j_75, sym__2))
        {
          l_75 = ATgetArgument(j_75, 0);
          o_75 = ATgetArgument(j_75, 1);
          g_75 :
          if(match_cons(l_75, sym_Mod_2))
            {
              m_75 = ATgetArgument(l_75, 0);
              n_75 = ATgetArgument(l_75, 1);
              {
                ATerm u_75 = NULL;
                ATerm v_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_75), not_null(n_75), not_null(o_75));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      v_75 = t;
                      if(((u_75 != NULL) && (u_75 != v_75)))
                        _fail(v_75);
                      else
                        u_75 = v_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_75), not_null(p_75));
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_definition_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL;
  b_76 = t;
  z_75 :
  if(match_cons(b_76, sym__5))
    {
      c_76 = ATgetArgument(b_76, 0);
      f_76 = ATgetArgument(b_76, 1);
      l_76 = ATgetArgument(b_76, 2);
      m_76 = ATgetArgument(b_76, 3);
      n_76 = ATgetArgument(b_76, 4);
      a_76 :
      if(((ATgetType(c_76) == AT_LIST) && !(ATisEmpty(c_76))))
        {
          d_76 = ATgetFirst((ATermList) c_76);
          e_76 = (ATerm) ATgetNext((ATermList) c_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(e_76), not_null(f_76), not_null(l_76), not_null(m_76), (ATerm) ATinsert(CheckATermList(not_null(n_76)), not_null(d_76)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm x_100 (ATerm))
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  a_77 :
  if(match_cons(b_77, sym__2))
    {
      c_77 = ATgetArgument(b_77, 0);
      d_77 = ATgetArgument(b_77, 1);
      {
        t = not_null(c_77);
        {
          ATerm h_77 (ATerm t)
          {
            ATerm o_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(p_16);
              }
            else
              {
                t = o_16;
                {
                  ATerm u_16 = t;
                  int v_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        t = not_null(d_77);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_100, n_2);
                      t = h_77(t);
                      ;
                      LocalPopChoice(v_16);
                    }
                  else
                    {
                      t = u_16;
                      t = Cons_2(t, _id, h_77);
                    }
                }
              }
            return(t);
          }
          t = h_77(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL;
  l_77 = t;
  j_77 :
  if(match_cons(l_77, sym__2))
    {
      m_77 = ATgetArgument(l_77, 0);
      n_77 = ATgetArgument(l_77, 1);
      k_77 :
      if(((ATgetType(n_77) == AT_LIST) && !(ATisEmpty(n_77))))
        {
          o_77 = ATgetFirst((ATermList) n_77);
          p_77 = (ATerm) ATgetNext((ATermList) n_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_77)), not_null(o_77)), not_null(p_77));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
  w_77 = t;
  v_77 :
  if(match_cons(w_77, sym__2))
    {
      x_77 = ATgetArgument(w_77, 0);
      y_77 = ATgetArgument(w_77, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_77)), not_null(x_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL;
  g_78 = t;
  d_78 :
  if(match_cons(g_78, sym__2))
    {
      h_78 = ATgetArgument(g_78, 0);
      k_78 = ATgetArgument(g_78, 1);
      e_78 :
      if(((ATgetType(h_78) == AT_LIST) && !(ATisEmpty(h_78))))
        {
          i_78 = ATgetFirst((ATermList) h_78);
          j_78 = (ATerm) ATgetNext((ATermList) h_78);
          f_78 :
          if(((ATgetType(k_78) == AT_LIST) && !(ATisEmpty(k_78))))
            {
              l_78 = ATgetFirst((ATermList) k_78);
              m_78 = (ATerm) ATgetNext((ATermList) k_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_78), not_null(l_78)), (ATerm) ATmakeAppl(sym__2, not_null(j_78), not_null(m_78)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm w_78 = NULL,z_78 = NULL,a_79 = NULL;
  w_78 = t;
  t_78 :
  if(match_cons(w_78, sym__2))
    {
      z_78 = ATgetArgument(w_78, 0);
      a_79 = ATgetArgument(w_78, 1);
      u_78 :
      if(((ATgetType(z_78) == AT_LIST) && ATisEmpty(z_78)))
        {
          v_78 :
          if(((ATgetType(a_79) == AT_LIST) && ATisEmpty(a_79)))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm))
{
  ATerm c_79 (ATerm t)
  {
    ATerm w_16 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_92(t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = w_16;
        {
          t = l_92(t);
          {
            t = _2(t, n_92, c_79);
            t = m_92(t);
          }
        }
      }
    return(t);
  }
  t = c_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm p_92 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_92);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL;
  n_79 = t;
  l_79 :
  if(((ATgetType(n_79) == AT_LIST) && !(ATisEmpty(n_79))))
    {
      o_79 = ATgetFirst((ATermList) n_79);
      r_79 = (ATerm) ATgetNext((ATermList) n_79);
      m_79 :
      if(match_cons(o_79, sym__2))
        {
          p_79 = ATgetArgument(o_79, 0);
          q_79 = ATgetArgument(o_79, 1);
          {
            ATerm v_79 = NULL,w_79 = NULL,c_80 = NULL,i_80 = NULL;
            ATerm f_17;
            f_17 = t;
            {
              ATerm x_79 = NULL;
              ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL;
              t = not_null(q_79);
              {
                x_79 = t;
                {
                  t = SSL_explode_term(not_null(x_79));
                  {
                    z_79 = t;
                    g_79 :
                    if(match_cons(z_79, sym__2))
                      {
                        a_80 = ATgetArgument(z_79, 0);
                        b_80 = ATgetArgument(z_79, 1);
                        {
                          if(((v_79 != NULL) && (v_79 != a_80)))
                            _fail(a_80);
                          else
                            v_79 = a_80;
                          if(((w_79 != NULL) && (w_79 != b_80)))
                            _fail(b_80);
                          else
                            w_79 = b_80;
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
              }
            }
            t = f_17;
            {
              ATerm g_17;
              g_17 = t;
              {
                ATerm d_80 = NULL;
                ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
                t = not_null(p_79);
                {
                  d_80 = t;
                  {
                    t = SSL_explode_term(not_null(d_80));
                    {
                      f_80 = t;
                      j_79 :
                      if(match_cons(f_80, sym__2))
                        {
                          g_80 = ATgetArgument(f_80, 0);
                          h_80 = ATgetArgument(f_80, 1);
                          {
                            if(((v_79 != NULL) && (v_79 != g_80)))
                              _fail(g_80);
                            else
                              v_79 = g_80;
                            if(((c_80 != NULL) && (c_80 != h_80)))
                              _fail(h_80);
                            else
                              c_80 = h_80;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
              t = g_17;
              {
                ATerm j_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_80), not_null(w_79));
                {
                  t = zip_1(t, _id);
                  {
                    j_80 = t;
                    if(((i_80 != NULL) && (i_80 != j_80)))
                      _fail(j_80);
                    else
                      i_80 = j_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_80), not_null(r_79));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL;
  t_80 = t;
  r_80 :
  if(((ATgetType(t_80) == AT_LIST) && !(ATisEmpty(t_80))))
    {
      u_80 = ATgetFirst((ATermList) t_80);
      x_80 = (ATerm) ATgetNext((ATermList) t_80);
      s_80 :
      if(match_cons(u_80, sym__2))
        {
          v_80 = ATgetArgument(u_80, 0);
          w_80 = ATgetArgument(u_80, 1);
          {
            ATerm z_80 = NULL;
            if(((v_80 != NULL) && (v_80 != w_80)))
              _fail(w_80);
            else
              v_80 = w_80;
            {
              if(((z_80 != NULL) && (z_80 != x_80)))
                _fail(x_80);
              else
                z_80 = x_80;
              t = not_null(z_80);
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm c_81 = NULL;
        c_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_81));
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm c_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = c_18;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, r_2);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, o_2, p_2, q_2);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm u_112 (ATerm))
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL;
  p_81 = t;
  n_81 :
  if(match_cons(p_81, sym__5))
    {
      q_81 = ATgetArgument(p_81, 0);
      t_81 = ATgetArgument(p_81, 1);
      u_81 = ATgetArgument(p_81, 2);
      v_81 = ATgetArgument(p_81, 3);
      w_81 = ATgetArgument(p_81, 4);
      o_81 :
      if(((ATgetType(q_81) == AT_LIST) && !(ATisEmpty(q_81))))
        {
          r_81 = ATgetFirst((ATermList) q_81);
          s_81 = (ATerm) ATgetNext((ATermList) q_81);
          {
            ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,m_82 = NULL,o_82 = NULL,q_82 = NULL;
            ATerm f_18;
            f_18 = t;
            {
              ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_81), not_null(u_81));
              {
                t = s_112(t);
                {
                  h_82 = t;
                  j_81 :
                  if(match_cons(h_82, sym__2))
                    {
                      i_82 = ATgetArgument(h_82, 0);
                      j_82 = ATgetArgument(h_82, 1);
                      {
                        ATerm k_82 = NULL;
                        if(((e_82 != NULL) && (e_82 != i_82)))
                          _fail(i_82);
                        else
                          e_82 = i_82;
                        {
                          if(((d_82 != NULL) && (d_82 != j_82)))
                            _fail(j_82);
                          else
                            d_82 = j_82;
                          {
                            t = not_null(e_82);
                            {
                              ATerm l_82 = NULL;
                              t = t_112(t);
                              {
                                k_82 = t;
                                {
                                  if(((f_82 != NULL) && (f_82 != k_82)))
                                    _fail(k_82);
                                  else
                                    f_82 = k_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_82), not_null(t_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        l_82 = t;
                                        if(((g_82 != NULL) && (g_82 != l_82)))
                                          _fail(l_82);
                                        else
                                          g_82 = l_82;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
            t = f_18;
            {
              ATerm g_18;
              g_18 = t;
              {
                ATerm n_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_82), not_null(s_81));
                {
                  t = conc_0(t);
                  {
                    n_82 = t;
                    if(((m_82 != NULL) && (m_82 != n_82)))
                      _fail(n_82);
                    else
                      m_82 = n_82;
                  }
                }
              }
              t = g_18;
              {
                ATerm h_18;
                h_18 = t;
                {
                  ATerm p_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_82), not_null(t_81));
                  {
                    t = conc_0(t);
                    {
                      p_82 = t;
                      if(((o_82 != NULL) && (o_82 != p_82)))
                        _fail(p_82);
                      else
                        o_82 = p_82;
                    }
                  }
                }
                t = h_18;
                {
                  ATerm r_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(r_81), not_null(e_82), not_null(v_81));
                  {
                    t = u_112(t);
                    {
                      r_82 = t;
                      if(((q_82 != NULL) && (q_82 != r_82)))
                        _fail(r_82);
                      else
                        q_82 = r_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(m_82), not_null(o_82), not_null(d_82), not_null(q_82), not_null(w_81));
                }
              }
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL;
  c_83 = t;
  a_83 :
  if(match_cons(c_83, sym__5))
    {
      d_83 = ATgetArgument(c_83, 0);
      e_83 = ATgetArgument(c_83, 1);
      f_83 = ATgetArgument(c_83, 2);
      g_83 = ATgetArgument(c_83, 3);
      h_83 = ATgetArgument(c_83, 4);
      b_83 :
      if(((ATgetType(d_83) == AT_LIST) && ATisEmpty(d_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_83), not_null(h_83));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm p_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  p_83 = t;
  o_83 :
  if(match_cons(p_83, sym__3))
    {
      s_83 = ATgetArgument(p_83, 0);
      t_83 = ATgetArgument(p_83, 1);
      u_83 = ATgetArgument(p_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(s_83), not_null(s_83), not_null(t_83), not_null(u_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm u_98 (ATerm), ATerm v_98 (ATerm))
{
  ATerm z_83 (ATerm t)
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_98(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        {
          t = v_98(t);
          t = z_83(t);
        }
      }
    return(t);
  }
  t = z_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm z_98 (ATerm))
{
  t = x_98(t);
  t = while_not_2(t, y_98, z_98);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, d_112, e_112, f_112);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, s_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm v_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, v_2);
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,g_84 = NULL;
    c_84 = t;
    b_84 :
    if(match_cons(c_84, sym__3))
      {
        d_84 = ATgetArgument(c_84, 0);
        e_84 = ATgetArgument(c_84, 1);
        g_84 = ATgetArgument(c_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(g_84)), not_null(e_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = r_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_b_7;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm b_113 (ATerm))
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t_84 = t;
  s_84 :
  if(match_cons(t_84, sym__2))
    {
      u_84 = ATgetArgument(t_84, 0);
      v_84 = ATgetArgument(t_84, 1);
      {
        ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
        ATerm u_18;
        u_18 = t;
        {
          ATerm d_85 = NULL;
          ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
          t = b_113(t);
          {
            d_85 = t;
            {
              if(((a_85 != NULL) && (a_85 != d_85)))
                _fail(d_85);
              else
                a_85 = d_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_85), not_null(u_84), not_null(v_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_18 = t;
                    int b_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_85), term_d_19);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(b_19);
                      }
                    else
                      {
                        t = v_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_85 = t;
                      p_84 :
                      if(((ATgetType(e_85) == AT_LIST) && !(ATisEmpty(e_85))))
                        {
                          f_85 = ATgetFirst((ATermList) e_85);
                          g_85 = (ATerm) ATgetNext((ATermList) e_85);
                          {
                            if(((b_85 != NULL) && (b_85 != f_85)))
                              _fail(f_85);
                            else
                              b_85 = f_85;
                            {
                              if(((c_85 != NULL) && (c_85 != g_85)))
                                _fail(g_85);
                              else
                                c_85 = g_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_85), term_d_19, (ATerm) ATinsert(CheckATermList(not_null(c_85)), (ATerm) ATinsert(CheckATermList(not_null(b_85)), not_null(u_84))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = u_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm o_85 = NULL;
  ATerm r_85 = NULL;
  o_85 = t;
  {
    ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
    t = not_null(o_85);
    {
      ATerm w_2 (ATerm t)
      {
        t = term_e_19;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        s_85 = t;
        m_85 :
        if(match_cons(s_85, sym_Defined_2))
          {
            t_85 = ATgetArgument(s_85, 0);
            u_85 = ATgetArgument(s_85, 1);
            n_85 :
            if(match_string(t_85, "f_0"))
              {
                if(((r_85 != NULL) && (r_85 != u_85)))
                  _fail(u_85);
                else
                  r_85 = u_85;
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(r_85);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
  z_85 = t;
  y_85 :
  if(((ATgetType(z_85) == AT_LIST) && !(ATisEmpty(z_85))))
    {
      a_86 = ATgetFirst((ATermList) z_85);
      b_86 = (ATerm) ATgetNext((ATermList) z_85);
      t = not_null(a_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  g_86 = t;
  f_86 :
  if(match_cons(g_86, sym__2))
    {
      h_86 = ATgetArgument(g_86, 0);
      i_86 = ATgetArgument(g_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_86), not_null(i_86));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm d_113 (ATerm))
{
  ATerm o_86 = NULL;
  ATerm q_86 = NULL;
  o_86 = t;
  {
    ATerm r_86 = NULL;
    t = term_q_15;
    {
      t = d_113(t);
      {
        r_86 = t;
        if(((q_86 != NULL) && (q_86 != r_86)))
          _fail(r_86);
        else
          q_86 = r_86;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_86), not_null(o_86));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  z_86 = t;
  y_86 :
  if(match_cons(z_86, sym__2))
    {
      a_87 = ATgetArgument(z_86, 0);
      b_87 = ATgetArgument(z_86, 1);
      {
        ATerm l_87 = NULL,m_87 = NULL;
        ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
        t = not_null(z_86);
        {
          ATerm x_2 (ATerm t)
          {
            t = term_f_19;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            n_87 = t;
            w_86 :
            if(match_cons(n_87, sym_Defined_3))
              {
                o_87 = ATgetArgument(n_87, 0);
                p_87 = ATgetArgument(n_87, 1);
                q_87 = ATgetArgument(n_87, 2);
                x_86 :
                if(match_string(o_87, "b_0"))
                  {
                    if(((l_87 != NULL) && (l_87 != p_87)))
                      _fail(p_87);
                    else
                      l_87 = p_87;
                    if(((m_87 != NULL) && (m_87 != q_87)))
                      _fail(q_87);
                    else
                      m_87 = q_87;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(m_87)), not_null(l_87));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL;
    c_88 = t;
    b_88 :
    if(match_cons(c_88, sym_SDef_3))
      {
        d_88 = ATgetArgument(c_88, 0);
        e_88 = ATgetArgument(c_88, 1);
        f_88 = ATgetArgument(c_88, 2);
        {
          ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
          ATerm g_19;
          g_19 = t;
          {
            ATerm n_88 = NULL;
            t = not_null(e_88);
            {
              ATerm o_88 = NULL;
              t = length_0(t);
              {
                n_88 = t;
                {
                  if(((l_88 != NULL) && (l_88 != n_88)))
                    _fail(n_88);
                  else
                    l_88 = n_88;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_88), not_null(l_88));
                    {
                      ATerm p_88 = NULL,r_88 = NULL;
                      ATerm h_19 = t;
                      int k_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          ;
                          LocalPopChoice(k_19);
                        }
                      else
                        {
                          t = h_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        o_88 = t;
                        {
                          if(((k_88 != NULL) && (k_88 != o_88)))
                            _fail(o_88);
                          else
                            k_88 = o_88;
                          {
                            ATerm q_88 = NULL;
                            t = not_null(d_88);
                            {
                              ATerm l_19 = t;
                              int m_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  ;
                                  LocalPopChoice(m_19);
                                }
                              else
                                {
                                  t = l_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                q_88 = t;
                                if(((p_88 != NULL) && (p_88 != q_88)))
                                  _fail(q_88);
                                else
                                  p_88 = q_88;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_88)), not_null(p_88));
                              {
                                t = union_0(t);
                                {
                                  r_88 = t;
                                  {
                                    if(((m_88 != NULL) && (m_88 != r_88)))
                                      _fail(r_88);
                                    else
                                      m_88 = r_88;
                                    {
                                      ATerm n_19;
                                      n_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_88), not_null(l_88)), (ATerm) ATmakeAppl(sym_Defined_3, term_s_19, not_null(c_88), not_null(k_88)));
                                        {
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = term_f_19;
                                            return(t);
                                          }
                                          t = assert_1(t, z_2);
                                        }
                                      }
                                      t = n_19;
                                      {
                                        ATerm t_19;
                                        t_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_88), (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, not_null(m_88)));
                                          {
                                            ATerm a_3 (ATerm t)
                                            {
                                              t = term_e_19;
                                              return(t);
                                            }
                                            t = assert_1(t, a_3);
                                          }
                                        }
                                        t = t_19;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = g_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, y_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    t = term_v_19;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_b_7;
    return(t);
  }
  t = foldr_3(t, b_3, add_0, c_3);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
  z_88 = t;
  y_88 :
  if(match_cons(z_88, sym__2))
    {
      a_89 = ATgetArgument(z_88, 0);
      b_89 = ATgetArgument(z_88, 1);
      if(((a_89 != NULL) && (a_89 != b_89)))
        _fail(b_89);
      else
        a_89 = b_89;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_101 (ATerm), ATerm g_101 (ATerm))
{
  ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
  j_89 = t;
  i_89 :
  if(((ATgetType(j_89) == AT_LIST) && !(ATisEmpty(j_89))))
    {
      k_89 = ATgetFirst((ATermList) j_89);
      l_89 = (ATerm) ATgetNext((ATermList) j_89);
      {
        t = g_101(t);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm o_89 = NULL;
            o_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_89), not_null(o_89));
              t = f_101(t);
            }
            return(t);
          }
          t = fetch_1(t, d_3);
        }
        t = not_null(l_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_101 (ATerm))
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  v_89 :
  if(match_cons(w_89, sym__2))
    {
      x_89 = ATgetArgument(w_89, 0);
      y_89 = ATgetArgument(w_89, 1);
      {
        t = not_null(x_89);
        {
          ATerm c_90 (ATerm t)
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_89);
                ;
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
                {
                  ATerm y_19 = t;
                  int z_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(y_89);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_101, e_3);
                      t = c_90(t);
                      ;
                      LocalPopChoice(z_19);
                    }
                  else
                    {
                      t = y_19;
                      t = Cons_2(t, _id, c_90);
                    }
                }
              }
            return(t);
          }
          t = c_90(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm))
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_101(t);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
        h_90 = t;
        g_90 :
        if(((ATgetType(h_90) == AT_LIST) && !(ATisEmpty(h_90))))
          {
            i_90 = ATgetFirst((ATermList) h_90);
            j_90 = (ATerm) ATgetNext((ATermList) h_90);
            {
              ATerm m_90 = NULL,o_90 = NULL;
              ATerm g_20;
              g_20 = t;
              {
                ATerm n_90 = NULL;
                t = not_null(i_90);
                {
                  t = q_101(t);
                  {
                    n_90 = t;
                    if(((m_90 != NULL) && (m_90 != n_90)))
                      _fail(n_90);
                    else
                      m_90 = n_90;
                  }
                }
              }
              t = g_20;
              {
                ATerm p_90 = NULL;
                t = not_null(j_90);
                {
                  t = foldr_3(t, o_101, p_101, q_101);
                  {
                    p_90 = t;
                    if(((o_90 != NULL) && (o_90 != p_90)))
                      _fail(p_90);
                    else
                      o_90 = p_90;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_90), not_null(o_90));
                  t = p_101(t);
                }
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm definition_names_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL;
    x_90 = t;
    w_90 :
    if(match_cons(x_90, sym_SDef_3))
      {
        y_90 = ATgetArgument(x_90, 0);
        z_90 = ATgetArgument(x_90, 1);
        a_91 = ATgetArgument(x_90, 2);
        {
          ATerm d_91 = NULL;
          ATerm e_91 = NULL;
          t = not_null(z_90);
          {
            t = length_0(t);
            {
              e_91 = t;
              if(((d_91 != NULL) && (d_91 != e_91)))
                _fail(e_91);
              else
                d_91 = e_91;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(y_90), not_null(d_91)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, f_3, union_0, g_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm j_91 = NULL,n_91 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm m_91 = NULL;
    t = definition_names_0(t);
    {
      m_91 = t;
      if(((j_91 != NULL) && (j_91 != m_91)))
        _fail(m_91);
      else
        j_91 = m_91;
    }
  }
  t = k_20;
  {
    ATerm o_91 = NULL;
    t = sort_defs_0(t);
    {
      o_91 = t;
      if(((n_91 != NULL) && (n_91 != o_91)))
        _fail(o_91);
      else
        n_91 = o_91;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(j_91), not_null(n_91), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm w_91 = NULL,x_91 = NULL;
  w_91 = t;
  v_91 :
  if(match_cons(w_91, sym_Strategies_1))
    {
      x_91 = ATgetArgument(w_91, 0);
      {
        ATerm c_92 = NULL,e_92 = NULL;
        ATerm d_92 = NULL;
        t = SSLgetAnnotations(not_null(w_91));
        {
          d_92 = t;
          if(((c_92 != NULL) && (c_92 != d_92)))
            _fail(d_92);
          else
            c_92 = d_92;
        }
        {
          t = not_null(x_91);
          {
            ATerm g_92 = NULL;
            t = i_75(t);
            {
              e_92 = t;
              {
                ATerm h_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(e_92)), not_null(c_92));
                {
                  h_92 = t;
                  if(((g_92 != NULL) && (g_92 != h_92)))
                    _fail(h_92);
                  else
                    g_92 = h_92;
                }
                t = not_null(g_92);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm))
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
  a_93 = t;
  z_92 :
  if(((ATgetType(a_93) == AT_LIST) && !(ATisEmpty(a_93))))
    {
      b_93 = ATgetFirst((ATermList) a_93);
      c_93 = (ATerm) ATgetNext((ATermList) a_93);
      {
        ATerm g_93 = NULL,i_93 = NULL;
        ATerm h_93 = NULL;
        t = SSLgetAnnotations(not_null(a_93));
        {
          h_93 = t;
          if(((g_93 != NULL) && (g_93 != h_93)))
            _fail(h_93);
          else
            g_93 = h_93;
        }
        {
          t = not_null(b_93);
          {
            ATerm k_93 = NULL;
            t = x_72(t);
            {
              i_93 = t;
              {
                t = not_null(c_93);
                {
                  ATerm m_93 = NULL;
                  t = y_72(t);
                  {
                    k_93 = t;
                    {
                      ATerm n_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_93)), not_null(i_93)), not_null(g_93));
                      {
                        n_93 = t;
                        if(((m_93 != NULL) && (m_93 != n_93)))
                          _fail(n_93);
                        else
                          m_93 = n_93;
                      }
                      t = not_null(m_93);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm z_93 = NULL,a_94 = NULL;
  z_93 = t;
  y_93 :
  if(match_cons(z_93, sym_Specification_1))
    {
      a_94 = ATgetArgument(z_93, 0);
      {
        ATerm d_94 = NULL,f_94 = NULL;
        ATerm e_94 = NULL;
        t = SSLgetAnnotations(not_null(z_93));
        {
          e_94 = t;
          if(((d_94 != NULL) && (d_94 != e_94)))
            _fail(e_94);
          else
            d_94 = e_94;
        }
        {
          t = not_null(a_94);
          {
            ATerm h_94 = NULL;
            t = k_75(t);
            {
              f_94 = t;
              {
                ATerm i_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(f_94)), not_null(d_94));
                {
                  i_94 = t;
                  if(((h_94 != NULL) && (h_94 != i_94)))
                    _fail(i_94);
                  else
                    h_94 = i_94;
                }
                t = not_null(h_94);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  s_94 :
  if(match_cons(t_94, sym__2))
    {
      u_94 = ATgetArgument(t_94, 0);
      v_94 = ATgetArgument(t_94, 1);
      {
        ATerm z_94 = NULL,b_95 = NULL;
        ATerm a_95 = NULL;
        t = SSLgetAnnotations(not_null(t_94));
        {
          a_95 = t;
          if(((z_94 != NULL) && (z_94 != a_95)))
            _fail(a_95);
          else
            z_94 = a_95;
        }
        {
          t = not_null(u_94);
          {
            ATerm d_95 = NULL;
            t = o_71(t);
            {
              b_95 = t;
              {
                t = not_null(v_94);
                {
                  ATerm f_95 = NULL;
                  t = p_71(t);
                  {
                    d_95 = t;
                    {
                      ATerm g_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_95), not_null(d_95)), not_null(z_94));
                      {
                        g_95 = t;
                        if(((f_95 != NULL) && (f_95 != g_95)))
                          _fail(g_95);
                        else
                          f_95 = g_95;
                      }
                      t = not_null(f_95);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm o_95 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm p_95 = NULL,q_95 = NULL;
      p_95 = t;
      n_95 :
      if(match_cons(p_95, sym_Program_1))
        {
          q_95 = ATgetArgument(p_95, 0);
          if(((o_95 != NULL) && (o_95 != q_95)))
            _fail(q_95);
          else
            o_95 = q_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_20), not_null(o_95)), term_p_20));
      {
        t = printnl_0(t);
        {
          t = term_b_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
  u_95 = t;
  t_95 :
  if(match_cons(u_95, sym__2))
    {
      v_95 = ATgetArgument(u_95, 0);
      w_95 = ATgetArgument(u_95, 1);
      {
        ATerm r_20;
        r_20 = t;
        t = SSL_printnl(not_null(v_95), not_null(w_95));
        t = r_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_96 = NULL;
  b_96 = t;
  t = SSL_implode_string(not_null(b_96));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL;
        l_96 = t;
        f_96 :
        if(((ATgetType(l_96) == AT_LIST) && !(ATisEmpty(l_96))))
          {
            m_96 = ATgetFirst((ATermList) l_96);
            n_96 = (ATerm) ATgetNext((ATermList) l_96);
            {
              t = not_null(m_96);
              {
                ATerm k_3 (ATerm t)
                {
                  t = not_null(n_96);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_3);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm x_96 = NULL;
  ATerm z_96 = NULL;
  x_96 = t;
  {
    ATerm a_97 = NULL;
    ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
    t = not_null(x_96);
    {
      a_97 = t;
      {
        t = SSL_explode_term(not_null(a_97));
        {
          c_97 = t;
          v_96 :
          if(match_cons(c_97, sym__2))
            {
              d_97 = ATgetArgument(c_97, 0);
              e_97 = ATgetArgument(c_97, 1);
              w_96 :
              if(match_string(d_97, ""))
                {
                  if(((z_96 != NULL) && (z_96 != e_97)))
                    _fail(e_97);
                  else
                    z_96 = e_97;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(z_96);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_84 (ATerm))
{
  ATerm i_97 (ATerm t)
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_97);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        {
          t = Nil_0(t);
          t = w_84(t);
        }
      }
    return(t);
  }
  t = i_97(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
  l_97 = t;
  k_97 :
  if(match_cons(l_97, sym__2))
    {
      m_97 = ATgetArgument(l_97, 0);
      n_97 = ATgetArgument(l_97, 1);
      {
        t = not_null(m_97);
        {
          ATerm l_3 (ATerm t)
          {
            t = not_null(n_97);
            return(t);
          }
          t = at_end_1(t, l_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm w_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = w_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_97 = NULL;
  s_97 = t;
  t = SSL_explode_string(not_null(s_97));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  t = SSL_is_string(not_null(w_97));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm c_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_3);
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = c_21;
            {
              ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
              h_98 = t;
              e_98 :
              if(match_cons(h_98, sym_Path_1))
                {
                  i_98 = ATgetArgument(h_98, 0);
                  t = not_null(i_98);
                }
              else
                {
                  if(match_cons(h_98, sym_Var_1))
                    {
                      i_98 = ATgetArgument(h_98, 0);
                      {
                        t = not_null(i_98);
                        {
                          ATerm f_21 = t;
                          int o_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(o_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm n_3 (ATerm t)
                                {
                                  t = term_p_21;
                                  return(t);
                                }
                                t = debug_1(t, n_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_98, sym_Prefix_2))
                        {
                          i_98 = ATgetArgument(h_98, 0);
                          j_98 = ATgetArgument(h_98, 1);
                          {
                            ATerm o_98 = NULL,q_98 = NULL;
                            ATerm q_21;
                            q_21 = t;
                            {
                              ATerm p_98 = NULL;
                              t = not_null(i_98);
                              {
                                t = eval_config_0(t);
                                {
                                  p_98 = t;
                                  if(((o_98 != NULL) && (o_98 != p_98)))
                                    _fail(p_98);
                                  else
                                    o_98 = p_98;
                                }
                              }
                            }
                            t = q_21;
                            {
                              ATerm r_98 = NULL;
                              t = not_null(j_98);
                              {
                                t = eval_config_0(t);
                                {
                                  r_98 = t;
                                  if(((q_98 != NULL) && (q_98 != r_98)))
                                    _fail(r_98);
                                  else
                                    q_98 = r_98;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_98), not_null(q_98));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm f_99 = NULL;
  f_99 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_21, not_null(f_99));
    {
      t = table_get_0(t);
      {
        ATerm o_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_21;
            z_21 = t;
            {
              ATerm h_99 = NULL;
              ATerm i_99 = NULL;
              i_99 = t;
              if(((h_99 != NULL) && (h_99 != i_99)))
                _fail(i_99);
              else
                h_99 = i_99;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_r_21, not_null(f_99), not_null(h_99));
                t = table_put_0(t);
              }
            }
            t = z_21;
          }
          return(t);
        }
        t = try_1(t, o_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_108 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm a_22;
    a_22 = t;
    {
      ATerm m_99 = NULL;
      ATerm n_99 = NULL;
      t = term_g_22;
      {
        t = get_config_0(t);
        {
          n_99 = t;
          if(((m_99 != NULL) && (m_99 != n_99)))
            _fail(n_99);
          else
            m_99 = n_99;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_99), term_h_22);
        t = geq_0(t);
      }
    }
    t = a_22;
    t = b_108(t);
    return(t);
  }
  t = try_1(t, p_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL;
  r_99 = t;
  q_99 :
  if(match_cons(r_99, sym__2))
    {
      s_99 = ATgetArgument(r_99, 0);
      t_99 = ATgetArgument(r_99, 1);
      t = SSL_WriteToTextFile(not_null(s_99), not_null(t_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL;
  z_99 = t;
  y_99 :
  if(match_cons(z_99, sym__2))
    {
      a_100 = ATgetArgument(z_99, 0);
      b_100 = ATgetArgument(z_99, 1);
      t = SSL_WriteToBinaryFile(not_null(a_100), not_null(b_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_100 = NULL;
  ATerm m_22;
  m_22 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm k_100 = NULL,l_100 = NULL;
            k_100 = t;
            g_100 :
            if(match_cons(k_100, sym_Output_1))
              {
                l_100 = ATgetArgument(k_100, 0);
                if(((j_100 != NULL) && (j_100 != l_100)))
                  _fail(l_100);
                else
                  j_100 = l_100;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_3);
          ;
          LocalPopChoice(s_22);
        }
      else
        {
          t = r_22;
          {
            ATerm m_100 = NULL;
            t = term_t_22;
            {
              m_100 = t;
              if(((j_100 != NULL) && (j_100 != m_100)))
                _fail(m_100);
              else
                j_100 = m_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_3, _id);
  }
  t = m_22;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(j_100);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, s_3);
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm n_100 = NULL;
              n_100 = t;
              i_100 :
              if(!(match_cons(n_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_3);
            return(t);
          }
          t = _2(t, u_3, WriteToBinaryFile_0);
          ;
          LocalPopChoice(v_22);
        }
      else
        {
          t = u_22;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm i_106 (ATerm))
{
  ATerm a_101 = NULL,e_101 = NULL,h_101 = NULL,i_101 = NULL;
  ATerm w_22;
  w_22 = t;
  t = dtime_0(t);
  t = w_22;
  {
    t = i_106(t);
    {
      ATerm x_22;
      x_22 = t;
      {
        ATerm d_101 = NULL;
        t = dtime_0(t);
        {
          d_101 = t;
          if(((a_101 != NULL) && (a_101 != d_101)))
            _fail(d_101);
          else
            a_101 = d_101;
        }
      }
      t = x_22;
      {
        e_101 = t;
        z_100 :
        if(match_cons(e_101, sym__2))
          {
            h_101 = ATgetArgument(e_101, 0);
            i_101 = ATgetArgument(e_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_101))), not_null(i_101));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_105 (ATerm))
{
  ATerm y_22;
  y_22 = t;
  {
    ATerm u_101 = NULL,w_101 = NULL;
    ATerm z_22;
    z_22 = t;
    {
      ATerm v_101 = NULL;
      t = d_105(t);
      {
        v_101 = t;
        if(((u_101 != NULL) && (u_101 != v_101)))
          _fail(v_101);
        else
          u_101 = v_101;
      }
    }
    t = z_22;
    {
      ATerm x_101 = NULL;
      x_101 = t;
      if(((w_101 != NULL) && (w_101 != x_101)))
        _fail(x_101);
      else
        w_101 = x_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_101)), not_null(u_101)));
        t = printnl_0(t);
      }
    }
  }
  t = y_22;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm d_102 = NULL;
  ATerm a_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_102 = NULL;
      e_102 = t;
      {
        if(((d_102 != NULL) && (d_102 != e_102)))
          _fail(e_102);
        else
          d_102 = e_102;
        t = SSL_ReadFromFile(not_null(d_102));
      }
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = a_23;
      {
        ATerm w_3 (ATerm t)
        {
          t = term_h_23;
          return(t);
        }
        t = debug_1(t, w_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_91 (ATerm), ATerm l_91 (ATerm))
{
  ATerm i_102 = NULL,k_102 = NULL;
  ATerm i_23;
  i_23 = t;
  {
    ATerm j_102 = NULL;
    t = k_91(t);
    {
      j_102 = t;
      if(((i_102 != NULL) && (i_102 != j_102)))
        _fail(j_102);
      else
        i_102 = j_102;
    }
  }
  t = i_23;
  {
    ATerm l_102 = NULL;
    t = l_91(t);
    {
      l_102 = t;
      if(((k_102 != NULL) && (k_102 != l_102)))
        _fail(l_102);
      else
        k_102 = l_102;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_102), not_null(k_102));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_102 = NULL;
  ATerm j_23;
  j_23 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 (ATerm t)
        {
          ATerm s_102 = NULL,t_102 = NULL;
          s_102 = t;
          p_102 :
          if(match_cons(s_102, sym_Input_1))
            {
              t_102 = ATgetArgument(s_102, 0);
              if(((r_102 != NULL) && (r_102 != t_102)))
                _fail(t_102);
              else
                r_102 = t_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_3);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm u_102 = NULL;
          t = term_t_23;
          {
            u_102 = t;
            if(((r_102 != NULL) && (r_102 != u_102)))
              _fail(u_102);
            else
              r_102 = u_102;
          }
        }
      }
  }
  t = j_23;
  {
    ATerm y_3 (ATerm t)
    {
      t = not_null(r_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm y_102 = NULL;
    y_102 = t;
    x_102 :
    if(!(match_string(y_102, "-v")))
      {
        if(!(match_string(y_102, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_x_23;
    t = set_config_0(t);
    t = term_y_23;
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_z_23;
    return(t);
  }
  t = Option_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm b_103 = NULL;
    b_103 = t;
    z_102 :
    if(!(match_string(b_103, "-k")))
      {
        if(!(match_string(b_103, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm a_24;
    a_24 = t;
    {
      ATerm c_103 = NULL;
      ATerm d_103 = NULL;
      t = string_to_int_0(t);
      {
        d_103 = t;
        if(((c_103 != NULL) && (c_103 != d_103)))
          _fail(d_103);
        else
          c_103 = d_103;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(c_103));
        t = set_config_0(t);
      }
    }
    t = a_24;
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_c_24;
    return(t);
  }
  t = ArgOption_3(t, c_4, d_4, e_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_103 = NULL;
  g_103 = t;
  t = SSL_string_to_int(not_null(g_103));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 (ATerm t)
      {
        ATerm o_103 = NULL;
        o_103 = t;
        j_103 :
        if(!(match_string(o_103, "-S")))
          {
            if(!(match_string(o_103, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_f_24;
        t = set_config_0(t);
        t = term_g_24;
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_i_24;
        return(t);
      }
      t = Option_3(t, f_4, g_4, h_4);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              ATerm p_103 = NULL;
              p_103 = t;
              k_103 :
              if(!(match_string(p_103, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              ATerm s_103 = NULL;
              ATerm l_24;
              l_24 = t;
              {
                ATerm q_103 = NULL;
                ATerm r_103 = NULL;
                t = string_to_int_0(t);
                {
                  r_103 = t;
                  if(((q_103 != NULL) && (q_103 != r_103)))
                    _fail(r_103);
                  else
                    q_103 = r_103;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_22, not_null(q_103));
                  t = set_config_0(t);
                }
              }
              t = l_24;
              {
                ATerm t_103 = NULL;
                t_103 = t;
                if(((s_103 != NULL) && (s_103 != t_103)))
                  _fail(t_103);
                else
                  s_103 = t_103;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_103));
              }
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = term_n_24;
              return(t);
            }
            t = ArgOption_3(t, i_4, j_4, n_4);
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            {
              ATerm o_4 (ATerm t)
              {
                ATerm u_103 = NULL;
                u_103 = t;
                n_103 :
                if(!(match_string(u_103, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = term_t_24;
                t = set_config_0(t);
                t = term_c_25;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_m_25;
                return(t);
              }
              t = Option_3(t, o_4, p_4, q_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm a_104 = NULL;
    a_104 = t;
    x_103 :
    if(!(match_string(a_104, "-o")))
      {
        if(!(match_string(a_104, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm d_104 = NULL;
    ATerm c_26;
    c_26 = t;
    {
      ATerm b_104 = NULL;
      ATerm c_104 = NULL;
      c_104 = t;
      if(((b_104 != NULL) && (b_104 != c_104)))
        _fail(c_104);
      else
        b_104 = c_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(b_104));
        t = set_config_0(t);
      }
    }
    t = c_26;
    {
      ATerm e_104 = NULL;
      e_104 = t;
      if(((d_104 != NULL) && (d_104 != e_104)))
        _fail(e_104);
      else
        d_104 = e_104;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_104));
    }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  t = ArgOption_3(t, r_4, s_4, t_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm i_104 = NULL;
          i_104 = t;
          h_104 :
          if(!(match_string(i_104, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_i_26;
          t = set_config_0(t);
          t = term_j_26;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_k_26;
          return(t);
        }
        t = Option_3(t, u_4, v_4, w_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL;
  o_104 = t;
  m_104 :
  if(match_string(o_104, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(o_104) == AT_LIST) && !(ATisEmpty(o_104))))
        {
          p_104 = ATgetFirst((ATermList) o_104);
          q_104 = (ATerm) ATgetNext((ATermList) o_104);
          n_104 :
          if(((ATgetType(q_104) == AT_LIST) && !(ATisEmpty(q_104))))
            {
              r_104 = ATgetFirst((ATermList) q_104);
              s_104 = (ATerm) ATgetNext((ATermList) q_104);
              {
                ATerm w_104 = NULL;
                ATerm l_26;
                l_26 = t;
                {
                  t = not_null(p_104);
                  t = k_0(t);
                }
                t = l_26;
                {
                  ATerm x_104 = NULL;
                  t = not_null(r_104);
                  {
                    t = l_0(t);
                    {
                      x_104 = t;
                      if(((w_104 != NULL) && (w_104 != x_104)))
                        _fail(x_104);
                      else
                        w_104 = x_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_104)), not_null(w_104));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm g_105 = NULL;
    g_105 = t;
    b_105 :
    if(!(match_string(g_105, "-i")))
      {
        if(!(match_string(g_105, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm j_105 = NULL;
    ATerm m_26;
    m_26 = t;
    {
      ATerm h_105 = NULL;
      ATerm i_105 = NULL;
      i_105 = t;
      if(((h_105 != NULL) && (h_105 != i_105)))
        _fail(i_105);
      else
        h_105 = i_105;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_26, not_null(h_105));
        t = set_config_0(t);
      }
    }
    t = m_26;
    {
      ATerm k_105 = NULL;
      k_105 = t;
      if(((j_105 != NULL) && (j_105 != k_105)))
        _fail(k_105);
      else
        j_105 = k_105;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_105));
    }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  t = ArgOption_3(t, x_4, y_4, z_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATempty, term_u_26));
  {
    t = printnl_0(t);
    {
      t = term_b_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_105 = NULL;
  o_105 = t;
  t = SSL_TicksToSeconds(not_null(o_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL,v_105 = NULL;
  t_105 = t;
  s_105 :
  if(match_cons(t_105, sym__2))
    {
      u_105 = ATgetArgument(t_105, 0);
      v_105 = ATgetArgument(t_105, 1);
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_105), not_null(v_105));
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = SSL_addr(not_null(u_105), not_null(v_105));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_101 (ATerm), ATerm n_101 (ATerm))
{
  ATerm y_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_101(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = y_26;
      {
        ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL;
        c_106 = t;
        b_106 :
        if(((ATgetType(c_106) == AT_LIST) && !(ATisEmpty(c_106))))
          {
            d_106 = ATgetFirst((ATermList) c_106);
            e_106 = (ATerm) ATgetNext((ATermList) c_106);
            {
              ATerm j_106 = NULL;
              ATerm k_106 = NULL;
              t = not_null(e_106);
              {
                t = foldr_2(t, m_101, n_101);
                {
                  k_106 = t;
                  if(((j_106 != NULL) && (j_106 != k_106)))
                    _fail(k_106);
                  else
                    j_106 = k_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_106), not_null(j_106));
                t = n_101(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm q_100 (ATerm), ATerm r_100 (ATerm))
{
  ATerm b_107 = NULL;
  ATerm h_107 = NULL;
  b_107 = t;
  {
    ATerm i_107 = NULL;
    ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL;
    t = not_null(b_107);
    {
      i_107 = t;
      {
        t = SSL_explode_term(not_null(i_107));
        {
          k_107 = t;
          a_107 :
          if(match_cons(k_107, sym__2))
            {
              l_107 = ATgetArgument(k_107, 0);
              m_107 = ATgetArgument(k_107, 1);
              if(((h_107 != NULL) && (h_107 != m_107)))
                _fail(m_107);
              else
                h_107 = m_107;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_107);
      t = foldr_2(t, q_100, r_100);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm a_5 (ATerm t)
    {
      t = term_v_19;
      return(t);
    }
    t = crush_2(t, a_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_107 = NULL,t_107 = NULL,u_107 = NULL;
  s_107 = t;
  r_107 :
  if(match_cons(s_107, sym__2))
    {
      t_107 = ATgetArgument(s_107, 0);
      u_107 = ATgetArgument(s_107, 1);
      {
        ATerm e_27;
        e_27 = t;
        {
          ATerm o_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_107), not_null(u_107));
              ;
              LocalPopChoice(w_27);
            }
          else
            {
              t = o_27;
              t = SSL_gtr(not_null(t_107), not_null(u_107));
            }
        }
        t = e_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm c_108 = NULL;
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
      d_108 = t;
      z_107 :
      if(match_cons(d_108, sym__2))
        {
          e_108 = ATgetArgument(d_108, 0);
          f_108 = ATgetArgument(d_108, 1);
          {
            if(((c_108 != NULL) && (c_108 != e_108)))
              _fail(e_108);
            else
              c_108 = e_108;
            if(((c_108 != NULL) && (c_108 != f_108)))
              _fail(f_108);
            else
              c_108 = f_108;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_108 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm i_28;
    i_28 = t;
    {
      ATerm i_108 = NULL;
      ATerm j_108 = NULL;
      t = term_g_22;
      {
        t = get_config_0(t);
        {
          j_108 = t;
          if(((i_108 != NULL) && (i_108 != j_108)))
            _fail(j_108);
          else
            i_108 = j_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_108), term_b_7);
        t = geq_0(t);
      }
    }
    t = i_28;
    t = a_108(t);
    return(t);
  }
  t = try_1(t, b_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm n_108 = NULL,p_108 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm o_108 = NULL;
      t = run_time_0(t);
      {
        o_108 = t;
        if(((n_108 != NULL) && (n_108 != o_108)))
          _fail(o_108);
        else
          n_108 = o_108;
      }
    }
    t = j_28;
    {
      ATerm q_108 = NULL;
      t = term_k_28;
      {
        t = get_config_0(t);
        {
          q_108 = t;
          if(((p_108 != NULL) && (p_108 != q_108)))
            _fail(q_108);
          else
            p_108 = q_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_28), not_null(n_108)), term_l_28), not_null(p_108)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_5);
  {
    t = term_v_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_108 = NULL;
  x_108 = t;
  w_108 :
  if(match_cons(x_108, sym_Version_0))
    {
      ATerm z_108 = NULL,b_109 = NULL;
      ATerm n_28;
      n_28 = t;
      {
        ATerm a_109 = NULL;
        t = SSLgetAnnotations(not_null(x_108));
        {
          a_109 = t;
          if(((z_108 != NULL) && (z_108 != a_109)))
            _fail(a_109);
          else
            z_108 = a_109;
        }
      }
      t = n_28;
      {
        ATerm c_109 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_108));
        {
          c_109 = t;
          if(((b_109 != NULL) && (b_109 != c_109)))
            _fail(c_109);
          else
            b_109 = c_109;
        }
        t = not_null(b_109);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_106 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_5);
  t = g_106(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_109 = NULL;
  i_109 = t;
  t = SSL_table_create(not_null(i_109));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_109 = NULL;
  m_109 = t;
  {
    ATerm s_28;
    s_28 = t;
    {
      t = term_t_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_28, term_u_28, not_null(m_109));
          t = table_put_0(t);
        }
      }
    }
    t = s_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_109 = NULL;
  q_109 = t;
  t = SSL_table_destroy(not_null(q_109));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_109 = NULL;
  u_109 = t;
  t = SSL_exit(not_null(u_109));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL;
  y_109 = t;
  x_109 :
  if(((ATgetType(y_109) == AT_LIST) && ATisEmpty(y_109)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_109) == AT_LIST) && !(ATisEmpty(y_109))))
        {
          z_109 = ATgetFirst((ATermList) y_109);
          a_110 = (ATerm) ATgetNext((ATermList) y_109);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm v_28;
  v_28 = t;
  {
    ATerm j_110 = NULL;
    ATerm m_110 = NULL;
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        {
          ATerm k_110 = NULL;
          ATerm l_110 = NULL;
          l_110 = t;
          if(((k_110 != NULL) && (k_110 != l_110)))
            _fail(l_110);
          else
            k_110 = l_110;
          t = (ATerm) ATinsert(ATempty, not_null(k_110));
        }
      }
    {
      m_110 = t;
      if(((j_110 != NULL) && (j_110 != m_110)))
        _fail(m_110);
      else
        j_110 = m_110;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_22, not_null(j_110));
      t = printnl_0(t);
    }
  }
  t = v_28;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_110 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm p_110 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = Cons_2(t, h_84, p_110);
      }
    return(t);
  }
  t = p_110(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL;
  y_110 = t;
  v_110 :
  if(((ATgetType(y_110) == AT_LIST) && !(ATisEmpty(y_110))))
    {
      w_110 = ATgetFirst((ATermList) y_110);
      x_110 = (ATerm) ATgetNext((ATermList) y_110);
      {
        ATerm b_111 = NULL;
        t = not_null(x_110);
        {
          ATerm a_29;
          a_29 = t;
          {
            ATerm c_111 = NULL,e_111 = NULL,g_111 = NULL;
            ATerm b_29;
            b_29 = t;
            {
              ATerm d_111 = NULL;
              t = i_0(t);
              {
                d_111 = t;
                if(((c_111 != NULL) && (c_111 != d_111)))
                  _fail(d_111);
                else
                  c_111 = d_111;
              }
            }
            t = b_29;
            {
              ATerm f_111 = NULL;
              t = not_null(w_110);
              {
                t = g_0(t);
                {
                  f_111 = t;
                  if(((e_111 != NULL) && (e_111 != f_111)))
                    _fail(f_111);
                  else
                    e_111 = f_111;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_111)), not_null(e_111));
                {
                  g_111 = t;
                  if(((b_111 != NULL) && (b_111 != g_111)))
                    _fail(g_111);
                  else
                    b_111 = g_111;
                }
              }
            }
          }
          t = a_29;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(b_111);
              return(t);
            }
            t = reverse_acc_2(t, g_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_110) == AT_LIST) && ATisEmpty(y_110)))
        {
          {
            t = term_q_15;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_110 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm r_111 = NULL,s_111 = NULL;
  r_111 = t;
  q_111 :
  if(match_cons(r_111, sym_Program_1))
    {
      s_111 = ATgetArgument(r_111, 0);
      {
        ATerm v_111 = NULL,x_111 = NULL;
        ATerm w_111 = NULL;
        t = SSLgetAnnotations(not_null(r_111));
        {
          w_111 = t;
          if(((v_111 != NULL) && (v_111 != w_111)))
            _fail(w_111);
          else
            v_111 = w_111;
        }
        {
          t = not_null(s_111);
          {
            ATerm z_111 = NULL;
            t = x_78(t);
            {
              x_111 = t;
              {
                ATerm a_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_111)), not_null(v_111));
                {
                  a_112 = t;
                  if(((z_111 != NULL) && (z_111 != a_112)))
                    _fail(a_112);
                  else
                    z_111 = a_112;
                }
                t = not_null(z_111);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_112 = NULL;
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_112 = NULL;
      t = term_k_28;
      {
        t = get_config_0(t);
        {
          n_112 = t;
          if(((m_112 != NULL) && (m_112 != n_112)))
            _fail(n_112);
          else
            m_112 = n_112;
        }
      }
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm h_5 (ATerm t)
          {
            ATerm o_112 = NULL;
            o_112 = t;
            if(((m_112 != NULL) && (m_112 != o_112)))
              _fail(o_112);
            else
              m_112 = o_112;
            return(t);
          }
          t = Program_1(t, h_5);
          return(t);
        }
        t = option_defined_1(t, g_5);
      }
    }
  {
    ATerm i_5 (ATerm t)
    {
      ATerm j_5 (ATerm t)
      {
        t = not_null(m_112);
        return(t);
      }
      t = short_description_1(t, j_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_5);
    {
      t = term_e_29;
      {
        t = echo_0(t);
        {
          t = term_h_29;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm p_112 = NULL;
                  ATerm q_112 = NULL;
                  q_112 = t;
                  if(((p_112 != NULL) && (p_112 != q_112)))
                    _fail(q_112);
                  else
                    p_112 = q_112;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_112)), term_i_29);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_5);
                {
                  ATerm l_5 (ATerm t)
                  {
                    ATerm r_112 = NULL;
                    ATerm v_112 = NULL;
                    ATerm m_5 (ATerm t)
                    {
                      t = not_null(m_112);
                      return(t);
                    }
                    t = long_description_1(t, m_5);
                    {
                      v_112 = t;
                      if(((r_112 != NULL) && (r_112 != v_112)))
                        _fail(v_112);
                      else
                        r_112 = v_112;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(r_112)), term_j_29);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_5);
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm k_29;
  k_29 = t;
  {
    ATerm c_113 = NULL;
    ATerm e_113 = NULL;
    e_113 = t;
    if(((c_113 != NULL) && (c_113 != e_113)))
      _fail(e_113);
    else
      c_113 = e_113;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATempty, not_null(c_113)));
      t = printnl_0(t);
    }
  }
  t = k_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_105 (ATerm))
{
  ATerm l_29;
  l_29 = t;
  {
    t = e_105(t);
    t = debug_0(t);
  }
  t = l_29;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm l_113 = NULL,m_113 = NULL;
  l_113 = t;
  k_113 :
  if(match_cons(l_113, sym_Undefined_1))
    {
      m_113 = ATgetArgument(l_113, 0);
      {
        ATerm p_113 = NULL,r_113 = NULL;
        ATerm q_113 = NULL;
        t = SSLgetAnnotations(not_null(l_113));
        {
          q_113 = t;
          if(((p_113 != NULL) && (p_113 != q_113)))
            _fail(q_113);
          else
            p_113 = q_113;
        }
        {
          t = not_null(m_113);
          {
            ATerm t_113 = NULL;
            t = y_78(t);
            {
              r_113 = t;
              {
                ATerm u_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_113)), not_null(p_113));
                {
                  u_113 = t;
                  if(((t_113 != NULL) && (t_113 != u_113)))
                    _fail(u_113);
                  else
                    t_113 = u_113;
                }
                t = not_null(t_113);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_84 (ATerm))
{
  ATerm z_113 (ATerm t)
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_84, _id);
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = Cons_2(t, _id, z_113);
      }
    return(t);
  }
  t = z_113(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_109 (ATerm))
{
  t = fetch_1(t, d_109);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_114 = NULL;
  e_114 = t;
  d_114 :
  if(match_cons(e_114, sym_Help_0))
    {
      ATerm g_114 = NULL,i_114 = NULL;
      ATerm o_29;
      o_29 = t;
      {
        ATerm h_114 = NULL;
        t = SSLgetAnnotations(not_null(e_114));
        {
          h_114 = t;
          if(((g_114 != NULL) && (g_114 != h_114)))
            _fail(h_114);
          else
            g_114 = h_114;
        }
      }
      t = o_29;
      {
        ATerm j_114 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_114));
        {
          j_114 = t;
          if(((i_114 != NULL) && (i_114 != j_114)))
            _fail(j_114);
          else
            i_114 = j_114;
        }
        t = not_null(i_114);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_90 (ATerm))
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_90(t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL;
  p_114 = t;
  o_114 :
  if(match_cons(p_114, sym__2))
    {
      q_114 = ATgetArgument(p_114, 0);
      r_114 = ATgetArgument(p_114, 1);
      t = SSL_table_get(not_null(q_114), not_null(r_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL;
  y_114 = t;
  x_114 :
  if(match_cons(y_114, sym__3))
    {
      z_114 = ATgetArgument(y_114, 0);
      a_115 = ATgetArgument(y_114, 1);
      b_115 = ATgetArgument(y_114, 2);
      {
        ATerm r_29;
        r_29 = t;
        {
          ATerm f_115 = NULL;
          ATerm g_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_114), not_null(a_115));
          {
            ATerm s_29 = t;
            int t_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(t_29);
              }
            else
              {
                t = s_29;
                t = (ATerm) ATempty;
              }
            {
              g_115 = t;
              if(((f_115 != NULL) && (f_115 != g_115)))
                _fail(g_115);
              else
                f_115 = g_115;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_114), not_null(a_115), (ATerm) ATinsert(CheckATermList(not_null(f_115)), not_null(b_115)));
            t = table_put_0(t);
          }
        }
        t = r_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_110 (ATerm))
{
  ATerm k_115 = NULL;
  ATerm l_115 = NULL;
  t = term_q_15;
  {
    t = i_110(t);
    {
      l_115 = t;
      if(((k_115 != NULL) && (k_115 != l_115)))
        _fail(l_115);
      else
        k_115 = l_115;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_29, term_g_29, not_null(k_115));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm r_115 = NULL,s_115 = NULL,t_115 = NULL;
  r_115 = t;
  q_115 :
  if(match_string(r_115, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(r_115) == AT_LIST) && !(ATisEmpty(r_115))))
        {
          s_115 = ATgetFirst((ATermList) r_115);
          t_115 = (ATerm) ATgetNext((ATermList) r_115);
          {
            ATerm w_115 = NULL;
            ATerm u_29;
            u_29 = t;
            {
              t = not_null(s_115);
              t = a_0(t);
            }
            t = u_29;
            {
              ATerm x_115 = NULL;
              t = term_q_15;
              {
                t = c_0(t);
                {
                  x_115 = t;
                  if(((w_115 != NULL) && (w_115 != x_115)))
                    _fail(x_115);
                  else
                    w_115 = x_115;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_115)), not_null(w_115));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm d_116 = NULL;
    d_116 = t;
    c_116 :
    if(!(match_string(d_116, "--help")))
      {
        if(!(match_string(d_116, "-h")))
          {
            if(!(match_string(d_116, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_w_29;
    {
      t = set_config_0(t);
      t = term_x_29;
    }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_y_29;
    return(t);
  }
  t = Option_3(t, n_5, p_5, q_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_116 = NULL,h_116 = NULL,i_116 = NULL;
  g_116 = t;
  f_116 :
  if(((ATgetType(g_116) == AT_LIST) && !(ATisEmpty(g_116))))
    {
      h_116 = ATgetFirst((ATermList) g_116);
      i_116 = (ATerm) ATgetNext((ATermList) g_116);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_116)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_116)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL;
  o_116 = t;
  n_116 :
  if(match_cons(o_116, sym__2))
    {
      p_116 = ATgetArgument(o_116, 0);
      q_116 = ATgetArgument(o_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_21, not_null(p_116), not_null(q_116));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_110 (ATerm))
{
  ATerm z_29;
  z_29 = t;
  {
    ATerm r_5 (ATerm t)
    {
      t = term_a_30;
      t = g_110(t);
      return(t);
    }
    t = try_1(t, r_5);
  }
  t = z_29;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm y_116 = NULL;
      ATerm b_30;
      b_30 = t;
      {
        ATerm w_116 = NULL;
        ATerm x_116 = NULL;
        x_116 = t;
        if(((w_116 != NULL) && (w_116 != x_116)))
          _fail(x_116);
        else
          w_116 = x_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_28, not_null(w_116));
          t = set_config_0(t);
        }
      }
      t = b_30;
      {
        ATerm z_116 = NULL;
        z_116 = t;
        if(((y_116 != NULL) && (y_116 != z_116)))
          _fail(z_116);
        else
          y_116 = z_116;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_116));
      }
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      ATerm c_30 = t;
      int d_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              {
                t = g_110(t);
                t = Cons_2(t, _id, t_5);
              }
            }
          ;
          LocalPopChoice(d_30);
        }
      else
        {
          t = c_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_5, t_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_117 = NULL,g_117 = NULL,h_117 = NULL;
  ATerm g_30;
  g_30 = t;
  {
    ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL;
    i_117 = t;
    e_117 :
    if(match_cons(i_117, sym__3))
      {
        j_117 = ATgetArgument(i_117, 0);
        k_117 = ATgetArgument(i_117, 1);
        l_117 = ATgetArgument(i_117, 2);
        {
          if(((f_117 != NULL) && (f_117 != j_117)))
            _fail(j_117);
          else
            f_117 = j_117;
          {
            if(((g_117 != NULL) && (g_117 != k_117)))
              _fail(k_117);
            else
              g_117 = k_117;
            {
              if(((h_117 != NULL) && (h_117 != l_117)))
                _fail(l_117);
              else
                h_117 = l_117;
              t = SSL_table_put(not_null(f_117), not_null(g_117), not_null(h_117));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_110 (ATerm))
{
  ATerm o_117 = NULL;
  ATerm h_30;
  h_30 = t;
  {
    t = term_i_30;
    t = table_put_0(t);
  }
  t = h_30;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm j_30 = t;
      int k_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_110(t);
          ;
          LocalPopChoice(k_30);
        }
      else
        {
          t = j_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_5);
    {
      ATerm v_5 (ATerm t)
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_30;
            n_30 = t;
            {
              ATerm o_30 = t;
              int p_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_v_29;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(p_30);
                }
              else
                {
                  t = o_30;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = n_30;
            {
              t = system_usage_0(t);
              {
                t = term_v_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm w_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm p_117 = NULL;
                  p_117 = t;
                  if(((o_117 != NULL) && (o_117 != p_117)))
                    _fail(p_117);
                  else
                    o_117 = p_117;
                  return(t);
                }
                t = Undefined_1(t, x_5);
                return(t);
              }
              t = option_defined_1(t, w_5);
              {
                ATerm y_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_117)), term_q_30);
                  return(t);
                }
                t = say_1(t, y_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_5);
      {
        ATerm r_30;
        r_30 = t;
        {
          t = term_f_29;
          t = table_destroy_0(t);
        }
        t = r_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm))
{
  t = parse_options_1(t, m_106);
  {
    t = store_options_0(t);
    {
      t = o_106(t);
      {
        ATerm s_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_106);
            ;
            LocalPopChoice(t_30);
          }
        else
          {
            t = s_30;
            {
              ATerm u_30 = t;
              int v_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_106(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(v_30);
                }
              else
                {
                  t = u_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_107(t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_107);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_5, f_107, g_107, a_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm y_30;
      y_30 = t;
      {
        ATerm s_117 = NULL;
        ATerm t_117 = NULL;
        t = term_k_28;
        {
          t = get_config_0(t);
          {
            t_117 = t;
            if(((s_117 != NULL) && (s_117 != t_117)))
              _fail(t_117);
            else
              s_117 = t_117;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_7, (ATerm) ATinsert(ATempty, not_null(s_117)));
          t = printnl_0(t);
        }
      }
      t = y_30;
      return(t);
    }
    t = if_verbose2_1(t, c_6);
    return(t);
  }
  t = iowrap_4(t, x_106, y_106, z_106, b_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_106 (ATerm), ATerm w_106 (ATerm))
{
  t = iowrap_3(t, v_106, w_106, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm d_6 (ATerm t)
  {
    t = _2(t, _id, s_106);
    return(t);
  }
  t = iowrap_2(t, d_6, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      ATerm h_6 (ATerm t)
      {
        ATerm i_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, i_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, h_6);
      return(t);
    }
    t = Specification_1(t, f_6);
    return(t);
  }
  t = iowrap_1(t, e_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
