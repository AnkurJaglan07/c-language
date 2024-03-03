#include <stdio.h>
int main(){
    // 13.Write a program to print different pattern with input from the user, input n e.g 5.
    /*
        pattern 1
        *
        **
        ***
        ****
        *****

        pattern 2

             *
            **
           ***
          ****
         ***** 

        pattern 3

             *
            ***	
           *****
          *******
         *********  
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("pattern 1\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\npattern 2\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\npattern 3\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}