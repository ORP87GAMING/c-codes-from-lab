#include <stdio.h>
int div(int a, int b)
{
 return a/b;

}
int main()
{
    int num1,num2;
    printf("enter");
    scanf("%d%d",&num1,&num2);
   
    printf("dividation of a and b is %d\n",div(num1,num2));
}