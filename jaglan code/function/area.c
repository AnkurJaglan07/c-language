#include <stdio.h>
float area(float n1){//function defination
    float c;
    return c=n1/(2*3.14);
    // printf("%d",c);
}
int main(){
    float a,area1;
    scanf("%f",&a);
    float su= area(a);
    area1=su*su*3.14;
    printf("%.2f",area1);
    return 0;
}