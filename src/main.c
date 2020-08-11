/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** main
*/

#include <my_ls.h>

unsigned int set_ls_struct_defaut(my_ls_t **data, int ac, char *av[])
{
    (*data)->flg = NULL;
    (*data)->list = NULL;
    int w = 1;

    if (ac >= 2)
        for (; av[w] != NULL && av[w][0] == '-' && av[w][1] != '-'; w++)
            for (int h = 1; av[w][h] != '\0'; h++)
                (*data)->flg = my_strncdup((*data)->flg, &av[w][h], 1);
    return w;
}

void free_data(my_ls_t *data)
{
    if (data->flg != NULL)
        free(data->flg);
    clear_dlist(&data->list);
    if (data != NULL)
        free(data);
}

int main(int argc, char *argv[])
{
    int w = 0, error = 0;
    dlist_t *list = NULL;
    my_ls_t *data = malloc(sizeof(my_ls_t));

    w = set_ls_struct_defaut(&data, argc, argv);
    error_flags(data);
    error = error_dir_path(data, argv, w);
    open_directory(data, argc, argv, w);
    free_data(data);
    return error;
}