#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_FILE_1;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
}
static ATerm term_m_2;
static ATerm term_d_2;
static ATerm term_c_2;
static ATerm term_b_2;
static ATerm term_a_2;
static ATerm term_z_1;
static ATerm term_y_1;
static ATerm term_t_1;
static ATerm term_o_1;
static ATerm term_n_1;
static ATerm term_m_1;
static ATerm term_l_1;
static ATerm term_k_1;
static ATerm term_j_1;
static ATerm term_i_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_t_1));
  term_t_1 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_y_1));
  term_y_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_m_2));
  term_m_2 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm conc_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm j_6 (ATerm), ATerm k_6 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm i_100 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm z_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm w_117 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm i_6 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm modification_time_0_0 (ATerm t);
ATerm _2_0 (ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm t);
ATerm file_exists_0_0 (ATerm t);
ATerm add_extension_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_extension_1_0 (ATerm x_111 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm e_4 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm general_options_0_0 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm xtc_io_wrap_2_0 (ATerm q_5 (ATerm), ATerm r_5 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm g_1 = t;
  int h_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_1;
      t = get_config_0_0(t);
      LocalPopChoice(h_1);
      {
        ATerm b_0 = NULL;
        b_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_i_1);
      }
    }
  else
    {
      t = g_1;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = debug_1_0(e_0, t);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_j_1;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm d_0 = NULL,f_0 = NULL;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_0, term_k_1);
  t = add_extension_0_0(t);
  t = file_exists_0_0(t);
  d_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, f_0);
  t = _2_0(modification_time_0_0, modification_time_0_0, t);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, d_0, f_0);
  t = Fst_0_0(t);
  t = if_verbose2_1_0(a_0, t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_l_1;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_m_1;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_n_1;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = debug_1_0(l_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_o_1;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm p_1 = t;
  int q_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_extension_1_0(g_0, t);
      LocalPopChoice(q_1);
    }
  else
    {
      t = p_1;
      {
        ATerm r_1 = t;
        int s_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = has_extension_1_0(i_0, t);
            LocalPopChoice(s_1);
          }
        else
          {
            t = r_1;
            {
              ATerm h_0 = NULL;
              h_0 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, h_0), term_t_1);
              t = fatal_error_0_0(t);
            }
          }
      }
      {
        ATerm u_1 = t;
        int v_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(v_1);
          }
        else
          {
            t = u_1;
            {
              ATerm p_0 = NULL,c_0 = NULL;
              p_0 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_0);
              t = xtc_transform_1_0(j_0, t);
              if(match_cons(t, sym_FILE_1))
                {
                  c_0 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_0;
              t = if_verbose2_1_0(k_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm w_1 = t;
  int x_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_1;
      t = get_config_0_0(t);
      LocalPopChoice(x_1);
    }
  else
    {
      t = w_1;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm r_0 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  r_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_0), term_y_1);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = debug_1_0(q_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_z_1;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(m_0, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(n_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_a_2;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm u_0 = NULL,w_0 = NULL;
  t = term_c_2;
  t = pass_width_0_0(t);
  u_0 = t;
  t = term_c_2;
  t = pass_verbose_0_0(t);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, w_0);
  t = conc_0_0(t);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_transform_2_0(s_0, create_pp_table_args_0_0, t);
  t = xtc_transform_2_0(t_0, v_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm a_1 = NULL;
  a_1 = t;
  if(match_string(t, "-w"))
    {
      t = a_1;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = a_1;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_1, b_1);
  t = set_config_0_0(t);
  t = b_1;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_d_2;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm e_2 = t;
  int f_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_2);
    }
  else
    {
      t = e_2;
      {
        ATerm g_2 = t;
        int h_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_2);
          }
        else
          {
            t = g_2;
            {
              ATerm i_2 = t;
              int j_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0_0(t);
                  LocalPopChoice(j_2);
                }
              else
                {
                  t = i_2;
                  t = ArgOption_3_0(x_0, y_0, z_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm k_2 = t;
  int l_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      LocalPopChoice(l_2);
    }
  else
    {
      t = k_2;
      t = ArgOption_3_0(d_1, e_1, f_1, t);
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_0 = NULL;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_1, (ATerm) ATinsert(ATempty, o_0));
  t = extend_config_0_0(t);
  t = o_0;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_m_2;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_2_0(c_1, ast2text_0_0, t);
  return(t);
}
