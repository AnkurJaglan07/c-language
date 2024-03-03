#include <stdio.h>
int main(){
    int r,i,j;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=2*r;j++)
        {
            if(j<=i){
                printf("*");
            }
            else if(j>2*r-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
    return 0;
}