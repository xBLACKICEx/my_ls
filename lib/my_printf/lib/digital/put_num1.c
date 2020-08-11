/*
** EPITECH PROJECT, 2019
** my_print_num
** File description:
** my_pirnt_num
*/

#include <my.h>

void nbr_im(intmax_t nb)
{
    if (nb == INT_LEAST64_MIN) {
        write(1, "-9223372036854775808", 20);
        return;
    }
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_im(nb / 10);
        nbr_im(nb % 10);
    } else
        pchar_i(nb + 48);
}

void nbr_uim(uintmax_t nb)
{
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_uim(nb / 10);
        nbr_uim(nb % 10);
    } else
        pchar_i(nb + 48);
}

void nbr_si(size_t nb)
{
    if (nb == INT_LEAST64_MIN) {
        write(1, "-9223372036854775808", 20);
        return;
    }
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_si(nb / 10);
        nbr_si(nb % 10);
    } else
        pchar_i(nb + 48);
}

void nbr_pt(ptrdiff_t nb)
{
    if (nb < 0) {
        write (1, "-", 1);
        nb = nb * -1;
    } if (nb >= 10) {
        nbr_pt(nb / 10);
        nbr_pt(nb % 10);
    } else
        pchar_i(nb + 48);
}