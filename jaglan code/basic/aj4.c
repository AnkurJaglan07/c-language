#include <stdio.h>
int main(){
    int a,b,temp;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    printf("before swap ais %d and bis %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\n b=%d",a,b);
    return 0;
}