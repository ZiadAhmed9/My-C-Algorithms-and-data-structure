#include "stack.h"




stack_status push(stack_t* pstack,int data)
{
    stack_status status;
    if(pstack->sp==pstack->size)
    {
        status= STACK_FULL;
    }
    else{
    pstack->dataArr[pstack->sp]=data;
    pstack->sp++;
    status= STACK_OK;
    }
    return status;
}

stack_status pop(stack_t* pstack,int* pdata)
{
    stack_status status;
    if(pstack->sp==0)
    {
        status= STACK_EMPTY;
    }
    else{
    pstack->sp;
    *pdata=pstack->dataArr[pstack->sp];
    status=STACK_OK;
    }
}

stack_t* stack_create(int size)
{
    stack_t* pstack;
    pstack=malloc(sizeof(stack_t));
    pstack->dataArr=(int*)malloc(size*sizeof(int));
    pstack->size=size;
    pstack->sp=0;
    return pstack;
}
stack_t* stack_create2(stack_t**ps,int size)
{
    stack_t* pstack;
    pstack=malloc(sizeof(stack_t));
    pstack->dataArr=(int*)malloc(size*sizeof(int));
    pstack->size=size;
    pstack->sp=0;
    *ps=pstack;
}

void stack_delete(stack_t** pstack)
{
    free((*pstack)->dataArr);
    free(*pstack);
    *pstack= 0;
}
