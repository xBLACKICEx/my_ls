/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_lib
*/

#ifndef MY_LIB_H_
#define MY_LIB_H_
#include <stdbool.h>

char *my_strcdup(char *dest, char *str, bool need_free_dest,
                                            bool need_free_str);
int my_strcmp(char const *s1, char const *s2);
bool my_str_cmp_char(char const *s1, char s2);
char *my_strdup(char const *src);
char *my_strcdup_ls(char tmp[], char *dest, char *str);
char *my_strcpy(char *dest, char const *str);
char *my_strcat(char *dest, char const *str);
int my_strncmp(char const *s1, char const *s2, int n);
#define LS_FLAGS "aAbBcdDfFgGhHiIklLmnNopqQrRsStTuUvwxXZ1"

#endif /* !MY_LIB_H_ */
