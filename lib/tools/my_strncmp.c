/*
** EPITECH PROJECT, 2019
** sfrncmp
** File description:
** comprer char n
*/

#include <stdbool.h>
#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    return (s1[i] - s2[i]);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;
    if (n == 0)
        return (0);
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && i < n; i++);
    return (s1[i] - s2[i]);
}

bool my_str_cmp_char(char const *s1, char s2)
{
    if (s1 != NULL)
        for (; *s1 != '\0'; *s1++)
            if (*s1 == s2)
                return true;
    return false;
}