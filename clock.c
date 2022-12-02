#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    a = 12 - a;
    a = a % 12;
    b = 60 - b;
    b = b % 60;
    printf("%2.2d:%2.2d",a,b);
return 0;
}
