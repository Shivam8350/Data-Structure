#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}
void Dissplay(PNODE Head)
{
    while(Head)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

bool CheckLoop(PNODE Head)
{
    PNODE temp = Head;
    while((temp != NULL) && (Head != NULL) && (temp->next != NULL))
    {
        temp = temp->next->next;
        Head = Head->next;
        if(Head == temp)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    bool bret;
    PNODE First = NULL;
    PNODE third = NULL, Last = NULL;
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Dissplay(First);
    
    third = First->next->next;
    Last = third->next->next;
    
    //Last->next = third;
    
    bret = CheckLoop(First);
    if(bret == true)
        printf("There is loop\n");
    else
        printf("There is no loop\n");
    
    return 0;
}
