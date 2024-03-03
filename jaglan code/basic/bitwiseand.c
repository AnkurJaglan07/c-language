#include <stdio.h>
int main(){
    int g,f,d,c,a=20;
    int b=50;
    c=a&b;
    d=a|b;
    f=a^b;
    g=~a;
    printf("%d\n%d\n%d\n%d",c,d,f,g);
    return 0;
}