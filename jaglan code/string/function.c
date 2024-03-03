#include <stdio.h>
void phw(int n){//function defination
    int i;
    for(i=0;i<n;i++)// n=formal argument
    printf("hello world\n");
}
int main(){
    int num;
    scanf("%d",&num);
    phw(num);// function calling  num=real argument

    return 0;
} 