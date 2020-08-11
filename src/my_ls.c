/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Arch]
** File description:
** my_ls
*/

#include <my_ls.h>

void cpy_path(my_ls_t *data, char *path, node_t *tmp)
{
    if (my_str_cmp_char(data->flg, 'a') == false && tmp->file_name[0] == '.')
        return;
    DIR *new_dir = NULL;
    char ptr[256];

    my_strcpy(ptr, path);
    my_strcat(ptr, "/");
    my_printf("\n%s:\n", my_strcat(ptr, tmp->file_name));
    new_dir = opendir(ptr);
    read_dir(data, ptr, new_dir);
    if (new_dir != NULL) closedir(new_dir);
    new_dir = NULL;
}

void read_dir(my_ls_t *data, char *path, DIR *dir)
{
    dlist_t *dlist = NULL;

    while ((data->dirient = readdir(dir)) != NULL) {
        push_front(&dlist, data->dirient->d_name);
        check_dir(data->dirient, dlist, path, data->flg);
    }
    if (my_str_cmp_char(data->flg, 't'))
        ls_flag_t(dlist, path);
    choos_flags(data, path, dlist);
    if (my_str_cmp_char(data->flg, 'R'))
        for (node_t *tmp = dlist->begin; tmp != NULL; tmp = tmp->next)
            if (tmp->dt_dir == true && (my_strcmp(tmp->file_name, ".") != 0 &&
                                        my_strcmp(tmp->file_name, "..") != 0))
                cpy_path(data, path, tmp);
    if (dlist != NULL) clear_dlist(&dlist);
    dlist = NULL;
}

void open_directory(my_ls_t *data, int ac, char *av[], unsigned int w)
{
    DIR *dir = NULL;

    if (ac - w >= 1) {
        for (int i = w; av[i] != NULL; i++) {
            if ((dir = opendir(av[i])) != NULL) {
                if (ac - w > 1)
                    my_printf("%s:\n", av[i]);
                read_dir(data, av[i], dir);
                if (ac - w > 1 && av[i + 1] != NULL)
                    write (1, "\n", 1);
                    closedir(dir);
            }
        }
    } else if ((dir = opendir(".")) != NULL) {
        read_dir(data, ".", dir);
        closedir(dir);
    }
}