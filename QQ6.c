#include<stdio.h>
int a[5] = {0};
void reverse(int a[],int n)
{
    for(int i = n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    printf("Enter the 5 postive element of an array\n");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The reverse array is:- \n");
    reverse(a,5);
    return 0;
}
    
