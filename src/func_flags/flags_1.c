/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Arch]
** File description:
** flags_1
*/

#include <my_ls.h>

void data_to_list(dlist_t **list, char *path)
{
    struct stat stat_buf;
    char tmp_pah[512];

    for (node_t *tmp = (*list)->end; tmp != NULL; tmp = tmp->prev) {
        my_strcdup_ls(tmp_pah, path, tmp->file_name);
        stat(tmp_pah, &stat_buf);
        tmp->time_date = stat_buf.st_mtime;
    }
}

void ls_flag_t(dlist_t *list, char *path)
{
    data_to_list(&list, path);
    int i = 0, j = 0;
    node_t *tmp = list->begin;

    for (; i < list->len; i++) {
        tmp = list->begin;
        for (j = 0; j < list->len - i - 1; j++)
            if (tmp->time_date > tmp->next->time_date)
                swap_nodes(&list, tmp, tmp->next);
            else
                tmp = tmp->next;
    }
}