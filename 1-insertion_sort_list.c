#include "sort.h"
/**
 * insertion_sort_list - sort a dll
 * @list: header of dll 
 */
void insertion_sort_list(listint_t **list)
{

    listint_t *head = NULL;
    listint_t *move = NULL;
    listint_t *aux = NULL;

    if ((*list)->next)
    {
        head = (*list)->next;
        move = head->prev;
    }

    while(move)
    {
        if (head == NULL)
            move = move->next;
        else
            move = head->prev;

        while (move && move->prev && move->n < move->prev->n)
        {
            if (move->next)
                move->next->prev = move->prev;

            if (move->prev->prev)
                move->prev->prev->next = move;

            aux = move->next;

            move->next = move->prev;
            move->prev->next = aux;

            aux = move->prev->prev;
            move->prev->prev = move;
            move->prev = aux;

            if ((*list)->prev)
                *list = (*list)->prev;
            print_list(*list);
        }
        if (head)
            head = head->next;
    }

    
}