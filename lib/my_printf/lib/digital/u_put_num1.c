/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf.c
*/

#include <my.h>

void bnm_cul_uc(unsigned char nbr, char const *base, int len)
{
    if (nbr >= len) {
        bnm_cul_uc(nbr / len, base, len);
        bnm_cul_uc(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

void bnm_uc(unsigned char nbr, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_uc(nbr, base, i);
}

void bnm_cul_us(unsigned short nbr, char const *base, int len)
{
    if (nbr >= len) {
        bnm_cul_us(nbr / len, base, len);
        bnm_cul_us(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

void bnm_us(unsigned short nbr, char const *base)
{
    int i;

    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_us(nbr, base, i);
}