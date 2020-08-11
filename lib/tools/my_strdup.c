/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_strdup
*/
#include <stdlib.h>
#include <my.h>

char *my_strcpy(char *dest, char const *str)
{
    int i = 0;

    if (str == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0'; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char *src)
{
    int nb_len = my_strlen(src) + 1;
    char *cpy = malloc(sizeof(char) * (nb_len));

    if (cpy == NULL)
        return (NULL);
    cpy = my_strcpy(cpy, src);
    return (cpy);
}