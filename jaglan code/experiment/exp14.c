//14.Consider the series below x+x2/4+x3/9+x4/16 
//Input the value of x and no of terms from users and calculate the sum of series upto terms specified e.g X=3 & 
//terms=2 the series would be 
//3+9/4. 
#include <stdio.h>
#include <math.h>
int main(){
    int i,x,c,d,series;
    scanf("%d",&x);
    for(i=1;i<x;i++){
        c=pow(x,i);
        d=pow(i,2);
        series=c/d+series;
    }
    printf("%d",series);
    return 0;
}