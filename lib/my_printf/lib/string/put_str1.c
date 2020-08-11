/*
** EPITECH PROJECT, 2019
** my_str
** File description:
** my_str
*/

#include <my.h>

void sp_pstr_c(char *str)
{
    if (str == NULL) {
        write(1, "(null)", 7);
        return;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            char *octal = bnm_l(str[i], "01234567");
            int len = my_strlen(octal);

            write(1, "\\", 1);
            if (len == 1)
                write(1, "00", 2);
            if (len == 2)
                write(1, "0", 1);
            write(1, octal, len);
            free (octal);
    } else
        write(1, &str[i], 1);
    }
}

void sp_pstr_w(wchar_t *str)
{
    if (str == NULL) {
        write(1, "(null)", 7);
        return;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            char *octal = bnm_l(str[i], "01234567");
            int len = my_strlen(octal);

            write(1, "\\", 1);
            if (len == 1)
                write(1, "00", 2);
            if (len == 2)
                write(1, "0", 1);
            write(1, octal, len);
            free (octal);
    } else
        write(1, &str[i], 1);
    }
}