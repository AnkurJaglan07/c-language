#include <stdio.h>
int function()
{
    int a=0,b=1,c=1,n;
    scanf("%d", &n);
    for( int i=1;i<=n;i++)
    {
        
        c=a+b;
        printf("%d\n", c);
        a=b;
        b=c;
    }
    return 0;
}
int main(){
    int a ;
    a= function();
}