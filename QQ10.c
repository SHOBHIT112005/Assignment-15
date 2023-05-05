#include<stdio.h>
int main()
{
    int a[10] = {0},i,j,hash[100] = {0};
    printf("Enter 10 elements of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++)
       hash[a[j]]++;
    for(j=0;j<100;j++)
    {
        if(hash[j]!=0)
        printf("%d comes %d times in the array\n",j,hash[j]);
    }
    return 0;
}
