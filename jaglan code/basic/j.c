#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the no whose multiplication is required");
    scanf("%d%d",&a,&b);
    printf("multiplication of %d and %d is:",a,b);
    c=a*b;
    if(a==16&&b==2)
    {
        printf("16*2=8\n JAAT");
    }
    else if(a==2&&b==16)
    {
        printf("Its not 2*16\nits 16*2=8\n JAAT");
    }
    else{
        printf("%d",c);
    }
    return 0;
}