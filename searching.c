





int array_linearSearch(int arr[], int size, int n)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
        {
            return i;
        }
    }
    return -1;
}

int array_lastOccurance(int arr[], int size, int n)
{
    for(int i=size-1;i>=0;i--)
    {
        if(arr[i]==n)
        {
            return i;
        }
    }
    return -1;
}

int array_mostRepeated_mono(int *arr,int size,int* pnum)
{
    int counter[10]={0};
    int max=0,i;
    for(i=0;i<size;i++)
    {
        counter[arr[i]]++;
    }
    for(i=0;i<10;i++)
    {
        if(counter[i]>max)
        {
            max=counter[i];
            *pnum=i;
        }
    }
    return max;
}


int array_binarySearch(int* arr,int size,int num)
{
    int f,l,m;
    f=0;
    l=size-1;
    while(f<=l)
    {
        m=(l+f)/2;
        if(arr[m]==num)
        {
            return m;
        }
        else if(num>arr[m])
        {
            f=m+1;
        }
        else
        {
            l=m-1;
        }
    }
    return -1;
}
