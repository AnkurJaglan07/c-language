#include <stdio.h>
#include <math.h>
int main(){
    int a,c,b,d;
    float e;
    float f;
    scanf("%d%d%d",&a,&b,&c);
    e=pow(b,2);
    d=e-(4*a*c);
    f=sqrt(d);
    int g=(-b+f)/(2*a);
    int h=(-b-f)/(2*a);
    if(d<0)
    {
        printf("no real root");
    }
    else{
        printf("roots are %d,%d",g,h);
    }
    return 0;
}