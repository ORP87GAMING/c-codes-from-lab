#include <stdio.h>
int main()
{
    int n,i;
    printf("enter any number  ",n);
    scanf("%d",&n);
    for (i=2;i<n;i++)
   {
    if(n%i==0)
    printf(" %d is a divicible by  no. %d\n",n,i);
    else 
    printf(" %d is not a divicible by no. %d\n",n,i);
   } 
  
}