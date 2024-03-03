#include <stdio.h>
int main(){
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&c);
        a[i]=c;
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}