/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Arch]
** File description:
** my_strcdup
*/

#include <my.h>
#include <stdbool.h>

char *my_strcdup(char *dest, char *str, bool need_free_dest,
                                        bool need_free_str)
{
    char *src = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(str) + 1));
    int i = 0;

    if (dest != NULL && dest[0] != '\0') {
        for (; dest[i] != '\0'; i++)
            src[i] = dest[i];
        if (need_free_dest == true)
            free(dest);
    }
    if (str != NULL && str[0] != '\0') {
        for (int j = 0; str[j] != '\0'; j++, i++)
            src[i] = str[j];
        src[i] = '\0';
        if (need_free_str == true)
            free(str);
    }
    return src;
}

char *my_strcdup_ls(char *tmp, char *dest, char *str)
{
    int j;
    int i;

    for (j = 0; dest[j] != '\0'; j++)
        tmp[j] = dest[j];
    tmp[j++] = '/';
    for (i = 0; str[i] != '\0'; i++, j++)
        tmp[j] = str[i];
    tmp[j] = '\0';
    return tmp;
}