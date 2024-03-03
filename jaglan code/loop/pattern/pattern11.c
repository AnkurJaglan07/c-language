// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=1;j<=(a-i);j++){
//         printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int r,i,j;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++){
            if(j<=r-i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}