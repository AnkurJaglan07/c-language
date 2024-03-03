#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    c=(a<b)*b + (b<a)*a;
    printf("greater=%d",c);
    return 0;
}