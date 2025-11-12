#include <stdio.h>
int main()
    {
        int i,p,r,count=0;
        printf("enter your range   ");
        scanf("%d",&r);
        for (i=1;i<=r;i++)
        {
            int c=0;
            for (p=2;p<=r;p++)
           {
                if (i%p==0)
                 c++;
           }     
              if (c==1)
            {
               printf("%d  ",i);
               count++;
            }
        }   
            printf("\nTOTAL PRIME NUMBER BTW 1 TO %d IS %d : ",r,count);

    }

