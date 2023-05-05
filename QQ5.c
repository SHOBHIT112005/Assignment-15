#include<stdio.h>
int a[5] = {0},i=0,j=0,dup = 0;
int duplicate(int a[],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                dup = a[i];
                break;
            }
        }
        break;
    }
    return dup;
}
int main()
{
    printf("Enter 5 positive elements of an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The first duplicate element of the array is %d",duplicate(a,5));
    return 0;
}