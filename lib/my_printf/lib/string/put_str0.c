/*
** EPITECH PROJECT, 2019
** my_str
** File description:
** my_str
*/

#include <my.h>

void pchar_i(int c)
{
    write(1, &c, 1);
}

void pchar_w(wint_t c)
{
    write(1, &c, 1);
}

void pstr_c(char *str)
{
    int i = 0;

    if (str == NULL) {
        write(1, "(null)", 6);
        return;
    }
    for (; str[i] != '\0'; i++);
    write(1, str, i);
}

void pstr_w(wchar_t *str)
{
    int i = 0;

    if (str == NULL) {
        write(1, "(null)", 6);
        return;
    }
    for (; str[i] != '\0'; i++);
    write(1, str, i);
}