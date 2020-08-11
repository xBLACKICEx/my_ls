/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** particular0
*/

#include <my.h>
#include <my_printf.h>

void addrs(va_list list, flags_t *flag)
{
    unsigned long nb = va_arg(list, unsigned long);

    if (flag->space > 0)
        flag->width -= 1;
    if (flag->space > 0 && nb > 0) write(1, " ", 1);
    if (flag->p > 0 && nb > 0) write(1, "+", 1);
    write(1, "0x", 2);
    bnm_ul(nb, "0123456789abcdef");
}

void put_p(va_list list, flags_t *flag)
{
    write(1, "%", 1);
}

void jmp_flag(flags_t *flag, int *i)
{
    *i += flag->p;
    *i += flag->n;
    *i += flag->ah;
    *i += flag->space;
    for (int j = 0; j < 6; j++)
        *i += flag->fg[j];
    *i += 1;
}

int list_specifiers(flags_t *flag, va_list list, int *i)
{
    FPTR fptr[] = {&put_p, &sp_d_or_i, &sp_d_or_i, &sp_base, &sp_base,
    &sp_base, &sp_base, &sp_base, &addrs, &sp_c, &sp_flag_sS, &sp_flag_sS};

    jmp_flag(flag, i);
    fptr[flag->sp](list, flag);
    free(flag);
    return (0);
}