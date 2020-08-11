/*
** EPITECH PROJECT, 2019
** my lib
** File description:
** #include fonction name
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <wchar.h>
#pragma once

// !new type of put_num and string
// * put str and char
void pchar_i(int c);
void pchar_w(wint_t c);
void pstr_c(char *str);
void pstr_w(wchar_t *str);
void sp_pstr_c(char *str);
void sp_pstr_w(wchar_t *str);
//* put_num
void nbr_c(signed char n);
void nbr_s(short n);
void nbr_i(int nb);
void nbr_l(long nb);
void nbr_ll(long long nb);
void nbr_im(intmax_t nb);
void nbr_si(size_t nb);
void nbr_pt(ptrdiff_t nb);
// * u_put_num
void nbr_uc(unsigned int n);
void nbr_us(unsigned int n);
void nbr_ui(unsigned int nb);
void nbr_ul(unsigned long nb);
void nbr_ull(unsigned long long nb);
void nbr_uim(uintmax_t nb);
// * u_put_num base
char *bnm_l(long nbr, char const *base);
char *bnm_cul_l(long nbr, char const *base, int len, char **stock);
void bnm_uc(unsigned char n, char const *base);
void bnm_cul_uc(unsigned char nbr, char const *base, int len);
void bnm_us(unsigned short n, char const *base);
void bnm_cul_us(unsigned short nbr, char const *base, int len);
void bnm_ui(unsigned int nbr, char const *base);
void bnm_cul_ui(unsigned int nbr, char const *base, int len);
void bnm_ul(unsigned long nbr, char const *base);
void bnm_cul_ul(unsigned long nbr, char const *base, int len);
void bnm_ull(unsigned long long nbr, char const *base);
void bnm_cul_ull(unsigned long long nbr, char const *base, int len);
void bnm_uim(uintmax_t nbr, char const *base);
void bnm_cul_uim(uintmax_t nbr, char const *base, int len);
void bnm_si(size_t nbr, char const *base);
void bnm_cul_si(size_t nbr, char const *base, int len);
void bnm_pt(ptrdiff_t nbr, char const *base);
void bnm_cul_pt(ptrdiff_t nbr, char const *base, int len);

// float and doble
void my_put_float(double nbr, int size);
// tools
double dmod(double x, double mod);
int match(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_getnbr(char const *str);
int nbrlen(long long nbr);
int my_strlen(char const *str);
int my_strlen_w(wchar_t *str);
char *my_strncdup(char *dest, char const *str, int n);
int base_len(long long nbr, char *base);

/*letter func*/
#define IS_NUMABS(c) ((c >= '0' && c <= '9') || c == '-' || c == '+')
#define IS_NUM(c) (c >= '1' && c <= '9')
#define ABS(value) ((value < 0) ? ((value) * -1) : (value))