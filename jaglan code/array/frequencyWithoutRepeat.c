#include<stdio.h>
int main(){
    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);
    int array[a];
    printf("Enter the elements of array: ");
    for(int i=0; i<a; i++){
        scanf("%d", &array[i]);
    }

    int flag[a];

    for(int i=0; i<a; i++){
        flag[i]=0;
    }

    for(int i=0; i<a; i++){
        if (flag[i]==1){
            continue;
        }

        int count=1;

        for(int j=i+1; j<a; j++){
            if(array[i]==array[j]){
                count++;
                flag[j]=1;
            }
        }
        printf("%d - %d\n", array[i], count);
    }
    return 0;
}