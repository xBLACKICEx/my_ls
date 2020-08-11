/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** type2
*/

#include <my.h>
#include <my_printf.h>

void is_char(va_list list, flags_t *flag)
{
    int c = va_arg(list, int);

    pchar_i(c);
}

void is_wint(va_list list, flags_t *flag)
{
    wint_t c = va_arg(list, wint_t);

    pchar_w(c);
}

void is_char_ptr(va_list list, flags_t *flag)
{
    char *str = va_arg(list, char *);
    int len = my_strlen(str);

    if (flag->sp == 10)
        pstr_c(str);
    else
        sp_pstr_c(str);
}

void is_wachar(va_list list, flags_t *flag)
{
    wchar_t *str = va_arg(list, wchar_t *);
    int len = my_strlen_w(str);

    if (flag->sp == 10)
        pstr_w(str);
    else
        sp_pstr_w(str);
}
