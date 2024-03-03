#include <stdio.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for(a;n>=a;a++)
    {
        if(a==10){
        continue;
        }
        printf("%d,",a);

    }
    return 0;
}