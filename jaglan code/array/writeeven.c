#include <stdio.h>
int main(){
    int n,i,c,y,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&c);
        a[i]=c;
    }
    int even[n],k=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even[k]=a[i];
            k++;
            // printf("%d",a[i]);
        }
        
        }
        for(i=0;i<k;i++){
        printf("%d ",even[i]);
        }
    
        
     
      //  printf("even count %d",x);
        //printf("odd count %d\n",y=n-x);

    return 0;
}