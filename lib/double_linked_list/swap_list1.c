/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Arch]
** File description:
** swap_list1
*/

#include <linked_list.h>

void swap_center_2(node_t *node_1, node_t *node_2, int i)
{
    if (i == 0) {
        node_1->next = node_2->next;
        node_2->next->prev = node_1;
        node_2->prev = node_1->prev;
        node_1->prev->next = node_2;
        node_1->prev = node_2;
        node_2->next = node_1;
    } else {
        node_1->next = node_2->next;
        node_2->next->prev = node_1;
        node_1->prev->next = node_2;
        node_2->prev = node_1->prev;
        node_2->next = node_1;
        node_1->prev = node_2;
    }
}

void swap_center(dlist_t **list, node_t *node_1, node_t *node_2)
{
    if (node_1->prev == node_2 && node_2->next == node_1) {
        swap_center(list, node_2, node_1);
        return;
    }
    if (node_1->next == node_2 && node_2->prev == node_1) {
        if (node_2->next->next == NULL)
            swap_center_2(node_1, node_2, 1);
        else
            swap_center_2(node_1, node_2, 0);
        return;
    } else {
        node_t *tmp_1 = node_1->prev, *tmp_2 = node_1->next;
        node_2->next->prev = node_1;
        node_2->prev->next = node_1;
        node_1->next->prev = node_2;
        node_1->prev->next = node_2;
        node_1->next = node_2->next;
        node_1->prev = node_2->prev;
        node_2->prev = tmp_1;
        node_2->next = tmp_2;
    }
}