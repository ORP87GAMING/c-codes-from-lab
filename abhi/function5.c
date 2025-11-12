#include <stdio.h>
int mul(int a, int b)
{
 return a*b;

}
int main()
{
    int num1,num2;
    printf("enter");
    scanf("%d%d",&num1,&num2);
   
    printf("multiplication of a and b is %d\n",mul(num1,num2));
}


