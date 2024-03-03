#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%3==0||a%7==0)
    {
        if(a%3==0&&a%7==0)
        printf("divisible by both");
        else
        {
            if(a%3==0)
            printf("a is divisible by 3");
            else
            printf("a is divisible by 7");
        }
    }
     else
        {
            printf("none");
        }

    return 0;
}