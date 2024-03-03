#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}