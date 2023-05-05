#include<stdio.h>//important
int a[5] ={0},i=0,j=0,n=0,d=0;
void shift(int a[],int k)
{
    int x[n];
    if(d==0)
    {
        for(i=0;i<n;i++)
        {
            x[i] = a[i];
        }
        for(i=n;i<k;i++)
        {
            a[i-n] = a[i];
        }
        for(i=0;i<n;i++)
        {
            a[k-n+i] = x[i];
        }
    }
    else if(d==1)
    {
        for(i=0;i<n;i++)
        {
            x[i] = a[k-n+i];
        }
        for(i=k-1;i>=n;i--)
        {
            a[i] = a[i-n];
        }
        for(i=0;i<n;i++)
        {
            a[i] = x[i];
        }
    }
    
    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    printf("Enter 5 positive integers:-\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the direction if shift :-\n0 - Left\n1 - Right\n\n");
    scanf("%d",&d);
    printf("Enter the units of shift:-\n");
    scanf("%d",&n);
    printf("The modified array is :-");
    shift(a,5);
    return 0;
}