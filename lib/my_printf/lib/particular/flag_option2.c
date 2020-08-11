/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** flag_option
*/

#include <my.h>
#include <my_printf.h>

void my_putnbr_base_i(flags_t *flag, unsigned int nb)
{
    if (flag->n > 0) {
        check_ah(flag);
        bnm_ui(nb, flag->base[-3 + flag->sp]);
        put_witdh_zero(nb, flag, base_len(nb, flag->base[-3 + flag->sp]));
    } else {
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        check_ah(flag);
        put_witdh_zero(nb, flag, base_len(nb, flag->base[-3 + flag->sp]));
        bnm_ui(nb, flag->base[-3 + flag->sp]);
    }
}