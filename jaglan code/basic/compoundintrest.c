#include <stdio.h>
#include <math.h>
int main(){
    int p,r,n,t,c;
    printf("enter principal,rate in year,time,n");
    scanf("%d%d%d%d",&p,&r,&t,&n);
    float x=(1+(float)r/n);
    float d=pow(x,(n*t));
    c=d;
    int ci= c-p;
    printf("compound intrest is %d",c);
    return 0;
}