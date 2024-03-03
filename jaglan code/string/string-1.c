//string declaration
#include <stdio.h>
int main(){
    char st[100],st2[100],st3[100];
//taking a string as input from user
    scanf("%s",st);//single word input
    scanf(" %[^\n]s",st2);//single line input
    scanf(" %[^#]s",st)3;//multi line input
    printf("%s",st);
    printf("%s",st2);
    printf("%s",st3);
    return 0;
}