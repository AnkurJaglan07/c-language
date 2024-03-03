#include<stdio.h>
int main()
{
    float s=1;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        s=s+(1.0/(i*2));

    }
    printf("sum=%.2f",s);
    return 0;
}