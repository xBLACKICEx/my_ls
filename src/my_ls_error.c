/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_ls_error
*/

#include <my_ls.h>

void error_flags(my_ls_t *data)
{
    if (data->flg != NULL)
        for (int i = 0; data->flg[i] != '\0'; i++)
            if (my_str_cmp_char(LS_FLAGS, data->flg[i]) == false) {
                write(2, "ls: invalid option -- ", 23);
                my_printf("'%c'\n", data->flg[i]);
                write(2, "Try 'ls --help' for more information.\n", 39);
                free_data(data);
                exit(84);
            }
}

int error_dir_path(my_ls_t *data, char *av[], int w)
{
    char *dirname = NULL;
    int state = 0;

    for (int i = w; av[i] != NULL; i++) {
        dirname = my_strcdup("./", av[i], false, false);
        data->dir = opendir(dirname);
        free(dirname);
        if (data->dir == NULL) {
            my_printf("ls: cannot access '%s': %s\n", av[i], strerror(errno));
            state = 84;
        }
        closedir(data->dir);
    }
    return state;
}