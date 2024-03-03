#include <stdio.h>
int main(){
    int p,r,t,s;
    printf("enter principal,rate in year,time");
    scanf("%d%d%d",&p,&r,&t);
    s=(p*r*t)/100;
    printf("simple intrest is %d",s);
    return 0;
}