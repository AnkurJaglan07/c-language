#include <stdio.h>
int main(){
    char s1[100],s2[100];
    scanf("%[^\n]s",s1);
    scanf(" %[^\n]s",s2);
    int i=0,f=0;
    while(s1[i]!='\0' || s2[i]!='\0'){
     if(s1[i]!=s2[i]){
     printf("not equal");
     f=1;
    break;
     }
    i++;
    }
    if(f==0){
        printf("equal");
    }
    return 0;
}