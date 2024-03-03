#include <stdio.h>
int main(){
    int a,c,d;
    char b;
    scanf("%d%c%d",&a,&b,&c);
    switch(b)
    {
        case '+':d=a+c; printf("%d",d);
        break;
        case '-':d=a-c; printf("%d",d);
        break;        
        case '/':d=a/c; printf("%d",d);
        break;        
        case '*':d=a*c; printf("%d",d);
        break;       
        case '%':d=a%c; printf("%d",d);
        break;
        default : printf("invalid");
    }
    return 0;
}
