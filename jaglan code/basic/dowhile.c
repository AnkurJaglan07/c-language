#include <stdio.h>
int main(){
    int a=1;
    int b;
    scanf("%d",&b);
    do{
        printf("%d\n",a);
        a++;
    }
    while(a<=b);
    return 0;
}