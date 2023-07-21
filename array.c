


void array_removePrime(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        if(Is_prime(arr[i]))
            arr[i]=0;
    }
}

void array_print(int arr[],int size)
{
    for(int i=0; i< size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void array_max_min(int arr[],int *max,int *min,int size)
{
    *max=arr[0];
    *min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>*max)
        {
           *max=arr[i];
        }
        else if(arr[i]<*min)
        {
            *min=arr[i];
        }
    }
}



void array_swap(int arr[],int s1,int arr2[],int s2)
{
    if(s2>s1)
    {
        for(int i=0; i<s1; i++)
        {
            integer_swap(&arr[i],&arr2[i]);
        }
    }
    else if(s1>s2)
    {
        for(int i=0; i<s2; i++)
        {
            integer_swap(&arr[i],&arr2[i]);
        }
    }
    else
    {
        for(int i=0; i<s1; i++)
        {
            integer_swap(&arr[i],&arr2[i]);
        }
    }
}

int array_scan(int* arr,int maxSize)
{
    int size,i;
    printf("enter size of array with max size %d elements",maxSize);
    scanf("%d",&size);
    for(i=0;i<size&&i<maxSize;i++)
    {
        scanf("%d",arr+i);
    }
    return i;
}


int* array_scanDynamic(int* size)
{
    int s;
    printf("enter the total number of the array");
    scanf("%d",&s);
    int *arr=(int*)malloc(s*sizeof(int));
    if(arr==0)
        return 0;
    for(int i=0;i<s;i++)
    {
        scanf("%d",arr+i);
    }
    *size=s;
    //array_print(arr,s);
    return arr;
}


int* array_merge(int*arr1,int size1,int* arr2,int size2)
{
    int i,maxflag;
    int totalsize=size1+size2;
    int*arr3=(int*)malloc(totalsize*sizeof(int));
    for(i=0;i<size1||i<size2;i++)
    {
        if(i<size1)
        {
            arr3[i]=arr1[i];
        }
        if(i<size2)
        {
            arr3[i+size1]=arr2[i];
        }
    }
    return arr3;
}
