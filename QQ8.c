#include<stdio.h>
int a[10] = {0},i=0,j=0,count = 0;
int unique()
{
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j] == a[i])
            {count++;
            break;}
        }
    }
    return (10 - 2*count);
}
int main()
{
    printf("Enter 10 positive elements of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The number of unique elements of array is %d",unique());
    return 0;
}