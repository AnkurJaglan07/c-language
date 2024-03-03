#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 1 :printf("%d is big",a);
        break;
        case 0 :switch(a==b)
        {

                case 1 :printf("equal");
                break;
                case 0 :printf("%d is big",b);
        }

    }
    return 0;
}
