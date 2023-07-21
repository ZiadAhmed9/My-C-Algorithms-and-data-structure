
void print_binary(int x)
{
    for(int i=sizeof(char)*8-1;i>=0;i--)
    {
        (x&(1<<i))?printf("1"):printf("0");
    }
}
