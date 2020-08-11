/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** cat strings
*/

#include <stddef.h>

char *my_strcat(char *dest, char const *str)
{
    int j, i;

    if (dest != NULL)
        for (j = 0; dest[j] != '\0'; j++);
    if (str != NULL)
        for (i = 0; str[i] != '\0'; i++, j++)
            dest[j] = str[i];
    dest[j] = '\0';
    return (dest);
}

char *my_strncat(char *dest, char const *str, int n)
{
    int j, i;

    for (j = 0; dest[j] != '\0'; j++);
    for (i = 0; str[i] != '\0' && i < n; i++, j++)
        dest[j] = str[i];
    dest[j] = '\0';
    return (dest);
}