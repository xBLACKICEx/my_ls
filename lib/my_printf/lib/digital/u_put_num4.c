/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf.c
*/

#include <my.h>
#include <stdint.h>

void bnm_cul_si(size_t nbr, char const *base, int len)
{
    if (nbr >= len) {
        bnm_cul_si(nbr / len, base, len);
        bnm_cul_si(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

void bnm_si(size_t nbr, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_si(nbr, base, i);
}

void bnm_cul_pt(ptrdiff_t nbr, char const *base, int len)
{
    if (nbr >= len) {
        bnm_cul_pt(nbr / len, base, len);
        bnm_cul_pt(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

void bnm_pt(ptrdiff_t nbr, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_pt(nbr, base, i);
}