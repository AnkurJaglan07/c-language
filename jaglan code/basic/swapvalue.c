#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    printf("before swaping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a=%d\n",a);
    printf("value of b=%d",b);
    return 0;
}