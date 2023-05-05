#include<stdio.h>
int a[5] = {0},i=0,mine = 0,j=0;
int min(int mine)
{
   mine = a[0];
   for(i=0;i<5;i++)
   {
      if(a[i]<mine)
      mine = a[i];
   }
   return mine;
}
int main()
{
    printf("Enter 5 positive integers\n");
    for(j=0;j<5;j++)
    {
       scanf("%d",&a[j]);
    }
    printf("The minimum element in the entered array is %d",min(mine));
    return 0;
}
