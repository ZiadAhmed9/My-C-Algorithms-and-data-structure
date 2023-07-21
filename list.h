#define NULLPTR ((void*)0)

typedef enum{
OK,
EMPTY_LIST,
NOT_FOUND
}list_status;
typedef struct node{
int data;
struct node* next;
}node_t;

node_t* createNode(int data);
void list_addNodeToLast(node_t* head,int data);
list_status list_editData(node_t* head,int oldData,int newData);
void list_addNodeToFirst(node_t** head,int data);

list_status list_removeData(node_t** phead,int oldData);

