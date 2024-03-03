#include <stdio.h>
int main(){
    int a;
    printf("enter any int");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive",a);
    }
    else if(a==0)
    {
        printf("number is 0");
    }
    else{
        printf("%d is negative",a);
    }
    return 0;
}