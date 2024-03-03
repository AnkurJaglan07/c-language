// #include <stdio.h>
// int main(){
//     int n,i,c,;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&c);
//         a[i]=c;
//     }
//     int max=a[0];
//     int min=a[0];
//     for(i=0;i<n;i++){
//         if(a[0]>a[i])
//         max=a[i];
//         // printf("%d",a[i]);
//         // s=s+a[i];
//     }
//     // printf("%d",s);
//     return 0;
// }


#include <stdio.h>
int main(){
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&c);
        a[i]=c;
    }
    int max=a[0];
    int min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
     for(i=0;i<n;i++){
        if(a[i]<min)
        min=a[i];
    }
    printf(" max %d",max);
    printf("min %d",min);
    return 0;
}