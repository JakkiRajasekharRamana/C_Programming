#include <stdio.h>

int main(){
    int size;
    printf("ENter size of array");
    scanf("%d",&size);
    int arr[size];
    printf("ENter numbers in a sorted array\n");
    for(int i=0;i<size;i++){
        printf("For %d index:",i);
        scanf("%d",&arr[i]);
    }
    int j=arr[0];
    for(int i=0;i<size;i++){
        if(j!=arr[i]){
            printf("%d\n",j);
            break;
        }
        j++;
    }
}

//write program to count occourances of a number in a sorted array with duplicates