/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** push_list
*/

#include <linked_list.h>
#include <my_lib.h>

void push_back(dlist_t **dlist, char *file_name)
{
    node_t *new_elemnt = malloc(sizeof(node_t));
    new_elemnt->prev = NULL;
    new_elemnt->next = NULL;
    new_elemnt->file_name = my_strdup(file_name);
    new_elemnt->dt_dir = false;
    if (is_empty_dlist(*dlist) == true) {
        (*dlist) = malloc(sizeof(dlist_t));
        (*dlist)->end = new_elemnt;
        (*dlist)->begin = new_elemnt;
        (*dlist)->len = 0;
        (*dlist)->total = 0;
    } else {
        new_elemnt->prev = (*dlist)->end;
        (*dlist)->end->next = new_elemnt;
        (*dlist)->end = new_elemnt;
    }
    (*dlist)->len += 1;
}

void push_front(dlist_t **dlist, char *file_name)
{
    node_t *new_elemnt = malloc(sizeof(node_t));
    new_elemnt->prev = NULL;
    new_elemnt->next = NULL;
    new_elemnt->file_name = my_strdup(file_name);
    new_elemnt->dt_dir = false;
    if ((*dlist) == NULL) {
        *dlist = malloc(sizeof(dlist_t));
        (*dlist)->begin = new_elemnt;
        (*dlist)->end = new_elemnt;
        (*dlist)->len = 0;
        (*dlist)->total = 0;
    } else {
        new_elemnt->next = (*dlist)->begin;
        (*dlist)->begin->prev = new_elemnt;
        (*dlist)->begin = new_elemnt;
    }
    (*dlist)->len += 1;
}