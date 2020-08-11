/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** pop_list
*/

#include <linked_list.h>

void pop_front(dlist_t **dlist)
{
    node_t *tmp;
    if (is_empty_dlist(*dlist) == true)
        return;
    if ((*dlist)->len == 1) {
        free((*dlist)->begin);
        free((*dlist));
        (*dlist) = NULL;
        return;
    } else {
        tmp = (*dlist)->begin;
        (*dlist)->begin = (*dlist)->begin->next;
        (*dlist)->begin->prev = NULL;
        free(tmp);
        (*dlist)->len -= 1;
        return;
    }
}

void pop_back(dlist_t **dlist)
{
    node_t *tmp;
    if (is_empty_dlist(*dlist) == true)
        return;
    if ((*dlist)->len == 1) {
        free((*dlist)->end);
        free((*dlist));
        (*dlist) = NULL;
        return;
    } else {
        tmp = (*dlist)->end;
        (*dlist)->end = (*dlist)->end->prev;
        (*dlist)->end->next = NULL;
        free(tmp);
    }
    (*dlist)->len -= 1;
}