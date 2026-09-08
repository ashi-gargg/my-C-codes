#include<stdio.h>
int main(){
    int arr[20],i,size,data;

    printf("Enter size of array:");
    scanf("%d", &size);
    if(size>20){
        printf("Overflow condition");
    }else {
        printf("Enter elements of array:");
        for(i=0; i<size; i++){
            scanf("%d", &arr[i]);
        }
    }
    printf("Entered Array:");
    for(i=0; i<size; i++){
    printf("%d\t", arr[i]);
    }
    printf("\nEnter element to be searched:");
    scanf("%d", &data);

    for(i=0; i<size; i++){
        if(arr[i]==data){
            printf("Element found at index: %d",i);
            break;
        }
    }
    if(size==i){
        printf("Element not found");
    }
    return 0;
}