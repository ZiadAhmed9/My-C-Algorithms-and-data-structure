
#include "list.h"

node_t* createNode(int data)
{
    node_t* newNode=(node_t*)malloc(sizeof(node_t));
    newNode->data=data;
    newNode->next=NULLPTR;
    return newNode;
}

void list_print(node_t* head)
{
    node_t* current=head;
    while(current!=NULLPTR)
    {
    printf("%d ",current->data);
    current=current->next;
    }
    printf("\n");
}

void list_addNodeToLast(node_t* head,int data)
{
    if(head==0)
    {
        return;
    }
    node_t* newNode=createNode(data);
    node_t* current=head;
    while(current->next!=NULLPTR)
    {
        current=current->next;
    }
    current->next=newNode;
}

list_status list_editData(node_t* head,int oldData,int newData)
{
    if(head==NULLPTR)
    {
        return EMPTY_LIST;
    }
    node_t* current=head;
    while(current!=NULLPTR)
    {
        if(current->data==oldData)
        {
            current->data=newData;
            return OK;
        }
        current=current->next;
    }
    return NOT_FOUND;
}

void list_addNodeToFirst(node_t** phead,int data)
{
    node_t* newNode=createNode(data);
    newNode->next=*phead;
    *phead=newNode;
}

list_status list_removeData(node_t** phead,int oldData)
{
    node_t* temp;
    node_t* current=*phead;
    if(*phead==0)
    {
        return EMPTY_LIST;
    }
    else if((*phead)->data==oldData)
    {

    }
    else
    {
        while(current->next!=NULLPTR)
        {
            if(current->next->data==oldData)
            {
                temp=current->next;
                current->next=current->next->next;
                free(temp);
                return OK;
            }
        }
    }
    return NOT_FOUND;

}
