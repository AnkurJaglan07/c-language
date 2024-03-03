#include <stdio.h>
int input(){//function defination
    int c;
    printf("enter any no");
    scanf("%d",&c);
    return c;
}
int main(){
    int a,b;
    a=input();
    b=input();
    printf("%d",a+b);
    return 0;
}