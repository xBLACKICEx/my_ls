/*
** EPITECH PROJECT, 2020
** .psu_my_ls_2019 (工作区)
** File description:
** my_ls_tools0
*/

#include <my_ls.h>

void choos_flags(my_ls_t *data, char *path, dlist_t *dlist)
{
    if (my_str_cmp_char(data->flg, 'l') == true) {
        my_printf("total %d\n", dlist->total / 2);
        flag_l(data, path, dlist);
    } else
        no_flag_print(data, path, dlist);
}

void count_total(dlist_t *dlist, char *path, char *flg, struct stat buf)
{
    if (dlist->begin->dt_dir == false && dlist->begin->file_name[0] != '.')
        dlist->total += buf.st_blocks;
}

void check_dir(struct dirent *dirient, dlist_t *dlist, char *path, char *flg)
{
    struct stat buf;
    int i = 0;
    char ptr[256];

    strcpy(ptr, path);
    strcat(ptr, "/");
    strcat(ptr, dlist->begin->file_name);
    if (dlist != NULL && dlist->begin != NULL) {
        if (dirient->d_type == DT_DIR) dlist->begin->dt_dir = true;
        else dlist->begin->dt_dir = false;
        i = stat(ptr, &buf);
        count_total(dlist, path, flg, buf);
    }
}