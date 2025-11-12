#include <stdio.h>
int main()
{
    int num,org,rem,result=0;
    printf("Enter any No. :-");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem = num%10;
        result += rem * rem * rem;
        num =num / 10;
    }
    {
        if(org==result)
        printf("It is a armstrong No.");
        else
        printf("It is not a armstrong No.");
    }
}