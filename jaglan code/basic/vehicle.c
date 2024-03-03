#include <stdio.h>
int main(){
    int car,th,vehicle,tyres;
    vehicle=137;
    tyres=512;
    car= (tyres- 3*vehicle);
    th= vehicle-car;
    printf("%d %d",th,car);
    return 0;
}