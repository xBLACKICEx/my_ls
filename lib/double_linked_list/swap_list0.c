/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Arch]
** File description:
** swap_list
*/

#include <linked_list.h>

void swap_be(dlist_t **list, node_t *node_1, node_t *node_2)
{
    if ((*list)->len == 1 || node_1->prev || node_2->next) return;

    if ((*list)->len > 2) {
        node_1->next->prev = node_2;
        node_2->prev->next = node_1;
        node_1->prev = node_2->prev;
        node_2->next = node_1->next;
        node_1->next = NULL;
        node_2->prev = NULL;
    } else {
        node_1->next = NULL;
        node_1->prev = node_2;
        node_2->prev = NULL;
        node_2->next = node_1;
    }
    (*list)->begin = node_2;
    (*list)->end = node_1;
}

void swap_begin(dlist_t **list, node_t *node_1, node_t *node_2)
{
    if ((*list)->len == 1 || node_1->prev) return;
    if (node_2->next == NULL) {
        swap_be(list, node_1, node_2);
        return;
    }
    if (node_2->prev == node_1) {
        node_2->prev = NULL;
        node_1->next = node_2->next;
        node_1->prev = node_2;
        node_2->next->prev = node_1;
        node_2->next = node_1;
    } else {
        node_t *tmp = node_1->next;
        node_2->next->prev = node_1;
        node_2->prev->next = node_1;
        node_1->next->prev = node_2;
        node_1->next = node_2->next;
        node_1->prev = node_2->prev;
        node_2->next = tmp;
        node_2->prev = NULL;
    }
    (*list)->begin = node_2;
}

void swap_end(dlist_t **list, node_t *node_1, node_t *node_2)
{
    if ((*list)->len == 1 || node_1->next) return;
    if (node_2->prev == NULL) {
        swap_be(list, node_2, node_1);
        return;
    }
    if (node_2->next == node_1) {
        node_2->next = NULL;
        node_1->prev = node_2->prev;
        node_1->next = node_2;
        node_2->prev->next = node_1;
        node_2->prev = node_1;
    } else {
        node_t *tmp = node_1->prev;
        node_2->prev->next = node_1;
        node_2->next->prev = node_1;
        node_1->prev->next = node_2;
        node_1->next = node_2->next;
        node_1->prev = node_2->prev;
        node_2->prev = tmp;
        node_2->next = NULL;
    }
    (*list)->end = node_2;
}

void swap_nodes(dlist_t **list, node_t *node_1, node_t *node_2)
{
    if (node_1 == node_2) return;
    if ((*list)->len >= 4 && node_1->prev &&
        node_1->next && node_2->prev && node_2->next) {
        swap_center(list, node_1, node_2);
        return;
    }
    if ((*list)->len >= 2 && (node_1->prev == NULL)) {
        swap_begin(list, node_1, node_2);
        return;
    }
    else if ((*list)->len >= 2 && node_1->next == NULL)  {
        swap_end(list, node_1, node_2);
        return;
    }
    if (node_1->prev && node_1->next && node_2->prev == NULL)
        swap_begin(list, node_2, node_1);
    if (node_1->next && node_1->prev && node_2->next == NULL)
        swap_end(list, node_2, node_1);
}