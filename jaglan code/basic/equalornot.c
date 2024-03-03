#include <stdio.h>
int main(){
    int a,b;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("equal");
    }
    else
    {
        if(a>b)
        printf("%d",a);
        else
        printf("greater:%d",b);
    }
    return 0;
}