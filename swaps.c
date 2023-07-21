void pointer_swap(int **p1,int ** p2)
{
    int* temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void char_swap(char* x,char* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void char_swap_p2p(char** x,char** y)
{
    char* temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void integer_swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
