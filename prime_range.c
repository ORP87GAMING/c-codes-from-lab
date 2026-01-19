#include <stdio.h> 
int main()
{ 
    int range;
    int num=2,i,j;
    int count=0;
    printf("enter a range : ");
    scanf("%d",&range);
    for( i=2;i<=range;i++)
    {
        for( j=2;j<=i;j++)
        {
         if(i%j==0)
         {
            count++;
        
         }
        }
        if(count==1)
      {
        printf("%d is  a prime no.\n",i);
      }
         else
      {
       printf("%d is not a prime no.\n",i);
      }
    
    }
}
