#include <stdio.h>
int main()
{
    float n,i,t,t1=0,t2=1;
    printf("enter no. of terms ");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        printf("%.1f  ",t1);
        t = t1 + t2;
        t1 = t2;
        t2 = t;
    }
}