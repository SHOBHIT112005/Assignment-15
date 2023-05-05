#include<stdio.h>
int a[5] = {0},i=0,j=0;
void asort(int a[],int n)
{
    int x=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                x = a[j];
                a[j] = a[i];
                a[i] = x;
            }
        }
    }
}
int main()
{
    printf("Enter 5 positive integers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sorted array is :-\n\n");
    asort(a,5);
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}