#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *node =  *list;

    while (node->next != NULL) 
        node = node->next;
    node->next = mx_create_node(data);
}
