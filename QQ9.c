#include<stdio.h>
int a[5] = {0},b[5] = {0},c[10] = {0},i=0,j=0;
void amerge(int a[],int n,int b[],int m)
{
    for (i = 0; i < n; i++) {
    c[i] = a[i];
    }
   for (i = n; i < n+m; i++) {
    c[i] = b[i-n];
    }
   for (i = 0; i < n+m; i++) {
    printf("%d ", c[i]);
    }
}
int main()
{
    printf("Enter 5 positive elements of an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter 5 positive elements of an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    int x=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]>a[i])
            {
                x = a[j];
                a[j] = a[i];
                a[i] = x;
            }
        }
    }
    int y=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(b[j]>b[i])
            {
                y = b[j];
                b[j] = b[i];
                b[i] = y;
            }
        }
    }
    amerge(a,5,b,5);
    return 0;
}