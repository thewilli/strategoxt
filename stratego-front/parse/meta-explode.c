#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
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
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_Script_1;
Symbol sym_Command_1;
Symbol sym_Dump_1;
Symbol sym_Load_1;
Symbol sym_Eval_1;
Symbol sym_Imports_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Star_0;
Symbol sym_StarStar_0;
Symbol sym_OpDecl_2;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_BuildDefault_1;
Symbol sym_Con_2;
Symbol sym_Op_2;
Symbol sym_As_2;
Symbol sym_Tuple_1;
Symbol sym_App_2;
Symbol sym_List_1;
Symbol sym_ListTail_2;
Symbol sym_Explode_2;
Symbol sym_RootApp_1;
Symbol sym_Anno_2;
Symbol sym_Con1_1;
Symbol sym_Con2_2;
Symbol sym_Con3_2;
Symbol sym_Con4_3;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallNoArgs_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
Symbol sym_LRule_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_RChoice_2;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_RGChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Bagof_1;
Symbol sym_PrimNoArgs_1;
Symbol sym_Prim_2;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_TupleCong_0;
Symbol sym_TupleCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_ModCong_2;
Symbol sym_Mod_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_DynRuleScope_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Conc_2;
Symbol sym_Ins_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Script_1 = ATmakeSymbol("Script", 1, ATfalse);
  ATprotectSymbol(sym_Script_1);
  sym_Command_1 = ATmakeSymbol("Command", 1, ATfalse);
  ATprotectSymbol(sym_Command_1);
  sym_Dump_1 = ATmakeSymbol("Dump", 1, ATfalse);
  ATprotectSymbol(sym_Dump_1);
  sym_Load_1 = ATmakeSymbol("Load", 1, ATfalse);
  ATprotectSymbol(sym_Load_1);
  sym_Eval_1 = ATmakeSymbol("Eval", 1, ATfalse);
  ATprotectSymbol(sym_Eval_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Star_0 = ATmakeSymbol("Star", 0, ATfalse);
  ATprotectSymbol(sym_Star_0);
  sym_StarStar_0 = ATmakeSymbol("StarStar", 0, ATfalse);
  ATprotectSymbol(sym_StarStar_0);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Con_2 = ATmakeSymbol("Con", 2, ATfalse);
  ATprotectSymbol(sym_Con_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Con1_1 = ATmakeSymbol("Con1", 1, ATfalse);
  ATprotectSymbol(sym_Con1_1);
  sym_Con2_2 = ATmakeSymbol("Con2", 2, ATfalse);
  ATprotectSymbol(sym_Con2_2);
  sym_Con3_2 = ATmakeSymbol("Con3", 2, ATfalse);
  ATprotectSymbol(sym_Con3_2);
  sym_Con4_3 = ATmakeSymbol("Con4", 3, ATfalse);
  ATprotectSymbol(sym_Con4_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_RGChoice_2 = ATmakeSymbol("RGChoice", 2, ATfalse);
  ATprotectSymbol(sym_RGChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Ins_1 = ATmakeSymbol("Ins", 1, ATfalse);
  ATprotectSymbol(sym_Ins_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_z_16;
ATerm term_m_16;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_y_10;
ATerm term_j_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_m_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_d_5;
ATerm term_s_4;
ATerm term_o_4;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_Cong_2, term_n_4, (ATerm) ATempty);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(sym_Op_2, term_n_4, (ATerm) ATempty);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_m_9);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_9);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_i_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_a_14, term_i_13);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__3, term_w_14, term_x_14, (ATerm) ATempty);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm str_explode_0 (ATerm);
ATerm TrmOp_0 (ATerm);
ATerm TrmCons_0 (ATerm);
ATerm TrmNil_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm));
ATerm LstMetaVar_0 (ATerm);
ATerm TrmConc_0 (ATerm);
ATerm Anno_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm TrmAnno_0 (ATerm);
ATerm TrmFromStr_0 (ATerm);
ATerm TrmFromTerm_0 (ATerm);
ATerm TrmStr_0 (ATerm);
ATerm TrmLMetaVar_0 (ATerm);
ATerm TrmMetaVar_0 (ATerm);
ATerm trm_explode_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm e_86 (ATerm));
ATerm meta_explode_0 (ATerm);
ATerm _2 (ATerm, ATerm n_49 (ATerm), ATerm o_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_67 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_73 (ATerm), ATerm w_73 (ATerm));
ATerm crush_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_67 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_69 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_69 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_66 (ATerm));
ATerm map_1 (ATerm, ATerm k_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_66 (ATerm));
ATerm Program_1 (ATerm, ATerm b_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_67 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_88 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_66 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_66 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_66 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_68 (ATerm), ATerm n_68 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_68 (ATerm));
ATerm main_0 (ATerm);
ATerm str_explode_0 (ATerm t)
{
  ATerm u_3 = t;
  int v_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      r_2 = t;
      g_1 :
      if(match_cons(r_2, sym_meta_var_1))
        {
          s_2 = ATgetArgument(r_2, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_2)), (ATerm) ATempty);
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_3);
    }
  else
    {
      t = u_3;
      {
        ATerm w_3 = t;
        int x_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0(t);
            LocalPopChoice(x_3);
          }
        else
          {
            t = w_3;
            {
              ATerm y_3 = t;
              int a_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0(t);
                  LocalPopChoice(a_4);
                }
              else
                {
                  t = y_3;
                  {
                    ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
                    ATerm q_3 (ATerm t)
                    {
                      ATerm e_3 = NULL,f_3 = NULL,l_3 = NULL;
                      ATerm c_4;
                      c_4 = t;
                      {
                        ATerm g_3 = NULL;
                        ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
                        t = not_null(w_2);
                        {
                          g_3 = t;
                          {
                            t = SSL_explode_term(not_null(g_3));
                            {
                              i_3 = t;
                              o_2 :
                              if(match_cons(i_3, sym__2))
                                {
                                  j_3 = ATgetArgument(i_3, 0);
                                  k_3 = ATgetArgument(i_3, 1);
                                  {
                                    if(((e_3 != NULL) && (e_3 != j_3)))
                                      _fail(j_3);
                                    else
                                      e_3 = j_3;
                                    if(((f_3 != NULL) && (f_3 != k_3)))
                                      _fail(k_3);
                                    else
                                      f_3 = k_3;
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
                      t = c_4;
                      {
                        ATerm m_3 = NULL;
                        t = not_null(f_3);
                        {
                          t = map_1(t, str_explode_0);
                          {
                            m_3 = t;
                            if(((l_3 != NULL) && (l_3 != m_3)))
                              _fail(m_3);
                            else
                              l_3 = m_3;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(e_3), not_null(l_3));
                      }
                      return(t);
                    }
                    w_2 = t;
                    q_2 :
                    if(((ATermList) w_2 == ATempty))
                      {
                        {
                          ATerm g_4 = t;
                          int m_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = term_o_4;
                              LocalPopChoice(m_4);
                            }
                          else
                            {
                              t = g_4;
                              t = q_3(t);
                            }
                        }
                      }
                    else
                      {
                        if(((ATgetType(w_2) == AT_LIST) && ((ATermList) w_2 != ATempty)))
                          {
                            u_2 = ATgetFirst((ATermList) w_2);
                            v_2 = (ATerm) ATgetNext((ATermList) w_2);
                            {
                              ATerm p_4 = t;
                              int q_4 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm z_2 = NULL,b_3 = NULL;
                                  ATerm r_4;
                                  r_4 = t;
                                  {
                                    ATerm a_3 = NULL;
                                    t = not_null(u_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        a_3 = t;
                                        if(((z_2 != NULL) && (z_2 != a_3)))
                                          _fail(a_3);
                                        else
                                          z_2 = a_3;
                                      }
                                    }
                                  }
                                  t = r_4;
                                  {
                                    ATerm c_3 = NULL;
                                    t = not_null(v_2);
                                    {
                                      t = str_explode_0(t);
                                      {
                                        c_3 = t;
                                        if(((b_3 != NULL) && (b_3 != c_3)))
                                          _fail(c_3);
                                        else
                                          b_3 = c_3;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_Cong_2, term_s_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_3)), not_null(z_2)));
                                  }
                                  LocalPopChoice(q_4);
                                }
                              else
                                {
                                  t = p_4;
                                  t = q_3(t);
                                }
                            }
                          }
                        else
                          {
                            t = q_3(t);
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
ATerm TrmOp_0 (ATerm t)
{
  ATerm b_4 = NULL;
  ATerm d_4 = NULL,e_4 = NULL,k_4 = NULL;
  b_4 = t;
  {
    ATerm x_4;
    x_4 = t;
    {
      ATerm f_4 = NULL;
      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL;
      t = not_null(b_4);
      {
        f_4 = t;
        {
          t = SSL_explode_term(not_null(f_4));
          {
            h_4 = t;
            z_3 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                j_4 = ATgetArgument(h_4, 1);
                {
                  if(((d_4 != NULL) && (d_4 != i_4)))
                    _fail(i_4);
                  else
                    d_4 = i_4;
                  if(((e_4 != NULL) && (e_4 != j_4)))
                    _fail(j_4);
                  else
                    e_4 = j_4;
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
    t = x_4;
    {
      ATerm l_4 = NULL;
      t = not_null(e_4);
      {
        t = map_1(t, trm_explode_0);
        {
          l_4 = t;
          if(((k_4 != NULL) && (k_4 != l_4)))
            _fail(l_4);
          else
            k_4 = l_4;
        }
      }
      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_4), not_null(k_4));
    }
  }
  return(t);
}
ATerm TrmCons_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  u_4 = t;
  t_4 :
  if(((ATgetType(u_4) == AT_LIST) && ((ATermList) u_4 != ATempty)))
    {
      v_4 = ATgetFirst((ATermList) u_4);
      w_4 = (ATerm) ATgetNext((ATermList) u_4);
      {
        ATerm z_4 = NULL,b_5 = NULL;
        ATerm y_4;
        y_4 = t;
        {
          ATerm a_5 = NULL;
          t = not_null(v_4);
          {
            t = trm_explode_0(t);
            {
              a_5 = t;
              if(((z_4 != NULL) && (z_4 != a_5)))
                _fail(a_5);
              else
                z_4 = a_5;
            }
          }
        }
        t = y_4;
        {
          ATerm c_5 = NULL;
          t = not_null(w_4);
          {
            t = trm_explode_0(t);
            {
              c_5 = t;
              if(((b_5 != NULL) && (b_5 != c_5)))
                _fail(c_5);
              else
                b_5 = c_5;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Op_2, term_s_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_5)), not_null(z_4)));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmNil_0 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  h_5 :
  if(((ATermList) i_5 == ATempty))
    {
      t = term_d_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
  r_5 = t;
  {
    ATerm w_5 = NULL;
    ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
    t = not_null(r_5);
    {
      w_5 = t;
      {
        t = SSL_explode_term(not_null(w_5));
        {
          y_5 = t;
          n_5 :
          if(match_cons(y_5, sym__2))
            {
              z_5 = ATgetArgument(y_5, 0);
              a_6 = ATgetArgument(y_5, 1);
              o_5 :
              if(match_string(z_5, ""))
                {
                  p_5 :
                  if(((ATgetType(a_6) == AT_LIST) && ((ATermList) a_6 != ATempty)))
                    {
                      b_6 = ATgetFirst((ATermList) a_6);
                      c_6 = (ATerm) ATgetNext((ATermList) a_6);
                      q_5 :
                      if(((ATgetType(c_6) == AT_LIST) && ((ATermList) c_6 != ATempty)))
                        {
                          d_6 = ATgetFirst((ATermList) c_6);
                          e_6 = (ATerm) ATgetNext((ATermList) c_6);
                          {
                            if(((t_5 != NULL) && (t_5 != b_6)))
                              _fail(b_6);
                            else
                              t_5 = b_6;
                            {
                              if(((v_5 != NULL) && (v_5 != d_6)))
                                _fail(d_6);
                              else
                                v_5 = d_6;
                              if(((u_5 != NULL) && (u_5 != e_6)))
                                _fail(e_6);
                              else
                                u_5 = e_6;
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
    t = not_null(v_5);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm o_6 = NULL;
  ATerm q_6 = NULL,r_6 = NULL;
  o_6 = t;
  {
    ATerm s_6 = NULL;
    ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
    t = not_null(o_6);
    {
      s_6 = t;
      {
        t = SSL_explode_term(not_null(s_6));
        {
          u_6 = t;
          l_6 :
          if(match_cons(u_6, sym__2))
            {
              v_6 = ATgetArgument(u_6, 0);
              w_6 = ATgetArgument(u_6, 1);
              m_6 :
              if(match_string(v_6, ""))
                {
                  n_6 :
                  if(((ATgetType(w_6) == AT_LIST) && ((ATermList) w_6 != ATempty)))
                    {
                      x_6 = ATgetFirst((ATermList) w_6);
                      y_6 = (ATerm) ATgetNext((ATermList) w_6);
                      {
                        if(((r_6 != NULL) && (r_6 != x_6)))
                          _fail(x_6);
                        else
                          r_6 = x_6;
                        if(((q_6 != NULL) && (q_6 != y_6)))
                          _fail(y_6);
                        else
                          q_6 = y_6;
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
    t = not_null(r_6);
  }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm))
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_73(t);
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      {
        ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
        g_7 = t;
        f_7 :
        if(((ATgetType(g_7) == AT_LIST) && ((ATermList) g_7 != ATempty)))
          {
            h_7 = ATgetFirst((ATermList) g_7);
            i_7 = (ATerm) ATgetNext((ATermList) g_7);
            {
              ATerm l_7 = NULL,n_7 = NULL;
              ATerm g_5;
              g_5 = t;
              {
                ATerm m_7 = NULL;
                t = not_null(h_7);
                {
                  t = z_73(t);
                  {
                    m_7 = t;
                    if(((l_7 != NULL) && (l_7 != m_7)))
                      _fail(m_7);
                    else
                      l_7 = m_7;
                  }
                }
              }
              t = g_5;
              {
                ATerm o_7 = NULL;
                t = not_null(i_7);
                {
                  t = foldr_3(t, x_73, y_73, z_73);
                  {
                    o_7 = t;
                    if(((n_7 != NULL) && (n_7 != o_7)))
                      _fail(o_7);
                    else
                      n_7 = o_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_7), not_null(n_7));
                  t = y_73(t);
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
ATerm LstMetaVar_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym_meta_listvar_1))
    {
      v_7 = ATgetArgument(u_7, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(v_7)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmConc_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_Conc_2))
    {
      e_8 = ATgetArgument(d_8, 0);
      f_8 = ATgetArgument(d_8, 1);
      {
        t = not_null(e_8);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm i_8 = NULL;
            ATerm j_8 = NULL;
            t = LstMetaVar_0(t);
            {
              j_8 = t;
              if(((i_8 != NULL) && (i_8 != j_8)))
                _fail(j_8);
              else
                i_8 = j_8;
            }
            t = (ATerm) ATinsert(ATempty, not_null(i_8));
            return(t);
          }
          t = try_1(t, c_0);
          {
            ATerm d_0 (ATerm t)
            {
              t = not_null(f_8);
              {
                ATerm j_5 = t;
                int k_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = TrmLMetaVar_0(t);
                    LocalPopChoice(k_5);
                  }
                else
                  {
                    t = j_5;
                    t = trm_explode_0(t);
                  }
              }
              return(t);
            }
            ATerm g_0 (ATerm t)
            {
              ATerm k_8 = NULL,m_8 = NULL;
              ATerm l_5;
              l_5 = t;
              {
                ATerm l_8 = NULL;
                t = Fst_0(t);
                {
                  l_8 = t;
                  if(((k_8 != NULL) && (k_8 != l_8)))
                    _fail(l_8);
                  else
                    k_8 = l_8;
                }
              }
              t = l_5;
              {
                ATerm n_8 = NULL;
                t = Snd_0(t);
                {
                  n_8 = t;
                  if(((m_8 != NULL) && (m_8 != n_8)))
                    _fail(n_8);
                  else
                    m_8 = n_8;
                }
                t = (ATerm) ATmakeAppl(sym_Op_2, term_s_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), not_null(k_8)));
              }
              return(t);
            }
            t = foldr_3(t, d_0, g_0, trm_explode_0);
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
ATerm Anno_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Anno_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm m_5 = t;
        int s_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 = NULL,l_9 = NULL;
            ATerm k_9 = NULL;
            t = SSLgetAnnotations(not_null(d_9));
            {
              k_9 = t;
              if(((j_9 != NULL) && (j_9 != k_9)))
                _fail(k_9);
              else
                j_9 = k_9;
            }
            {
              t = not_null(e_9);
              {
                ATerm n_9 = NULL;
                t = m_0(t);
                {
                  l_9 = t;
                  {
                    t = not_null(f_9);
                    {
                      ATerm p_9 = NULL;
                      t = n_0(t);
                      {
                        n_9 = t;
                        {
                          ATerm q_9 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(l_9), not_null(n_9)), not_null(j_9));
                          {
                            q_9 = t;
                            if(((p_9 != NULL) && (p_9 != q_9)))
                              _fail(q_9);
                            else
                              p_9 = q_9;
                          }
                          t = not_null(p_9);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(s_5);
          }
        else
          {
            t = m_5;
            {
              ATerm u_9 = NULL,w_9 = NULL;
              ATerm v_9 = NULL;
              t = SSLgetAnnotations(not_null(d_9));
              {
                v_9 = t;
                if(((u_9 != NULL) && (u_9 != v_9)))
                  _fail(v_9);
                else
                  u_9 = v_9;
              }
              {
                t = not_null(e_9);
                {
                  ATerm y_9 = NULL;
                  t = m_0(t);
                  {
                    w_9 = t;
                    {
                      t = not_null(f_9);
                      {
                        ATerm a_10 = NULL;
                        t = n_0(t);
                        {
                          y_9 = t;
                          {
                            ATerm b_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Anno_2, not_null(w_9), not_null(y_9)), not_null(u_9));
                            {
                              b_10 = t;
                              if(((a_10 != NULL) && (a_10 != b_10)))
                                _fail(b_10);
                              else
                                a_10 = b_10;
                            }
                            t = not_null(a_10);
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
ATerm TrmAnno_0 (ATerm t)
{
  t = Anno_2(t, trm_explode_0, meta_explode_0);
  return(t);
}
ATerm TrmFromStr_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_FromStrategy_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        t = not_null(p_10);
        t = meta_explode_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmFromTerm_0 (ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym_FromTerm_1))
    {
      v_10 = ATgetArgument(u_10, 0);
      {
        t = not_null(v_10);
        t = meta_explode_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmStr_0 (ATerm t)
{
  ATerm z_10 = NULL;
  t = is_string_0(t);
  {
    ATerm a_11 = NULL;
    a_11 = t;
    if(((z_10 != NULL) && (z_10 != a_11)))
      _fail(a_11);
    else
      z_10 = a_11;
    t = (ATerm) ATmakeAppl(sym_Str_1, not_null(z_10));
  }
  return(t);
}
ATerm TrmLMetaVar_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym_meta_listvar_1))
    {
      f_11 = ATgetArgument(e_11, 0);
      t = (ATerm) ATmakeAppl(sym_Op_2, term_s_4, (ATerm) ATinsert(ATinsert(ATempty, term_d_5), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, not_null(f_11)))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TrmMetaVar_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_meta_var_1))
    {
      l_11 = ATgetArgument(k_11, 0);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm trm_explode_0 (ATerm t)
{
  ATerm x_5 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = TrmMetaVar_0(t);
      LocalPopChoice(f_6);
    }
  else
    {
      t = x_5;
      {
        ATerm g_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmLMetaVar_0(t);
            LocalPopChoice(h_6);
          }
        else
          {
            t = g_6;
            {
              ATerm i_6 = t;
              int j_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0(t);
                  LocalPopChoice(j_6);
                }
              else
                {
                  t = i_6;
                  {
                    ATerm k_6 = t;
                    int p_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromTerm_0(t);
                        LocalPopChoice(p_6);
                      }
                    else
                      {
                        t = k_6;
                        {
                          ATerm t_6 = t;
                          int z_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromStr_0(t);
                              LocalPopChoice(z_6);
                            }
                          else
                            {
                              t = t_6;
                              {
                                ATerm a_7 = t;
                                int b_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = TrmAnno_0(t);
                                    LocalPopChoice(b_7);
                                  }
                                else
                                  {
                                    t = a_7;
                                    {
                                      ATerm c_7 = t;
                                      int d_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmConc_0(t);
                                          LocalPopChoice(d_7);
                                        }
                                      else
                                        {
                                          t = c_7;
                                          {
                                            ATerm e_7 = t;
                                            int j_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TrmNil_0(t);
                                                LocalPopChoice(j_7);
                                              }
                                            else
                                              {
                                                t = e_7;
                                                {
                                                  ATerm k_7 = t;
                                                  int p_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = TrmCons_0(t);
                                                      LocalPopChoice(p_7);
                                                    }
                                                  else
                                                    {
                                                      t = k_7;
                                                      t = TrmOp_0(t);
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
      }
    }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm o_11 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_86(t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = _all(t, o_11);
      }
    return(t);
  }
  t = o_11(t);
  return(t);
}
ATerm meta_explode_0 (ATerm t)
{
  ATerm h_0 (ATerm t)
  {
    ATerm s_11 = NULL,t_11 = NULL;
    s_11 = t;
    r_11 :
    if(match_cons(s_11, sym_ToTerm_1))
      {
        t_11 = ATgetArgument(s_11, 0);
        {
          t = not_null(t_11);
          t = trm_explode_0(t);
        }
      }
    else
      {
        if(match_cons(s_11, sym_ToStrategy_1))
          {
            t_11 = ATgetArgument(s_11, 0);
            {
              t = not_null(t_11);
              t = str_explode_0(t);
            }
          }
        else
          {
            _fail(t);
          }
      }
    return(t);
  }
  t = alltd_1(t, h_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm n_49 (ATerm), ATerm o_49 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym__2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm k_12 = NULL,m_12 = NULL;
        ATerm l_12 = NULL;
        t = SSLgetAnnotations(not_null(e_12));
        {
          l_12 = t;
          if(((k_12 != NULL) && (k_12 != l_12)))
            _fail(l_12);
          else
            k_12 = l_12;
        }
        {
          t = not_null(f_12);
          {
            ATerm o_12 = NULL;
            t = n_49(t);
            {
              m_12 = t;
              {
                t = not_null(g_12);
                {
                  ATerm q_12 = NULL;
                  t = o_49(t);
                  {
                    o_12 = t;
                    {
                      ATerm r_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_12), not_null(o_12)), not_null(k_12));
                      {
                        r_12 = t;
                        if(((q_12 != NULL) && (q_12 != r_12)))
                          _fail(r_12);
                        else
                          q_12 = r_12;
                      }
                      t = not_null(q_12);
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
  ATerm z_12 = NULL;
  ATerm s_7;
  s_7 = t;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm a_13 = NULL,b_13 = NULL;
      a_13 = t;
      y_12 :
      if(match_cons(a_13, sym_Program_1))
        {
          b_13 = ATgetArgument(a_13, 0);
          if(((z_12 != NULL) && (z_12 != b_13)))
            _fail(b_13);
          else
            z_12 = b_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, o_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(z_12)), term_x_7));
      {
        t = printnl_0(t);
        {
          t = term_z_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym__2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      {
        ATerm a_8;
        a_8 = t;
        t = SSL_printnl(not_null(g_13), not_null(h_13));
        t = a_8;
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
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym__2))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      {
        t = not_null(o_13);
        {
          ATerm p_0 (ATerm t)
          {
            t = not_null(p_13);
            return(t);
          }
          t = at_end_1(t, p_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
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
ATerm debug_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm b_8;
  b_8 = t;
  {
    ATerm v_13 = NULL,x_13 = NULL;
    ATerm g_8;
    g_8 = t;
    {
      ATerm w_13 = NULL;
      t = y_69(t);
      {
        w_13 = t;
        if(((v_13 != NULL) && (v_13 != w_13)))
          _fail(w_13);
        else
          v_13 = w_13;
      }
    }
    t = g_8;
    {
      ATerm y_13 = NULL;
      y_13 = t;
      if(((x_13 != NULL) && (x_13 != y_13)))
        _fail(y_13);
      else
        x_13 = y_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_13)), not_null(v_13)));
        t = printnl_0(t);
      }
    }
  }
  t = b_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  t = SSL_is_string(not_null(c_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = h_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, q_0);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            {
              ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
              l_14 = t;
              k_14 :
              if(match_cons(l_14, sym_Path_1))
                {
                  m_14 = ATgetArgument(l_14, 0);
                  t = not_null(m_14);
                }
              else
                {
                  if(match_cons(l_14, sym_Var_1))
                    {
                      m_14 = ATgetArgument(l_14, 0);
                      {
                        t = not_null(m_14);
                        {
                          ATerm r_8 = t;
                          int s_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_8);
                            }
                          else
                            {
                              t = r_8;
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_t_8;
                                  return(t);
                                }
                                t = debug_1(t, r_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_14, sym_Prefix_2))
                        {
                          m_14 = ATgetArgument(l_14, 0);
                          n_14 = ATgetArgument(l_14, 1);
                          {
                            ATerm s_14 = NULL,u_14 = NULL;
                            ATerm u_8;
                            u_8 = t;
                            {
                              ATerm t_14 = NULL;
                              t = not_null(m_14);
                              {
                                t = eval_config_0(t);
                                {
                                  t_14 = t;
                                  if(((s_14 != NULL) && (s_14 != t_14)))
                                    _fail(t_14);
                                  else
                                    s_14 = t_14;
                                }
                              }
                            }
                            t = u_8;
                            {
                              ATerm v_14 = NULL;
                              t = not_null(n_14);
                              {
                                t = eval_config_0(t);
                                {
                                  v_14 = t;
                                  if(((u_14 != NULL) && (u_14 != v_14)))
                                    _fail(v_14);
                                  else
                                    u_14 = v_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_14), not_null(u_14));
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
  ATerm d_15 = NULL;
  d_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(d_15));
    {
      t = table_get_0(t);
      {
        ATerm s_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_8;
            w_8 = t;
            {
              ATerm f_15 = NULL;
              ATerm g_15 = NULL;
              g_15 = t;
              if(((f_15 != NULL) && (f_15 != g_15)))
                _fail(g_15);
              else
                f_15 = g_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_8, not_null(d_15), not_null(f_15));
                t = table_put_0(t);
              }
            }
            t = w_8;
          }
          return(t);
        }
        t = try_1(t, s_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm k_15 = NULL;
      ATerm l_15 = NULL;
      t = term_y_8;
      {
        t = get_config_0(t);
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), term_z_8);
        t = geq_0(t);
      }
    }
    t = x_8;
    t = i_67(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, term_a_9));
  {
    t = printnl_0(t);
    {
      t = term_z_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  t = SSL_TicksToSeconds(not_null(o_15));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym__2))
    {
      u_15 = ATgetArgument(t_15, 0);
      v_15 = ATgetArgument(t_15, 1);
      {
        ATerm b_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_15), not_null(v_15));
            LocalPopChoice(g_9);
          }
        else
          {
            t = b_9;
            t = SSL_addr(not_null(u_15), not_null(v_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_73 (ATerm), ATerm w_73 (ATerm))
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_73(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
        c_16 = t;
        b_16 :
        if(((ATgetType(c_16) == AT_LIST) && ((ATermList) c_16 != ATempty)))
          {
            d_16 = ATgetFirst((ATermList) c_16);
            e_16 = (ATerm) ATgetNext((ATermList) c_16);
            {
              ATerm h_16 = NULL;
              ATerm i_16 = NULL;
              t = not_null(e_16);
              {
                t = foldr_2(t, v_73, w_73);
                {
                  i_16 = t;
                  if(((h_16 != NULL) && (h_16 != i_16)))
                    _fail(i_16);
                  else
                    h_16 = i_16;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(h_16));
                t = w_73(t);
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
ATerm crush_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm p_16 = NULL;
  ATerm r_16 = NULL;
  p_16 = t;
  {
    ATerm s_16 = NULL;
    ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
    t = not_null(p_16);
    {
      s_16 = t;
      {
        t = SSL_explode_term(not_null(s_16));
        {
          u_16 = t;
          o_16 :
          if(match_cons(u_16, sym__2))
            {
              v_16 = ATgetArgument(u_16, 0);
              w_16 = ATgetArgument(u_16, 1);
              if(((r_16 != NULL) && (r_16 != w_16)))
                _fail(w_16);
              else
                r_16 = w_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_16);
      t = foldr_2(t, n_75, o_75);
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
    ATerm u_0 (ATerm t)
    {
      t = term_m_9;
      return(t);
    }
    t = crush_2(t, u_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      {
        ATerm o_9;
        o_9 = t;
        {
          ATerm r_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_17), not_null(e_17));
              LocalPopChoice(s_9);
            }
          else
            {
              t = r_9;
              t = SSL_gtr(not_null(d_17), not_null(e_17));
            }
        }
        t = o_9;
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
  ATerm k_17 = NULL;
  ATerm t_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
      l_17 = t;
      j_17 :
      if(match_cons(l_17, sym__2))
        {
          m_17 = ATgetArgument(l_17, 0);
          n_17 = ATgetArgument(l_17, 1);
          {
            if(((k_17 != NULL) && (k_17 != m_17)))
              _fail(m_17);
            else
              k_17 = m_17;
            if(((k_17 != NULL) && (k_17 != n_17)))
              _fail(n_17);
            else
              k_17 = n_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_9);
    }
  else
    {
      t = t_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_67 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm z_9;
    z_9 = t;
    {
      ATerm q_17 = NULL;
      ATerm r_17 = NULL;
      t = term_y_8;
      {
        t = get_config_0(t);
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), term_z_7);
        t = geq_0(t);
      }
    }
    t = z_9;
    t = h_67(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm v_17 = NULL,x_17 = NULL;
    ATerm c_10;
    c_10 = t;
    {
      ATerm w_17 = NULL;
      t = run_time_0(t);
      {
        w_17 = t;
        if(((v_17 != NULL) && (v_17 != w_17)))
          _fail(w_17);
        else
          v_17 = w_17;
      }
    }
    t = c_10;
    {
      ATerm y_17 = NULL;
      t = term_d_10;
      {
        t = get_config_0(t);
        {
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), not_null(v_17)), term_e_10), not_null(x_17)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, w_0);
  {
    t = term_m_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      t = SSL_WriteToTextFile(not_null(e_18), not_null(f_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      t = SSL_WriteToBinaryFile(not_null(m_18), not_null(n_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_18 = NULL;
  ATerm g_10;
  g_10 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm h_10 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm w_18 = NULL,x_18 = NULL;
            w_18 = t;
            s_18 :
            if(match_cons(w_18, sym_Output_1))
              {
                x_18 = ATgetArgument(w_18, 0);
                if(((v_18 != NULL) && (v_18 != x_18)))
                  _fail(x_18);
                else
                  v_18 = x_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_0);
          LocalPopChoice(i_10);
        }
      else
        {
          t = h_10;
          {
            ATerm y_18 = NULL;
            t = term_j_10;
            {
              y_18 = t;
              if(((v_18 != NULL) && (v_18 != y_18)))
                _fail(y_18);
              else
                v_18 = y_18;
            }
          }
        }
      return(t);
    }
    t = _2(t, x_0, _id);
  }
  t = g_10;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = not_null(v_18);
        return(t);
      }
      t = split_2(t, a_1, _id);
      return(t);
    }
    t = _2(t, _id, z_0);
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm z_18 = NULL;
              z_18 = t;
              u_18 :
              if(!(match_cons(z_18, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_1);
            return(t);
          }
          t = _2(t, b_1, WriteToBinaryFile_0);
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm i_69 (ATerm))
{
  ATerm f_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  ATerm m_10;
  m_10 = t;
  t = dtime_0(t);
  t = m_10;
  {
    t = i_69(t);
    {
      ATerm q_10;
      q_10 = t;
      {
        ATerm g_19 = NULL;
        t = dtime_0(t);
        {
          g_19 = t;
          if(((f_19 != NULL) && (f_19 != g_19)))
            _fail(g_19);
          else
            f_19 = g_19;
        }
      }
      t = q_10;
      {
        h_19 = t;
        e_19 :
        if(match_cons(h_19, sym__2))
          {
            i_19 = ATgetArgument(h_19, 0);
            j_19 = ATgetArgument(h_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_19))), not_null(j_19));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_19 = NULL;
  p_19 = t;
  t = SSL_ReadFromFile(not_null(p_19));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  ATerm u_19 = NULL,w_19 = NULL;
  ATerm r_10;
  r_10 = t;
  {
    ATerm v_19 = NULL;
    t = j_72(t);
    {
      v_19 = t;
      if(((u_19 != NULL) && (u_19 != v_19)))
        _fail(v_19);
      else
        u_19 = v_19;
    }
  }
  t = r_10;
  {
    ATerm x_19 = NULL;
    t = k_72(t);
    {
      x_19 = t;
      if(((w_19 != NULL) && (w_19 != x_19)))
        _fail(x_19);
      else
        w_19 = x_19;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_19), not_null(w_19));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_20 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 (ATerm t)
        {
          ATerm e_20 = NULL,f_20 = NULL;
          e_20 = t;
          b_20 :
          if(match_cons(e_20, sym_Input_1))
            {
              f_20 = ATgetArgument(e_20, 0);
              if(((d_20 != NULL) && (d_20 != f_20)))
                _fail(f_20);
              else
                d_20 = f_20;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, d_1);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          ATerm g_20 = NULL;
          t = term_y_10;
          {
            g_20 = t;
            if(((d_20 != NULL) && (d_20 != g_20)))
              _fail(g_20);
            else
              d_20 = g_20;
          }
        }
      }
  }
  t = s_10;
  {
    ATerm e_1 (ATerm t)
    {
      t = not_null(d_20);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym_Version_0))
    {
      ATerm p_20 = NULL,r_20 = NULL;
      ATerm b_11;
      b_11 = t;
      {
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(n_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
      }
      t = b_11;
      {
        ATerm s_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
        t = not_null(r_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_69 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    ATerm c_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = c_11;
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_1);
  t = g_69(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  t = SSL_table_create(not_null(x_20));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  {
    ATerm m_11;
    m_11 = t;
    {
      t = term_n_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_11, term_p_11, not_null(b_21));
          t = table_put_0(t);
        }
      }
    }
    t = m_11;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_21 = NULL;
  f_21 = t;
  t = SSL_string_to_int(not_null(f_21));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  n_21 = t;
  l_21 :
  if(match_string(n_21, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_21) == AT_LIST) && ((ATermList) n_21 != ATempty)))
        {
          o_21 = ATgetFirst((ATermList) n_21);
          p_21 = (ATerm) ATgetNext((ATermList) n_21);
          m_21 :
          if(((ATgetType(p_21) == AT_LIST) && ((ATermList) p_21 != ATempty)))
            {
              q_21 = ATgetFirst((ATermList) p_21);
              r_21 = (ATerm) ATgetNext((ATermList) p_21);
              {
                ATerm v_21 = NULL;
                ATerm q_11;
                q_11 = t;
                {
                  t = not_null(o_21);
                  t = j_0(t);
                }
                t = q_11;
                {
                  ATerm w_21 = NULL;
                  t = not_null(q_21);
                  {
                    t = k_0(t);
                    {
                      w_21 = t;
                      if(((v_21 != NULL) && (v_21 != w_21)))
                        _fail(w_21);
                      else
                        v_21 = w_21;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_21)), not_null(v_21));
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
ATerm io_options_0 (ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm n_22 = NULL;
        n_22 = t;
        a_22 :
        if(!(match_string(n_22, "-i")))
          {
            if(!(match_string(n_22, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_1 (ATerm t)
      {
        ATerm q_22 = NULL;
        ATerm w_11;
        w_11 = t;
        {
          ATerm o_22 = NULL;
          ATerm p_22 = NULL;
          p_22 = t;
          if(((o_22 != NULL) && (o_22 != p_22)))
            _fail(p_22);
          else
            o_22 = p_22;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_11, not_null(o_22));
            t = set_config_0(t);
          }
        }
        t = w_11;
        {
          ATerm r_22 = NULL;
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_22));
        }
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        t = term_y_11;
        return(t);
      }
      t = ArgOption_3(t, h_1, i_1, j_1);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              ATerm s_22 = NULL;
              s_22 = t;
              d_22 :
              if(!(match_string(s_22, "-o")))
                {
                  if(!(match_string(s_22, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              ATerm v_22 = NULL;
              ATerm b_12;
              b_12 = t;
              {
                ATerm t_22 = NULL;
                ATerm u_22 = NULL;
                u_22 = t;
                if(((t_22 != NULL) && (t_22 != u_22)))
                  _fail(u_22);
                else
                  t_22 = u_22;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_12, not_null(t_22));
                  t = set_config_0(t);
                }
              }
              t = b_12;
              {
                ATerm w_22 = NULL;
                w_22 = t;
                if(((v_22 != NULL) && (v_22 != w_22)))
                  _fail(w_22);
                else
                  v_22 = w_22;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_22));
              }
              return(t);
            }
            ATerm m_1 (ATerm t)
            {
              t = term_h_12;
              return(t);
            }
            t = ArgOption_3(t, k_1, l_1, m_1);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm i_12 = t;
              int j_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 (ATerm t)
                  {
                    ATerm x_22 = NULL;
                    x_22 = t;
                    g_22 :
                    if(!(match_string(x_22, "-S")))
                      {
                        if(!(match_string(x_22, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm o_1 (ATerm t)
                  {
                    t = term_n_12;
                    t = set_config_0(t);
                    t = term_p_12;
                    return(t);
                  }
                  ATerm p_1 (ATerm t)
                  {
                    t = term_s_12;
                    return(t);
                  }
                  t = Option_3(t, n_1, o_1, p_1);
                  LocalPopChoice(j_12);
                }
              else
                {
                  t = i_12;
                  {
                    ATerm t_12 = t;
                    int u_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_1 (ATerm t)
                        {
                          ATerm y_22 = NULL;
                          y_22 = t;
                          h_22 :
                          if(!(match_string(y_22, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm r_1 (ATerm t)
                        {
                          ATerm b_23 = NULL;
                          ATerm v_12;
                          v_12 = t;
                          {
                            ATerm z_22 = NULL;
                            ATerm a_23 = NULL;
                            t = string_to_int_0(t);
                            {
                              a_23 = t;
                              if(((z_22 != NULL) && (z_22 != a_23)))
                                _fail(a_23);
                              else
                                z_22 = a_23;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(z_22));
                              t = set_config_0(t);
                            }
                          }
                          t = v_12;
                          {
                            ATerm c_23 = NULL;
                            c_23 = t;
                            if(((b_23 != NULL) && (b_23 != c_23)))
                              _fail(c_23);
                            else
                              b_23 = c_23;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_23));
                          }
                          return(t);
                        }
                        ATerm s_1 (ATerm t)
                        {
                          t = term_w_12;
                          return(t);
                        }
                        t = ArgOption_3(t, q_1, r_1, s_1);
                        LocalPopChoice(u_12);
                      }
                    else
                      {
                        t = t_12;
                        {
                          ATerm x_12 = t;
                          int c_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_1 (ATerm t)
                              {
                                ATerm d_23 = NULL;
                                d_23 = t;
                                k_22 :
                                if(!(match_string(d_23, "-v")))
                                  {
                                    if(!(match_string(d_23, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm u_1 (ATerm t)
                              {
                                t = term_j_13;
                                t = set_config_0(t);
                                t = term_k_13;
                                return(t);
                              }
                              ATerm v_1 (ATerm t)
                              {
                                t = term_l_13;
                                return(t);
                              }
                              t = Option_3(t, t_1, u_1, v_1);
                              LocalPopChoice(c_13);
                            }
                          else
                            {
                              t = x_12;
                              {
                                ATerm q_13 = t;
                                int r_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_1 (ATerm t)
                                    {
                                      ATerm e_23 = NULL;
                                      e_23 = t;
                                      l_22 :
                                      if(!(match_string(e_23, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm x_1 (ATerm t)
                                    {
                                      t = term_t_13;
                                      t = set_config_0(t);
                                      t = term_u_13;
                                      return(t);
                                    }
                                    ATerm y_1 (ATerm t)
                                    {
                                      t = term_z_13;
                                      return(t);
                                    }
                                    t = Option_3(t, w_1, x_1, y_1);
                                    LocalPopChoice(r_13);
                                  }
                                else
                                  {
                                    t = q_13;
                                    {
                                      ATerm z_1 (ATerm t)
                                      {
                                        ATerm f_23 = NULL;
                                        f_23 = t;
                                        m_22 :
                                        if(!(match_string(f_23, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm a_2 (ATerm t)
                                      {
                                        t = term_b_14;
                                        t = set_config_0(t);
                                        t = term_d_14;
                                        return(t);
                                      }
                                      ATerm b_2 (ATerm t)
                                      {
                                        t = term_e_14;
                                        return(t);
                                      }
                                      t = Option_3(t, z_1, a_2, b_2);
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
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  t = SSL_table_destroy(not_null(n_23));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  t = SSL_exit(not_null(r_23));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_23 = NULL;
  v_23 = t;
  t = SSL_implode_string(not_null(v_23));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm y_23 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_23);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        {
          t = Nil_0(t);
          t = z_79(t);
        }
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
        b_24 = t;
        a_24 :
        if(((ATgetType(b_24) == AT_LIST) && ((ATermList) b_24 != ATempty)))
          {
            c_24 = ATgetFirst((ATermList) b_24);
            d_24 = (ATerm) ATgetNext((ATermList) b_24);
            {
              t = not_null(c_24);
              {
                ATerm c_2 (ATerm t)
                {
                  t = not_null(d_24);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_2);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  t = SSL_explode_string(not_null(j_24));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_79 (ATerm))
{
  ATerm m_24 (ATerm t)
  {
    ATerm j_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = j_14;
        t = Cons_2(t, k_79, m_24);
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  c_25 = t;
  z_24 :
  if(((ATgetType(c_25) == AT_LIST) && ((ATermList) c_25 != ATempty)))
    {
      a_25 = ATgetFirst((ATermList) c_25);
      b_25 = (ATerm) ATgetNext((ATermList) c_25);
      {
        ATerm f_25 = NULL;
        t = not_null(b_25);
        {
          ATerm p_14;
          p_14 = t;
          {
            ATerm g_25 = NULL,i_25 = NULL,n_25 = NULL;
            ATerm q_14;
            q_14 = t;
            {
              ATerm h_25 = NULL;
              t = i_0(t);
              {
                h_25 = t;
                if(((g_25 != NULL) && (g_25 != h_25)))
                  _fail(h_25);
                else
                  g_25 = h_25;
              }
            }
            t = q_14;
            {
              ATerm m_25 = NULL;
              t = not_null(a_25);
              {
                t = f_0(t);
                {
                  m_25 = t;
                  if(((i_25 != NULL) && (i_25 != m_25)))
                    _fail(m_25);
                  else
                    i_25 = m_25;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_25)), not_null(i_25));
                {
                  n_25 = t;
                  if(((f_25 != NULL) && (f_25 != n_25)))
                    _fail(n_25);
                  else
                    f_25 = n_25;
                }
              }
            }
          }
          t = p_14;
          {
            ATerm d_2 (ATerm t)
            {
              t = not_null(f_25);
              return(t);
            }
            t = reverse_acc_2(t, f_0, d_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) c_25 == ATempty))
        {
          {
            t = term_i_13;
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
  ATerm e_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_57 (ATerm))
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym_Program_1))
    {
      z_25 = ATgetArgument(y_25, 0);
      {
        ATerm c_26 = NULL,f_26 = NULL;
        ATerm d_26 = NULL;
        t = SSLgetAnnotations(not_null(y_25));
        {
          d_26 = t;
          if(((c_26 != NULL) && (c_26 != d_26)))
            _fail(d_26);
          else
            c_26 = d_26;
        }
        {
          t = not_null(z_25);
          {
            ATerm h_26 = NULL;
            t = b_57(t);
            {
              f_26 = t;
              {
                ATerm i_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_26)), not_null(c_26));
                {
                  i_26 = t;
                  if(((h_26 != NULL) && (h_26 != i_26)))
                    _fail(i_26);
                  else
                    h_26 = i_26;
                }
                t = not_null(h_26);
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
  ATerm r_26 = NULL;
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      ATerm s_26 = NULL;
      s_26 = t;
      if(((r_26 != NULL) && (r_26 != s_26)))
        _fail(s_26);
      else
        r_26 = s_26;
      return(t);
    }
    t = Program_1(t, g_2);
    return(t);
  }
  t = option_defined_1(t, f_2);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm t_26 = NULL;
      ATerm u_26 = NULL;
      t = term_i_13;
      {
        ATerm i_2 (ATerm t)
        {
          t = not_null(r_26);
          return(t);
        }
        t = short_description_1(t, i_2);
        {
          t = concat_strings_0(t);
          {
            u_26 = t;
            if(((t_26 != NULL) && (t_26 != u_26)))
              _fail(u_26);
            else
              t_26 = u_26;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, not_null(t_26)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, term_r_14));
      {
        t = printnl_0(t);
        {
          t = term_y_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm v_26 = NULL;
                  v_26 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_26)), term_z_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_2);
                {
                  ATerm k_2 (ATerm t)
                  {
                    ATerm x_26 = NULL;
                    ATerm y_26 = NULL;
                    t = term_i_13;
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = not_null(r_26);
                        return(t);
                      }
                      t = long_description_1(t, l_2);
                      {
                        t = concat_strings_0(t);
                        {
                          y_26 = t;
                          if(((x_26 != NULL) && (x_26 != y_26)))
                            _fail(y_26);
                          else
                            x_26 = y_26;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_26)), term_a_15));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_2);
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
ATerm Undefined_1 (ATerm t, ATerm c_57 (ATerm))
{
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Undefined_1))
    {
      j_27 = ATgetArgument(i_27, 0);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(i_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(j_27);
          {
            ATerm q_27 = NULL;
            t = c_57(t);
            {
              o_27 = t;
              {
                ATerm z_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_27)), not_null(m_27));
                {
                  z_27 = t;
                  if(((q_27 != NULL) && (q_27 != z_27)))
                    _fail(z_27);
                  else
                    q_27 = z_27;
                }
                t = not_null(q_27);
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
ATerm fetch_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm g_28 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_79, _id);
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = Cons_2(t, _id, g_28);
      }
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_67 (ATerm))
{
  t = fetch_1(t, f_67);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym_Help_0))
    {
      ATerm p_28 = NULL,r_28 = NULL;
      ATerm e_15;
      e_15 = t;
      {
        ATerm q_28 = NULL;
        t = SSLgetAnnotations(not_null(l_28));
        {
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
        }
      }
      t = e_15;
      {
        ATerm s_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_28));
        {
          s_28 = t;
          if(((r_28 != NULL) && (r_28 != s_28)))
            _fail(s_28);
          else
            r_28 = s_28;
        }
        t = not_null(r_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_88 (ATerm))
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_88(t);
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  d_29 :
  if(match_cons(k_29, sym__2))
    {
      l_29 = ATgetArgument(k_29, 0);
      m_29 = ATgetArgument(k_29, 1);
      t = SSL_table_get(not_null(l_29), not_null(m_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  u_29 = t;
  s_29 :
  if(match_cons(u_29, sym__3))
    {
      v_29 = ATgetArgument(u_29, 0);
      w_29 = ATgetArgument(u_29, 1);
      x_29 = ATgetArgument(u_29, 2);
      {
        ATerm j_15;
        j_15 = t;
        {
          ATerm b_30 = NULL;
          ATerm c_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_29), not_null(w_29));
          {
            ATerm m_15 = t;
            int n_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_15);
              }
            else
              {
                t = m_15;
                t = (ATerm) ATempty;
              }
            {
              c_30 = t;
              if(((b_30 != NULL) && (b_30 != c_30)))
                _fail(c_30);
              else
                b_30 = c_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_29), not_null(w_29), (ATerm) ATinsert(CheckATermList(not_null(b_30)), not_null(x_29)));
            t = table_put_0(t);
          }
        }
        t = j_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm g_30 = NULL;
  ATerm h_30 = NULL;
  t = term_i_13;
  {
    t = l_66(t);
    {
      h_30 = t;
      if(((g_30 != NULL) && (g_30 != h_30)))
        _fail(h_30);
      else
        g_30 = h_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_14, term_x_14, not_null(g_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_string(n_30, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(n_30) == AT_LIST) && ((ATermList) n_30 != ATempty)))
        {
          o_30 = ATgetFirst((ATermList) n_30);
          p_30 = (ATerm) ATgetNext((ATermList) n_30);
          {
            ATerm s_30 = NULL;
            ATerm p_15;
            p_15 = t;
            {
              t = not_null(o_30);
              t = a_0(t);
            }
            t = p_15;
            {
              ATerm t_30 = NULL;
              t = term_i_13;
              {
                t = b_0(t);
                {
                  t_30 = t;
                  if(((s_30 != NULL) && (s_30 != t_30)))
                    _fail(t_30);
                  else
                    s_30 = t_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_30)), not_null(s_30));
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
  ATerm m_2 (ATerm t)
  {
    ATerm y_30 = NULL;
    y_30 = t;
    x_30 :
    if(!(match_string(y_30, "--help")))
      {
        if(!(match_string(y_30, "-h")))
          {
            if(!(match_string(y_30, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_q_15;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  t = Option_3(t, m_2, n_2, p_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  a_31 :
  if(((ATgetType(b_31) == AT_LIST) && ((ATermList) b_31 != ATempty)))
    {
      c_31 = ATgetFirst((ATermList) b_31);
      d_31 = (ATerm) ATgetNext((ATermList) b_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm))
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  m_31 :
  if(((ATgetType(n_31) == AT_LIST) && ((ATermList) n_31 != ATempty)))
    {
      o_31 = ATgetFirst((ATermList) n_31);
      p_31 = (ATerm) ATgetNext((ATermList) n_31);
      {
        ATerm t_31 = NULL,x_31 = NULL;
        ATerm u_31 = NULL;
        t = SSLgetAnnotations(not_null(n_31));
        {
          u_31 = t;
          if(((t_31 != NULL) && (t_31 != u_31)))
            _fail(u_31);
          else
            t_31 = u_31;
        }
        {
          t = not_null(o_31);
          {
            ATerm z_31 = NULL;
            t = g_62(t);
            {
              x_31 = t;
              {
                t = not_null(p_31);
                {
                  ATerm g_32 = NULL;
                  t = h_62(t);
                  {
                    z_31 = t;
                    {
                      ATerm h_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_31)), not_null(x_31)), not_null(t_31));
                      {
                        h_32 = t;
                        if(((g_32 != NULL) && (g_32 != h_32)))
                          _fail(h_32);
                        else
                          g_32 = h_32;
                      }
                      t = not_null(g_32);
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
ATerm Nil_0 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  q_32 :
  if(((ATermList) r_32 == ATempty))
    {
      {
        ATerm t_32 = NULL,v_32 = NULL;
        ATerm w_15;
        w_15 = t;
        {
          ATerm u_32 = NULL;
          t = SSLgetAnnotations(not_null(r_32));
          {
            u_32 = t;
            if(((t_32 != NULL) && (t_32 != u_32)))
              _fail(u_32);
            else
              t_32 = u_32;
          }
        }
        t = w_15;
        {
          ATerm w_32 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_32));
          {
            w_32 = t;
            if(((v_32 != NULL) && (v_32 != w_32)))
              _fail(w_32);
            else
              v_32 = w_32;
          }
          t = not_null(v_32);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym__2))
    {
      d_33 = ATgetArgument(c_33, 0);
      e_33 = ATgetArgument(c_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_8, not_null(d_33), not_null(e_33));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm x_15;
  x_15 = t;
  {
    ATerm t_2 (ATerm t)
    {
      t = term_y_15;
      t = j_66(t);
      return(t);
    }
    t = try_1(t, t_2);
  }
  t = x_15;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm o_33 = NULL;
      ATerm z_15;
      z_15 = t;
      {
        ATerm m_33 = NULL;
        ATerm n_33 = NULL;
        n_33 = t;
        if(((m_33 != NULL) && (m_33 != n_33)))
          _fail(n_33);
        else
          m_33 = n_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(m_33));
          t = set_config_0(t);
        }
      }
      t = z_15;
      {
        ATerm p_33 = NULL;
        p_33 = t;
        if(((o_33 != NULL) && (o_33 != p_33)))
          _fail(p_33);
        else
          o_33 = p_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_33));
      }
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      ATerm a_16 = t;
      int f_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_16);
            }
          else
            {
              t = g_16;
              {
                t = j_66(t);
                t = Cons_2(t, _id, y_2);
              }
            }
          LocalPopChoice(f_16);
        }
      else
        {
          t = a_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, x_2, y_2);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  ATerm k_16;
  k_16 = t;
  {
    ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
    y_33 = t;
    u_33 :
    if(match_cons(y_33, sym__3))
      {
        z_33 = ATgetArgument(y_33, 0);
        a_34 = ATgetArgument(y_33, 1);
        b_34 = ATgetArgument(y_33, 2);
        {
          if(((v_33 != NULL) && (v_33 != z_33)))
            _fail(z_33);
          else
            v_33 = z_33;
          {
            if(((w_33 != NULL) && (w_33 != a_34)))
              _fail(a_34);
            else
              w_33 = a_34;
            {
              if(((x_33 != NULL) && (x_33 != b_34)))
                _fail(b_34);
              else
                x_33 = b_34;
              t = SSL_table_put(not_null(v_33), not_null(w_33), not_null(x_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm e_34 = NULL;
  ATerm l_16;
  l_16 = t;
  {
    t = term_m_16;
    t = table_put_0(t);
  }
  t = l_16;
  {
    ATerm d_3 (ATerm t)
    {
      ATerm n_16 = t;
      int q_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_66(t);
          LocalPopChoice(q_16);
        }
      else
        {
          t = n_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_3);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm t_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_m_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_16);
          }
        else
          {
            t = t_16;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm h_34 = NULL;
                  h_34 = t;
                  if(((e_34 != NULL) && (e_34 != h_34)))
                    _fail(h_34);
                  else
                    e_34 = h_34;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, n_3);
              {
                ATerm y_16;
                y_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_34)), term_z_16));
                  t = printnl_0(t);
                }
                t = y_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_3);
      {
        ATerm a_17;
        a_17 = t;
        {
          t = term_w_14;
          t = table_destroy_0(t);
        }
        t = a_17;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_68(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_3);
  {
    t = store_options_0(t);
    {
      t = x_68(t);
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_68);
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            {
              ATerm o_17 = t;
              int p_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, u_68);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(p_17);
                }
              else
                {
                  t = o_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      ATerm s_17;
      s_17 = t;
      {
        ATerm k_34 = NULL;
        ATerm m_34 = NULL;
        t = term_d_10;
        {
          t = get_config_0(t);
          {
            m_34 = t;
            if(((k_34 != NULL) && (k_34 != m_34)))
              _fail(m_34);
            else
              k_34 = m_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, not_null(k_34)));
          t = printnl_0(t);
        }
      }
      t = s_17;
      return(t);
    }
    t = if_verbose2_1(t, s_3);
    return(t);
  }
  t = iowrap_4(t, o_68, p_68, q_68, r_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_68 (ATerm), ATerm n_68 (ATerm))
{
  t = iowrap_3(t, m_68, n_68, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    t = _2(t, _id, j_68);
    return(t);
  }
  t = iowrap_2(t, t_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iowrap_1(t, meta_explode_0);
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      t = meta_explode_0(t);
    }
  return(t);
}
