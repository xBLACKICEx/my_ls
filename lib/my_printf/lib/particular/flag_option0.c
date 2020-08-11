/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** flag_option
*/

#include <my.h>
#include <my_printf.h>

void my_put_nbr_h(flags_t *flag, short nb)
{
    if (flag->n > 0) {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_s(nb);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
    } else {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_s(nb);
    }
}

void my_put_nbr_hh(flags_t *flag, signed char nb)
{
    if (flag->n > 0) {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_c(nb);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
    } else {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_c(nb);
    }
}

void my_put_nbr_i(flags_t *flag, int nb)
{
    if (flag->n > 0) {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_i(nb);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
    } else {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_i(nb);
    }
}

void my_put_nbr_l(flags_t *flag, int nb)
{
    if (flag->n > 0) {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_l(nb);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
    } else {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_l(nb);
    }
}

void my_put_nbr_ll(flags_t *flag, int nb)
{
    if (flag->n > 0) {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_ll(nb);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
    } else {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_ll(nb);
    }
}