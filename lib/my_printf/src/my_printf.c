/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf.c
*/

#include <my.h>
#include <my_printf.h>

flags_t *set_falg(void)
{
    flags_t *flag = malloc(sizeof(flags_t));

    flag->p = false;
    flag->n = false;
    flag->ah = false;
    flag->error = false;
    flag->zero = 0;
    flag->width = 0;
    flag->space = 0;
    flag->precision = 0;
    flag->base[0] = "01";
    flag->base[1] = "01234567";
    flag->base[2] = "0123456789";
    flag->base[3] = "0123456789abcdef";
    flag->base[4] = "0123456789ABCDEF";
    for (int i = 0; i < 6; i++)
        flag->fg[i] = 0;
    return (flag);
}

int flags(char const *format, int *i, va_list list)
{
    int j = *i += 1;
    char sp[] = "%dibouxXpcsS";
    flags_t *flag = set_falg();

    for (; format[j] != '\0' && cmpc(sp, format[j], flag) != 0; j++) {
        swich_check_0(format[j], flag);
        check_zeor_num(format, flag, &j, i);
        if (cmpc(sp, format[j], flag) == 0)
            break;
    }
    if (!length_error_case(flag->fg) || format[j] == '\0') {
        free(flag);
        return (84);
    }
    list_specifiers(flag, list, i);
}

int my_printf(char const *format, ...)
{
    va_list list;
    int res;
    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        while (format[i] == '%')
            res = flags(format, &i, list);
        if (format[i] == '\0') break;
        write(1, &format[i], 1);
    }
    va_end(list);
    return (res);
}