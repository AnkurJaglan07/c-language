#include <stdio.h>
int main(){
    int a,b;
    printf("enter two no");
    if((a<0)&&(b<0)){
        printf("third");
    }
    else if((a<0)&&(b>0)){
        printf("second");
    }
    else if((a>0)&&(b>0)){
        printf("first");
    }
    else((a>0)&&(b<0)){
        printf("third");
    }
    return 0;
}