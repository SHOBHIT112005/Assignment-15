#include<stdio.h>
int a[5] = {0},i=0,maxe = 0,j=0;
int max(int maxe)
{
   maxe = a[0];
   for(i=0;i<5;i++)
   {
      if(a[i]>maxe)
      maxe = a[i];
   }
   return maxe;
}
int main()
{
    printf("Enter 5 positive integers\n");
    for(j=0;j<5;j++)
    {
       scanf("%d",&a[j]);
    }
    printf("The maximum element in the entered array is %d",max(maxe));
    return 0;
}
