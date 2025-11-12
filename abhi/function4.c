#include <stdio.h>
int sub(int a, int b)
{
 return a-b;

}
int main()
{
    int num1,num2;
    printf("enter");
    scanf("%d%d",&num1,&num2);
   
    printf("subtraction of a and b is %d\n",sub(num1,num2));
}