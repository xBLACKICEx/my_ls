/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** linked_list
*/

#ifndef linked_list_H_
#define linked_list_H_

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>

typedef struct node_s node_t;
struct node_s
{
    char *file_name;
    int time_date;
    bool dt_dir;
    node_t  *prev;
    node_t  *next;
};

typedef struct dlist_s dlist_t;
struct dlist_s
{
    int total;
    node_t *begin;
    node_t *end;
    unsigned int len;
};

void rr(dlist_t **list, node_t *node_1, node_t *node_2);
void sa(dlist_t **list, node_t *node_1, node_t *node_2);
void sb(dlist_t **list, node_t *node_1, node_t *node_2);
void swap_nodes(dlist_t **list, node_t *node_1, node_t *node_2);
void swap_center(dlist_t **list, node_t *node_1, node_t *node_2);

int dlist_length(dlist_t *cout_tota_list);
void print_dlist(dlist_t *list);
bool is_empty_dlist(dlist_t * ccheak_list_is_null);
void push_back(dlist_t **dlist, char *file_name);
void push_front(dlist_t **dlist, char *file_name);
void clear_dlist(dlist_t **dlist);
void pop_front(dlist_t **dlist);
void pop_back(dlist_t **dlist);

#endif
