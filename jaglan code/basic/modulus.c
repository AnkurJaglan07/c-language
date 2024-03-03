#include <stdio.h>
int main(){
    int a=2,b=3,c;
    c=++b+a*b*a++;
    printf("%d",c);
    return 0;
}