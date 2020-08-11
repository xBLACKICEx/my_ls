/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strcmp
*/
#include <my_printf.h>
#include <my.h>
#include <wchar.h>

int cmpc(char const *s1, char s2, flags_t *flag)
{
    int i = 0;

    for (; s1[i] != '\0' && s1[i] != s2; i++);
    flag->sp = i;
    return (s1[i] - s2);
}

int base_len(long long nbr, char *base)
{
    int i = 1, x = my_strlen(base);

    for (; (nbr /= x) != 0; i++);
    return (i);
}

int my_strlen(char const *str)
{
    int i = 0;
    if (str == ((void *)0) || str[0] == '\0')
        return (0);
    for (; str[i] != '\0'; i++);
    return (i);
}

int my_strlen_w(wchar_t *str)
{
    int i = 0;
    if (str == ((void *)0) || str[0] == '\0')
        return (0);
    for (; str[i] != '\0'; i++);
    return (i);
}