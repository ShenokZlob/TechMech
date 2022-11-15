struct node_t
{
    node_t *next;
    int data;
};

//typedef struct node_t node_t;

void foo(node_t* curr, bool mark)
{
    if (curr == NULL)
        return;
    foo(curr->next, !mark);
    if (mark)
        printf("%d", curr->data);
}

int main()
{
    node_t *head;
    /* Создание списка из 6 элементов с полями data равными соответственно 1 2 3 4 5 6 */
    foo(head, false);
    return 0;
}

//642