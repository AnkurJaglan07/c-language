#include <stdio.h>
int main(){
    int n,i,c,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&c);
        a[i]=c;
    }
    for(i=0;i<n;i++){
        // printf("%d",a[i]);
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}