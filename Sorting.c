void array_BubbleSort(int* arr,int size)
{
    int i,temp,j,sortingFlag,c=0;
    for(j=0; j<size; j++)
    {
        sortingFlag=1;
        for(i =0; i<size-j-1; i++)
        {
            c++;
            if(arr[i]>arr[i+1])
            {
                sortingFlag=0;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        if(sortingFlag==1)
            break;
    }
    printf("%d\n",c);
}

void array_SelectionSort(int* arr,int size)
{
    int max_index=0,i,j,last_index=size-1;
    for(j=0; j<size; j++)
    {
        max_index=0;
        for(i=0; i<=last_index; i++)
        {
            if(arr[i]>arr[max_index])
            {
                max_index=i;

            }
        }
        if(max_index!=last_index)
            integer_swap(&arr[max_index],&arr[last_index]);
        last_index--;
    }
}


void array_CountingSort(int*arr,int size)
{
    int count[10]={0},c=0;
    int i,j;
    for(i=0;i<size;i++)
    {
        c++;
        count[arr[i]]++;
    }
    j=0;
    for(int j=0;j<10;j++)
        printf("%d is repeated  %d times\n",j,count[j]);
    for(i=0;i<10;i++)
    {
        c++;
            while(count[i])
            {
                arr[j]=i;
                j++;
                count[i]--;
            }
    }
}
