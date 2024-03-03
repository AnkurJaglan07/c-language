#include <stdio.h>
int main(){
    float celcious,fahernite;
    printf("enter celcious in degree");
    scanf("%f",&celcious);
    fahernite=((9*celcious)/5+32);
    printf("fahernite=%.4f",fahernite);
    return 0;
}