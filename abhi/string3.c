#include <stdio.h>
#include <string.h>
int main()
{
    char a[]="hello";
    char b[]="world";
    strcpy(a,b);
    printf("%s",a);
}