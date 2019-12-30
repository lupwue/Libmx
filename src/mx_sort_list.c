#include "libmx.h"

static void mx_swap_list(t_list *head, t_list *node) {
    t_list *temp;
     
    temp = head->data;
    head->data = node->data;
    node->data = temp;
}

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    for(t_list *head = lst; head != NULL; head = head->next) {
        for(t_list *node = head->next;  node != NULL; node = node->data) {
            if (cmp(head->data, node->data) == 1)
                mx_swap_list(head, node);
        }
    }
    return lst;
}
