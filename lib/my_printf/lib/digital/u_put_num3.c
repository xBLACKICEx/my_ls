/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf.c
*/

#include <my.h>
#include <stdint.h>

void bnm_cul_ull(unsigned long long nbr, char const *base, int len)
{
    if (nbr >= len) {
        bnm_cul_ull(nbr / len, base, len);
        bnm_cul_ull(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

void bnm_ull(unsigned long long nbr, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_ull(nbr, base, i);
}

void bnm_cul_uim(uintmax_t nbr, char const *base, int len)
{
    if (nbr >= len) {
        bnm_cul_uim(nbr / len, base, len);
        bnm_cul_uim(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

void bnm_uim(uintmax_t nbr, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_uim(nbr, base, i);
}