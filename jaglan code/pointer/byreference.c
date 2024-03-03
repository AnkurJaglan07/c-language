#include <stdio.h>
int sum(int *p1,int *p2){
    int s=*p1 +*p2;
    return s;
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int result = sum(&x,&y);
    printf("%d",result);
    return 0;
}


