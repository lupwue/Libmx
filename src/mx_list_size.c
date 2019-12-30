#include "libmx.h"

int mx_list_size(t_list *list)
{
    t_list *temp = list;
    int i = 0;

    if (!list)
        return 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return i;
}
