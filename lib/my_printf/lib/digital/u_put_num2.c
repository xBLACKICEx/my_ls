/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf.c
*/

#include <my.h>

void bnm_cul_ui(unsigned int nbr, char const *base, int len)
{
    if (nbr >= len) {
        bnm_cul_ui(nbr / len, base, len);
        bnm_cul_ui(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

void bnm_ui(unsigned int nbr, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_ui(nbr, base, i);
}

void bnm_cul_ul(unsigned long nbr, char const *base, int len)
{
    if (nbr >= len) {
        bnm_cul_ul(nbr / len, base, len);
        bnm_cul_ul(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

void bnm_ul(unsigned long nbr, char const *base)
{
    int i;
    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_ul(nbr, base, i);
}