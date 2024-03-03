#include <stdio.h>
#include<string.h>
int main(){
    char st[100],st2[100],st1[100];
    gets(st);//taking single line string 
    // gets(st2); 
    puts(st);//printing string
    // puts(st2);
    int len=strlen(st);//print length
    printf("%d",len);

    strcpy(st2,st)//it copy one string from other
    puts(st2)
    strrev(st);// it reverse the string 
    puts(st);
    strcat(st2,st);//it join the string at store in first
    gets(st1);
    gets(st2);
    if(strcmp(st1,st2)==0){   //strcmp compair two strings and give 0,1,-1, 0=identical(equal askii value) 1=first askii big  -1=second askii big
        printf("identical");
    }
    else if(strcmp(st1,st2)==1){
        printf("st1>st2");
    }
    else(strcmp(st1,st2)==-1){
        printf("st1<st2");
    }
    return 0;
}