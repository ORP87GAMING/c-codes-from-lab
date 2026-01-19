#include <stdio.h> 
int main()
{ 
    int num,i;
    int count=0;
    printf("enter a num");
    scanf("%d",&num);
    for( i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        
        }
    }
        
    if(count==1)
    {
        printf("%d is  a prime no.",num);
    }
    else
    {
       printf("%d is not a prime no.",num);
    }
    
    
}
