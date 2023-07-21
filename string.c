#include <stdio.h>
#include <stdlib.h>
int string_len(char* str)
{
    int i;
    for(i=0;str[i];i++);
        return i;
}


void string_cap2small(char str[])
{
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
}

void  string_print(char str[])
{
    for(int i=0;str[i];i++)
        printf("%c",str[i]);
    printf("\n");
}

void string_reverse(char str[])
{
    int size=string_len(str);
    for(int i=0;i<=size/2;i++)
    {
        char_swap(&str[i],&str[size-i-1]);
    }
}

void string_scan(char*str)
{
    int i=0;
    fflush(stdin);
    scanf("%c",str+i);
    for(;str[i]!='\n';)
    {
        i++;
        scanf("%c",str+i);
    }
    str[i]=0;
}


void intToString(int n, char*str)
{
    int flag=0;
    int i=0,rem;
    if(n==0)
    {

        str[0]='0';
        str[1]=0;
        return;
    }
    if(n<0)
    {
        n=n*(-1);
        flag=1;
    }
    while(n)    //scan through the number we got by digit
    {
        rem=n%10;
        rem=rem+'0'; //convert the digit to ascii from int
        str[i]=rem;
        i++;
        n=n/10;
    }
    if(flag==1)
    {
        str[i]='-';
        i++;
    }
    str[i]=0;
    string_reverse(str);
}
void string_search(char* str,char* word)
{
    int i,c=0;
    int size=string_len(word);
    for(i=0;str[i];i++)
    {
        if(str[i]==word[c])
        {
            c++;
        }
        else
            c=0;
        if(c==size)
        {
           printf("found");
            return;
        }

    }
    printf("not found");
}
int stringToInt(char* str,int* pnum)
{
    int i,n=0,flag=0;
    if(str[0]=='-')
    {
        flag=1;
    }
    for(i=0;i<str[i];i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            n=n*10+(str[i]-'0');
        else if (flag==1)
            continue;
        else
            return 0;
    }
    if(flag==1)
        n=n*(-1);
    *pnum=n;
    return 1;
}
int str_com(char*str1,char* str2)
{
    int i,size1,size2;
    size1=string_len(str1);
    size2=string_len(str2);
    if(size1!=size2)
        return 0;
    for(i=0;str1[i];i++)
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
    }
    return 1;
}
