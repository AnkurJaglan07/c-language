#include <stdio.h>
void disOdd(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
}
void checkPrime(int n){
    int flag = 0;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("%d is a prime number\n", n);
    }else{
        printf("%d is not a prime number\n", n);
    }
}
void largerInArray(int arr[]){
    int max = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The largest number in the array is: %d\n", max);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    disOdd(arr, 9);
    printf("\n**\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    checkPrime(n);
    printf("\n");
    int arr2[] = {1, 2, 3, 4, 5};
    largerInArray(arr2);

    return 0;
}