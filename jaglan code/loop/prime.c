#include <stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d",&a);
    for(b=2;b<a;b++)
    {
        if(a%b==0){
            printf("%d,",b);
            c++;
        }
    }
    if(c==0){
        printf("prime");
    }
    else{
        printf("it is composite");
    }

    return 0;
}