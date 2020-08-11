/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** flag_option
*/

#include <my.h>
#include <my_printf.h>

void my_put_nbr_im(flags_t *flag, intmax_t nb)
{
    if (flag->n > 0) {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_im(nb);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
    } else {
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_im(nb);
    }
}

void my_put_nbr_si(flags_t *flag, int nb)
{
    if (flag->n > 0) {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_si(nb);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
    } else {
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_si(nb);
    }
}

void my_put_nbr_pt(flags_t *flag, ptrdiff_t nb)
{
    if (flag->n > 0) {
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_pt(nb);
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
    } else {
        put_witdh_zero(nb, flag, base_len(nb, "0123456789"));
        if (flag->space > 0 && nb > 0 && flag->p == 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_pt(nb);
    }
}