/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_ls_stuctur
*/

#ifndef MY_LS_STUCTUR_H_
#define MY_LS_STUCTUR_H_

typedef struct my_ls_s
{
    char *flg;
    DIR *dir;
    dlist_t *list;
    struct dirent *dirient;
} my_ls_t;


#endif /* !MY_LS_STUCTUR_H_ */
