#include<stdio.h>
int main()
{
    int a,b,c,d,e,p,s;
    printf("enter marks in 5 subjects ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    p=(s*100)/500;
    printf("sum is %d \n percentage is %d",s,p);
    return 0;

}