/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** type0
*/
#include <my.h>
#include <my_printf.h>

void is_h(va_list list, flags_t *flag)
{
    if (flag->sp == 1 || flag->sp == 2) {
        short nb = va_arg(list, int);
        if (flag->space > 0 && nb > 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_s(nb);
    } else {
        unsigned short nb = va_arg(list, int);
        check_ah(flag);
        bnm_us(nb, flag->base[-3 + flag->sp]);
    }
}

void is_hh(va_list list, flags_t *flag)
{
    if (flag->sp == 1 || flag->sp == 2) {
        signed char nb = va_arg(list, int);
        if (flag->space > 0 && nb > 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_c(nb);
    } else {
        unsigned char nb = va_arg(list, unsigned int);
        check_ah(flag);
        bnm_uc(nb, flag->base[-3 + flag->sp]);
    }
}

void is_i(va_list list, flags_t *flag)
{
    if (flag->sp == 1 || flag->sp == 2) {
        int nb = va_arg(list, int);
        my_put_nbr_i(flag, nb);
    } else {
        unsigned int nb = va_arg(list, unsigned int);
        my_putnbr_base_i(flag, nb);
    }
}

void is_l(va_list list, flags_t *flag)
{
    if (flag->sp == 1 || flag->sp == 2) {
        long nb = va_arg(list, long);
        if (flag->space > 0 && nb > 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_l(nb);
    } else {
        unsigned long nb = va_arg(list, unsigned long);
        check_ah(flag);
        bnm_ul(nb, flag->base[-3 + flag->sp]);
    }
}