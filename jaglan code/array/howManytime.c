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
    printf("no you want to found");
    scanf("%d",&number);
    for(i=0;i<n;i++){
        if(a[i]==number){
            z++;
        }
    }
    printf(" how many times no is repeated = %d",z);
    if(z==0){
        printf("not found");
    }
    return 0;
}