/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** error of my_printf
*/
#include <my.h>
#include <my_printf.h>

bool loop_check(short *f, short index)
{
    for (int i = 0; i < 6; i++) {
        if (i == index)
            i++;
        if (i == 6)
            return (true);
        if (f[i] > 0 && i != 6)
            return (false);
    }
    return (true);
}

bool length_error_case(short *f)
{
    if (f[0] > 2 || f[1] > 2 || f[2] > 1 || f[3] > 1 || f[4] > 1 || f[5] > 1)
        return (false);
    for (int i = 0; i < 6; i++) {
        if (f[i] == 1 || f[i] == 2)
            if (loop_check(f, i) == false)
                return (false);
    }
    return (true);
}
