#include <stdio.h>
int prime(int n){
    int b,c=0;
    if(n<2){
        return 0;
    }

    for(b=2;b<n;b++)
    {
        if(n%b==0){
            printf("%d,",b);
            c++;
        }
    }
    if(c==0){
        return 1;
    }
    else{
        return 0;
    }
}
    int main(){
        int check;
            scanf("%d",&check);
        int no = prime(check);
        printf("%d",no);
        
    }