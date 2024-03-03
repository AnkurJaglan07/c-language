#include <stdio.h>
int main(){
    int n,b[32];
    scanf("%d",&n);
    int i=0,j;
    while(n!=0){
        b[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",b[j]);
    }
    return 0;
}