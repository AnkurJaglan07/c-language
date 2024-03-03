// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int sm,max;
//     sm=INT_MIN;
//     max=INT_MAX;
//     printf("%d\n",sm);
//     printf("%d",max);
//     return 0;
// }

#include <stdio.h>
#include<limits.h>
int main(){
    int n,i,max,smax;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=INT_MIN;
    smax=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>=max){
            smax=max;
            max=a[i];
        }
        if(smax<a[i] && a[i]<max){
            smax=max;
        }

    }
    printf("Largest=%d and smallest =%d",max,min);
    return 0;

    
}