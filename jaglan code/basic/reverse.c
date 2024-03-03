#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int one,ten,th;
    one=a%10;
    a=a/10;
    ten=a%10;
    a=a/10;
    th=a%10;
    a=one*100+ten*10+th;
    printf("%d",a);
    return 0;
}