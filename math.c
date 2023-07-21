int approximate(float x)
{
    int n;
    float fr;
    n=(int)x;
        fr=x-n;
        if(fr>=(float)0.5)
        return n+1;
        else
            return n;
}

int Is_even(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    return 0;

}

int Is_prime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int count_digits(int num)
{
    int count=0;
    if(num==0)
        return 0;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    return count;
}

int factorial(int x)
{
    int num=x;
    for(int i=1;i<x;i++)
    {
        num=num*i;
    }
    return num;
}

