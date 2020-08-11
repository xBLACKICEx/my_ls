/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Arch]
** File description:
** flags_0
*/

#include <my_ls.h>

void flag_F(my_ls_t *data, dlist_t *dlist)
{
    for (node_t *tmp = dlist->begin; tmp != NULL; tmp = tmp->next)
        if (tmp->dt_dir == true)
            tmp->file_name = my_strcdup(tmp->file_name, "/", true, false);
}

void print_file_rignts(struct stat stat_buf, node_t *tmp)
{
    pstr_c((S_ISDIR(stat_buf.st_mode)) ? "d" : "-");
    pstr_c((S_ISLNK(stat_buf.st_mode)) ? "l" : "\0");
    pstr_c((S_ISCHR(stat_buf.st_mode)) ? "c" : "\0");
    pstr_c((S_ISBLK(stat_buf.st_mode)) ? "b" : "\0");
    pstr_c((S_ISFIFO(stat_buf.st_mode)) ? "p" : "\0");
    pstr_c((S_ISSOCK(stat_buf.st_mode)) ? "s" : "\0");
    pstr_c((stat_buf.st_mode & S_IRUSR ) ? "r" : "-");
    pstr_c((stat_buf.st_mode & S_IWUSR ) ? "w" : "-");
    pstr_c((stat_buf.st_mode & S_IXUSR ) ? "x" : "-");
    pstr_c((stat_buf.st_mode & S_IRGRP ) ? "r" : "-");
    pstr_c((stat_buf.st_mode & S_IWGRP ) ? "w" : "-");
    pstr_c((stat_buf.st_mode & S_IXGRP ) ? "x" : "-");
    pstr_c((stat_buf.st_mode & S_IROTH ) ? "r" : "-");
    pstr_c((stat_buf.st_mode & S_IWOTH ) ? "w" : "-");
    if ((stat_buf.st_mode & __S_ISVTX)) {
        pstr_c((stat_buf.st_mode & S_IXOTH ) ? "t" : "T");}
    else pstr_c((stat_buf.st_mode & S_IXOTH ) ? "x" : "-");
    write(1, " ", 1);
}

void print_flag_l(my_ls_t *data, node_t *tmp, char *path)
{
    struct stat stat_buf;
    struct passwd *pwd;
    struct group *grp;
    struct tm *t;
    char *time = NULL;
    char tmp_pah[512];

    my_strcdup_ls(tmp_pah, path, tmp->file_name);
    stat(tmp_pah, &stat_buf);
    pwd = getpwuid(stat_buf.st_uid);
    grp = getgrgid(stat_buf.st_gid);
    time = ctime(&stat_buf.st_mtime);
    time[16] = '\0';
    print_file_rignts(stat_buf, tmp);
    my_printf("%2d %s %s ", stat_buf.st_nlink, pwd->pw_name, grp->gr_name);
    if (my_str_cmp_char(data->flg, 'd') && my_strcmp(tmp->file_name, ".") == 0)
        my_printf("%6d %s %s\n", stat_buf.st_size, &time[4], path);
    else
        my_printf("%6d %s %s\n", stat_buf.st_size, &time[4], tmp->file_name);
}

void flag_l(my_ls_t *data, char *path, dlist_t *dlist)
{
    node_t *tmp = my_str_cmp_char(data->flg, 'r')
        ? dlist->begin : dlist->end;

    for (; tmp != NULL; tmp = my_str_cmp_char(data->flg, 'r') ?
        tmp->next : tmp->prev) {
        if (my_str_cmp_char(data->flg, 'd') &&
            my_strcmp(tmp->file_name, ".") != 0)
            continue;
        if (!my_str_cmp_char(data->flg, 'a') &&
            !my_str_cmp_char(data->flg, 'd') && tmp->file_name[0] == '.')
            continue;
        print_flag_l(data, tmp, path);
        if (my_str_cmp_char(data->flg, 'd')
            && my_strcmp(tmp->file_name, ".") == 0)
            break;
    }
}

void no_flag_print(my_ls_t *data, char *path, dlist_t *dlist)
{
    node_t *tmp = my_str_cmp_char(data->flg, 'r')
        ? dlist->begin : dlist->end;

    for (; tmp != NULL; tmp = my_str_cmp_char(data->flg, 'r') ?
        tmp->next : tmp->prev) {
        if (my_str_cmp_char(data->flg, 'd') &&
            my_strcmp(tmp->file_name, ".") != 0)
            continue;
        if (!my_str_cmp_char(data->flg, 'a') &&
            !my_str_cmp_char(data->flg, 'd') && tmp->file_name[0] == '.')
            continue;
        if (my_str_cmp_char(data->flg, 'd') &&
            my_strcmp(tmp->file_name, ".") == 0) {
            my_printf("%s\n", path);
            break;
        } else
            my_printf("%s\n", tmp->file_name);
    }
}