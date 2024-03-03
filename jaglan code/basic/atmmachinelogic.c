#include <stdio.h>
int main(){
    int amount,b,c,d,bp,cp;
    printf("enter amount in multiple of 100:");
    scanf("%d",&amount);
    b=amount/2000;
    bp=amount%2000;
    c=(bp)/500;
    cp=bp%500;
    d=(cp)/100;
    printf("2000=%d\n500=%d\n100=%d",b,c,d);
    return 0;
}