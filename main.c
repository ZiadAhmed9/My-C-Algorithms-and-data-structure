#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "array.h"
#include "binary.h"
#include "searching.h"
#include "string.h"
#include "swaps.h"
#include "sorting.h"
#include "student.h"
#include "stack.h"
#include "list.h"
#define MAX_SIZE 10
#define MY_SIZE(x)      (char*)(&x+1)-(char*)&x
#define WRITE_BIT(x,bit,value)  (x=x&`(1<<bit)|(value<<bit))
#define MAX_U8   255
#define MIN_U8   0
#define MAX_S8   127
#define MIN_S8   -128
#define MAX(X,Y)    (((X)>(Y)?(X):(Y)))

#define LIMIT(x,min,max) (((x)<(min)?(min):(((x)>(max))?(max):(x))))
#define LIMIT_U8(x)     if (x<0) {x=0;}\
                        else if(x>255) {x=255;}
int string_Compare(char*s1,char*s2)
{
    int i;
    if(string_len(s1)==string_len(s2))
    {
        for(i=0; s1[i]&&s2[i]; i++)
        {
            if(s2[i]!=s1[i])
                return 0;
        }
        return 1;
    }
    return 0;
}
int arrayOfPointer_search(char** arr,int size,char*s)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(string_Compare(arr[i],s)==1)
        {
            return i;
        }
    }
    return -1;
}
void arrayOfPointers_Print(char**arr,int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        j=0;
        while(*(*(arr+i)+j)!=0)
        {
            printf("%c",*(*(arr+i)+j));
            j++;
        }
        printf("\n");
    }
}

//this function sorts array of pointers, future idea we can solve starting with space problem and capital problem
void arrayOfPointers_BubbleSort(char** s,int size)
{
    int i,temp,j,sortingFlag,c=0;
    for(j=0; j<size; j++)
    {
        sortingFlag=1;
        for(i =0; i<size-j-1; i++)
        {
            if(s[i][0]>s[i+1][0])
            {
                sortingFlag=0;
                char_swap_p2p(&s[i],&s[i+1]);
            }
        }
        if(sortingFlag==1)
            break;
    }
}
void array2D_print(int(*p)[5],int row,int column)
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {

            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}

void page_print(char page [][50],int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        for(j=0; page[i][j]; j++)
        {
            printf("%c",page[i][j]);
        }
        printf("\n");
    }
    printf("==========\n");
}

void book_print(char book[][10][50],int page_n,int line_n) //pointer to array of 10 pointers pointing at array of 50 elements
{
    int i;
    for(i=0; i<page_n; i++)
    {
        page_print(book[i],line_n);
    }

}

void array2D_print2(int(*p)[100],int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        for(j=0; j<5; j++)
        {

            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}

void star_set(char arr[][10],int row,int column)
{
    int i,j;
    for(i=0 ; i<row ; i++)
    {
        for(j=0; j<column; j++)
        {
            arr[i][j]=5;
        }

    }
}

void star_print(char arr[][10],int row,int column)
{
    int i,j;
    for(i=0 ; i<row ; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}

void selection_sort(int* arr,int size)
{
    int i,j,max_index,last_index;
    last_index=size-1;
    for(i=0; i<size; i++)
    {
        max_index=0;
        for(j=0; j<=last_index; j++)
        {
            if(arr[max_index]<arr[j])
            {
                max_index=j;
            }

        }
        if(max_index!=last_index)
        {
            integer_swap(&arr[max_index],&arr[last_index]);
        }
        last_index--;
    }
}




int main()
{

    printf("yo there");

    return 0;
}


