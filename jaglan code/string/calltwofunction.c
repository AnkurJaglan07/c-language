#include <stdio.h>
void phw1(){//function defination
    printf("hello world\n");
}
void phw2(){//function defination
    phw1();
    printf("hello India\n");
}
int main(){
    phw1();
    phw2();
    return 0;
}