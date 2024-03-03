#include <stdio.h>
int factorial(int n){


    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}


int sum(int n){
    int total = 0;
        for(int i=1;i<=n;i++){
            int r= (factorial(i))/i;
            total = total +r;
        }
        printf("%d",total);

}

int main(){
    int n;
    scanf("%d",&n);
    sum(n);
    return 0;
}