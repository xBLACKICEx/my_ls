/*
** EPITECH PROJECT, 2019
** new
** File description:
** flag_operation
*/

#include <my.h>
#include <my_printf.h>

void sp_d_or_i(va_list list, flags_t *flag)
{
    int i = 0;
    FPTR fptr[] = {is_h, is_hh, is_l, is_ll, is_j, is_z, is_t, is_ml, is_i};

    if (flag->space > 0) {
        flag->width -= 1;
        flag->zero -= 1;
    }
    for (; i < 6 && flag->fg[i] == 0; i++);
    fptr[i + is_hh_ll(flag->fg, i)](list, flag);
}

void sp_base(va_list list, flags_t *flag)
{
    int i = 0;
    FPTR fptr[] = {is_h, is_hh, is_l, is_ll, is_j, is_z, is_t, is_ml, is_i};

    for (; i < 6 && flag->fg[i] == 0; i++);
    fptr[i + is_hh_ll(flag->fg, i)](list, flag);
}

void sp_c(va_list list, flags_t *flag)
{
    if (flag->fg[1] == 1)
        is_wint(list, flag);
    else
        is_char(list, flag);
}

void sp_flag_sS(va_list list, flags_t *flag)
{
    if (flag->fg[1] == 1)
        is_wachar(list, flag);
    else
        is_char_ptr(list, flag);
}