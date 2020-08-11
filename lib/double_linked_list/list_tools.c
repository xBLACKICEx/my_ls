/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** is_empty_list
*/

#include <linked_list.h>
#include <my_printf.h>

void print_dlist(dlist_t *list)
{
    for (node_t *tmp = list->end; tmp != NULL; tmp = tmp->prev)
        my_printf("%d\n", tmp->time_date);
}

void print_dlist_end(dlist_t *list)
{
    for (node_t *tmp = list->end; tmp != NULL; tmp = tmp->prev)
        my_printf("%d\n", tmp->time_date);
}

void clear_dlist(dlist_t **dlist)
{
    node_t *tmp;
    if (is_empty_dlist(*dlist))
        return;
    for (((*dlist)->begin); (*dlist)->begin != NULL; ) {
        free((*dlist)->begin->file_name);
        tmp = (*dlist)->begin;
        (*dlist)->begin = (*dlist)->begin->next;
        free(tmp);
        (*dlist)->len -= 1;
    }
    if ((*dlist) != NULL)
        free((*dlist));
}

bool is_empty_dlist(dlist_t * cheak_list_is_null)
{
    if (cheak_list_is_null == NULL)
        return (true);
    else
        return (false);
}