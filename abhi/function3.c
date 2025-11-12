#include <stdio.h>
int add(int a, int b)
{
 return a+b;

}
int main()

{
    int num1,num2;
    printf("enter");
    scanf("%d%d",&num1,&num2);
    //int addtiton = add(num1,num2);
    //printf("%d",addition);
    printf("addition of a and b is %d\n",add(num1,num2));
}