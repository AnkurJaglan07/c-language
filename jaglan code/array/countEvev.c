#include <stdio.h>
int main(){
    int n,i,c,y,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&c);
        a[i]=c;
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            x++;
            continue;
        }
        else
        printf("%d",a[i]);
        
    }
        printf("even count %d",x);
        printf("odd count %d\n",y=n-x);

    return 0;
}