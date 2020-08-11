/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf.c
*/

#include <my.h>

void nbr_c(signed char nb)
{
    if (nb == INT_LEAST8_MIN) {
        write(1, "-128", 4);
        return;
    }
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_c(nb / 10);
        nbr_c(nb % 10);
    } else
        pchar_i(nb + 48);
}

void nbr_s(short nb)
{
    if (nb == INT_LEAST16_MIN) {
        write(1, "-32768", 6);
        return;
    }
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_s(nb / 10);
        nbr_s(nb % 10);
    } else
        pchar_i(nb + 48);
}

void nbr_i(int nb)
{
    if (nb == INT_LEAST32_MIN) {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_i(nb / 10);
        nbr_i(nb % 10);
    } else
        pchar_i(nb + 48);
}

void nbr_l(long nb)
{
    if (nb == INT_LEAST64_MIN) {
        write(1, "-9223372036854775808", 20);
        return;
    }
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_l(nb / 10);
        nbr_l(nb % 10);
    } else
        pchar_i(nb + 48);
}

void nbr_ll(long long nb)
{
    if (nb == INT_LEAST64_MIN) {
        write(1, "-9223372036854775808", 20);
        return;
    }
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_ll(nb / 10);
        nbr_ll(nb % 10);
    } else
        pchar_i(nb + 48);
}