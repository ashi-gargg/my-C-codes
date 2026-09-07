#include<stdio.h>
int main(){
    int arr[20], size, i;
    printf("Enter the size of the Array:");
    scanf("%d",&size);

    printf("Enter elements of Array:");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Entered elements of Array:");
    for(i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}