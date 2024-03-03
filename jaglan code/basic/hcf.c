#include <stdio.h>
int main(){
    // euler's  method
    int a, b, rem, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0){
        rem = b;
        b = a % b;
        a = rem;
    }
    hcf = a;
    printf("HCF = %d", hcf);    
    return 0;
}