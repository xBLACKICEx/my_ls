/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_ls
*/

#ifndef MY_LS_H_
#define MY_LS_H_

/*system lib*/
#include <sys/types.h>
#include <sys/sysmacros.h>
#include <sys/stat.h>
#include <string.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>

#include <linked_list.h>
#include <my.h>
#include <my_lib.h>
#include <my_printf.h>
#include <my_ls_stuctur.h>

void free_data(my_ls_t *data);

void read_dir(my_ls_t *data, char *path, DIR *dir);
void open_directory(my_ls_t *data, int ac, char *av[], unsigned int w);

/*error*/
void error_flags(my_ls_t *data);
int error_dir_path(my_ls_t *data, char *av[], int w);

/*flags*/
void flag_F(my_ls_t *data, dlist_t *dlist);
void flag_l(my_ls_t *data, char *path, dlist_t *dlist);
void ls_flag_t(dlist_t *list, char *path);
void no_flag_print(my_ls_t *data, char *path, dlist_t *dlist);

/*my_ls_tootls.c*/
void choos_flags(my_ls_t *data, char *path, dlist_t *dlist);
void count_total(dlist_t *dlist, char *path, char *flg, struct stat buf);
void check_dir(struct dirent *dirient, dlist_t *dlist, char *path, char *flg);
#endif /* !MY_LS_H_ */
