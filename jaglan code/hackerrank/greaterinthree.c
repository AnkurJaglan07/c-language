#include <stdio.h>
int main(){
    int a,b,c, great;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b){
        if(a>=c){
            great=a;
        }
        else{
            great=c;
        }
    }else{
        great=b;
    }
    printf("%d",great);
}