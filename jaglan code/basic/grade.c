#include <stdio.h>
int main(){
    int a;
    printf("enter percentage");
    scanf("%d",&a);
    if(a>=90)
        printf("a+");
    else if(80<=a && a<90)
        printf("a");
    else if(70<=a && a<80)
        printf("b+");
    else if(60<=a && a<70)
        printf("b");
    else if(50<=a && a<60)
        printf("c");
    else if(40<=a && a<50)
        printf("d");
    else
        printf("f");
    return 0;
}