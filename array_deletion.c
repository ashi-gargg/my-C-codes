#include<stdio.h>
int main(){
    int arr[50], size, position, i;
    printf("Enter size of an array:");
    scanf("%d", &size);
    if (size>50){
        printf("Overflow condition");
        return 0;
    }else{
        printf("Enter elements of array:");
        for(i=0; i<size; i++){
            scanf("%d", &arr[i]);
        }
    printf("Array before deletion:");
    for(i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    }
    printf("\nEnter position from which you want to delete an element:");
    scanf("%d", &position);
    if(position<1 || position>size){
        printf("Invalid Position");
    } else{
        for(i=position-1; i<size-1; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
    printf("Array after deletion:");
    for(i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }
}