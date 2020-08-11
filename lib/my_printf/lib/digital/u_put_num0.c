/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf.c
*/

#include <my.h>

char *my_strncdup(char *dest, char const *str, int n)
{
    int len = my_strlen(dest) + n;
    char *src = malloc(sizeof(char) * (len + 1));
    int i = 0;

    if (dest != NULL && dest[0] != '\0') {
        for (; dest[i] != '\0'; i++)
            src[i] = dest[i];
        free(dest);
    }
    for (int j = 0; str[j] != '\0' && j < n; j++, i++)
        src[i] = str[j];
    src[i] = '\0';
    return (src);
}

char *bnm_cul_l(long nbr, char const *base, int len, char **stock)
{
    if (nbr >= len) {
        bnm_cul_l(nbr / len, base, len, stock);
        bnm_cul_l(nbr % len, base, len, stock);
    } else
        *stock = my_strncdup(*stock, &base[nbr], 1);
}

char *bnm_l(long nbr, char const *base)
{
    int i;
    char *stock = NULL;

    if (nbr == INT_LEAST64_MIN)
        return ("-9223372036854775808");
    if (nbr < 0) {
        nbr = nbr * -1;
    }
    for (i = 0; base[i] != '\0'; i++);
    bnm_cul_l(nbr, base, i, &stock);
    return (stock);
}