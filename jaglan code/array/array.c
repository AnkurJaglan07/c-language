#include <stdio.h>
int main(){
    int a[]={2,5,43,6,4};
    int b=15,i;
    for(i=0;i<5;i++){
        if(a[i]==b){
        printf("found at %d",i);
        return 0;
        }

    }
    printf("not found");  
    return 0;
}