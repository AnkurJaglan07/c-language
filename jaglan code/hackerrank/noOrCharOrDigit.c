//write your code here.
#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    int a =(int)c;
    
    if((a>=65&& a<=90) || (a>=97&& a<=122)){
        printf("Alphabet");
    }else{
        if(a>=48&& a<=57){
        printf("Digit");
        }else{
        printf("Special Character");
        }
    }
}