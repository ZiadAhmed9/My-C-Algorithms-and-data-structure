
#define STACK_SIZE 5


typedef enum{
STACK_EMPTY,
STACK_FULL,
STACK_OK}stack_status;

typedef struct{
int *dataArr;
int size;
int sp;
}stack_t;

typedef stack_t* STACK;
stack_t* stack_create(int s);
stack_status push(stack_t* pstack,int data);
stack_status pop(stack_t* pstack,int* pdata);
