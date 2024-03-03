#include <stdio.h>
int main(){
    char s1[100],s2[100];
    scanf("%[^\n]s",s1);
    int i=0;
    while(s1[i]!='\0'){
        i++;
    }
    int last=i-1; 
    i=0;
    while(last>=0){
        s2[i]=s1[last];
        last--;
        i++;
    }
    s2[i]='\0';
    printf("%s",s2);
    return 0;
}