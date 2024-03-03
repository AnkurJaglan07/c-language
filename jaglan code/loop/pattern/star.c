#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a;i>=0;i--)
    {
        printf(" ");
        for(int j=i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}