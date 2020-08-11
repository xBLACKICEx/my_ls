/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_printf header
*/

#include <stdarg.h>
#include <stdbool.h>
#pragma once

typedef struct s_list_fun {
    char *op;
    void (*operation)();
} t_funs;

typedef struct cmp_s
{
    int sum;
    int dif;
} t_cmp;

typedef struct s_flags
{
    short p;
    short n;
    short ah;
    short space;
    char sp;
    bool error;
    short zero;
    char *base[5];
    short width;
    short precision;
    short fg[6];
} flags_t;
t_cmp my_strcmp_no_count_eos(char const *s1, char const *s2);

/*ptr to function*/
typedef bool (*SP_PTR)();
typedef void (*FPTR)();
/*my_printf funcons*/
int my_printf(char const *format, ...);
/*fonction specifiers*/
void sp_d_or_i(va_list list, flags_t *flag);
void sp_u(va_list list, flags_t *flag);
void sp_base(va_list list, flags_t *flag);
void sp_c(va_list list, flags_t *flag);
void sp_flag_sS(va_list list, flags_t *flag);

/*run flags funs*/
void id_run_sp(va_list list, FPTR *fptr, short *fg, int i);
void u_run_sp(va_list list, FPTR *fptr, short *fg, int i);
void boxX_run_sp(va_list list, FPTR *fptr, flags_t *flag, int i);
void csS_run_sp(va_list list, FPTR *fptr, flags_t *flag);

/*function for error*/
bool length_error_case(short *f);

/* tools fonctions*/
int is_hh_ll(short *fg, int i);
int cmpc(char const *s1, char s2, flags_t *flag);
void swich_check_0(char const format, flags_t *flag);
void check_zeor_num(char const *format, flags_t *flag, int *j, int *i);
int list_specifiers(flags_t *flag, va_list list, int *i);
void put_witdh_zero(long long nb, flags_t *flag, int len);
void check_ah(flags_t *flag);

void my_put_nbr_i(flags_t *flag, int nb);
void my_putnbr_base_i(flags_t *flag, unsigned int nb);

void is_h(va_list list, flags_t *flag);
void is_hh(va_list list, flags_t *flag);
void is_l(va_list list, flags_t *flag);
void is_ll(va_list list, flags_t *flag);
void is_j(va_list list, flags_t *flag);
void is_z(va_list list, flags_t *flag);
void is_t(va_list list, flags_t *flag);
void is_ml(va_list list, flags_t *flag);
void is_i(va_list list, flags_t *flag);
void is_char(va_list list, flags_t *flag);
void is_char_ptr(va_list list, flags_t *flag);
void is_wint(va_list list, flags_t *flag);
void is_wachar(va_list list, flags_t *flag);