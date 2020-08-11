/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** type1
*/

#include <my.h>
#include <my_printf.h>

void is_ll(va_list list, flags_t *flag)
{
    if (flag->sp == 1 || flag->sp == 2) {
        long long nb = va_arg(list, long long);
        if (flag->space > 0 && nb > 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_ll(nb);
    } else {
        unsigned long long nb = va_arg(list, unsigned long long);
        check_ah(flag);
        bnm_ull(nb, flag->base[-3 + flag->sp]);
    }
}

void is_j(va_list list, flags_t *flag)
{
    if (flag->sp == 1 || flag->sp == 2) {
        intmax_t nb = va_arg(list, intmax_t);
        if (flag->space > 0 && nb > 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_im(nb);
    } else {
        uintmax_t nb = va_arg(list, uintmax_t);
        check_ah(flag);
        bnm_uim(nb, flag->base[-3 + flag->sp]);
    }
}

void is_z(va_list list, flags_t *flag)
{
    if (flag->sp == 1 || flag->sp == 2) {
        size_t nb = va_arg(list, size_t);
        if (flag->space > 0 && nb > 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_si(nb);
    } else {
        size_t nb = va_arg(list, size_t);
        check_ah(flag);
        bnm_si(nb, flag->base[-3 + flag->sp]);
    }
}

void is_t(va_list list, flags_t *flag)
{
    if (flag->sp == 1 || flag->sp == 2) {
        ptrdiff_t nb = va_arg(list, ptrdiff_t);
        if (flag->space > 0 && nb > 0) write(1, " ", 1);
        if (flag->p > 0 && nb > 0) write(1, "+", 1);
        nbr_pt(nb);
    } else {
        ptrdiff_t nb = va_arg(list, ptrdiff_t);
        check_ah(flag);
        bnm_pt(nb, flag->base[-3 + flag->sp]);
    }
}

void is_ml(va_list list, flags_t *flag)
{
    return;
}