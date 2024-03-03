#include <stdio.h>
int main(){
    int a;
    int one,ten,th;
    scanf("%d",&a);
    if(1000>a>99){
    one=a%10;
    a=a/10;
    ten=a%10;
    a=a/10;
    th=a%10;
    a=one+ten+th;
    printf("%d",a);
    }
    else
    {
        printf("invalid entry");
    }
    return 0;
}