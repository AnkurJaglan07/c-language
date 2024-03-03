#include <stdio.h>
int main(){
    int x,y;
    int *p1=&x;
    int *p2=&y;
    printf("enter no");
    scanf("%d%d",&x,&y);
    int c=*p1+*p2;
    printf("%d",c);
    return 0;
}