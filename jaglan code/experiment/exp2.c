#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("no is positive");
    }
    else if(a==0){
        printf("no is equal to zero");
    }
    else if(a<0){
        printf("no is negative");
    }
    return 0;
}