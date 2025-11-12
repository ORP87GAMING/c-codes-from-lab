#include <stdio.h>
void fibo(int n)
{
    int i,t,t1=0,t2=1;
    for(int i=0;i<=n;i++)
    {
      printf("%d",t1);
        t = t1 + t2;
        t1 = t2;
        t2 = t;
        printf(" ");
    }
}
int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    fibo(n);
    return 0;
}