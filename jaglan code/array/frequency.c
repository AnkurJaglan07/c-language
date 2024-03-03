#include <stdio.h>
int main(){
    int n,i,c;
    int z=0;
    int number;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&c);
        a[i]=c;
    }
    for(int k=0;k<n;k++){
        z=0;
        for(i=0;i<n;i++){
            if(a[k]==a[i]){
                z++;`
            }
            if(z>1)
            break;

            
        }
        printf(" how many times %d is repeated = %d\n",a[k],z);
    }
}