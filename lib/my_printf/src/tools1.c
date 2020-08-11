/*
** EPITECH PROJECT, 2019
** new
** File description:
** tools
*/

#include <my.h>
#include <my_printf.h>

int is_hh_ll(short *fg, int i)
{
    if (i >= 2)
        return (2);
    short res = (fg[i] == 2) ? true : false;

    if (i == 1)
        return (1 + res);
    else
        return (res);
}

void swich_check_1(char const format, flags_t *flag)
{
    switch (format) {
        case '+': flag->p++;
        break;
        case '-': flag->n++;
        break;
        case '#': flag->ah++;
        break;
        case '0': flag->zero++;
        break;
        case ' ': flag->space++;
        break;
    }
}

void check_zeor_num(char const *format, flags_t *flag, int *j, int *i)
{
    if (format[*j] == '0') {
        flag->zero = my_getnbr(&format[*j + 1]);
        *j += base_len(flag->zero, "0123456789") + 1;
        *i += base_len(flag->zero, "0123456789") + 1;
    }
    if (IS_NUM(format[*j])) {
        flag->width = my_getnbr(&format[*j]);
        *j += base_len(flag->width, "0123456789");
        *i += base_len(flag->width, "0123456789");
    }
}

void swich_check_0(char const format, flags_t *flag)
{
    switch (format) {
        case 'h': flag->fg[0]++;
        break;
        case 'l': flag->fg[1]++;
        break;
        case 'q': flag->fg[1] += 2;
        break;
        case 'j': flag->fg[2]++;
        break;
        case 'z': flag->fg[3]++;
        break;
        case 't': flag->fg[4]++;
        break;
        case 'L': flag->fg[5]++;
        break;
        default: swich_check_1(format, flag);
    }
}

void check_ah(flags_t *flag)
{
    if (flag->ah > 0) {
        switch (flag->sp) {
            case 4:
                write(1, "0", 1);
                flag->zero -= 1;
            break;
            case 6:
                write(1, "0x", 2);
                flag->zero -= 2;
            break;
            case 7:
                write(1, "0X", 2);
                flag->zero -= 2;
            break;
        }
    }
}