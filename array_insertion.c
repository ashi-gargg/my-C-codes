#include <stdio.h>
int main() {
    int arr[50], size, i, num, position;
    printf("Enter size of the array:");
    scanf("%d", &size);

    if(size>50){
        printf("Overflow Condition");
        return 0;
    }else{
    printf("Enter elements of the array:");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    }
    printf("Array before Insertion:");
    for(i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the number you want to insert:");
    scanf("%d", &num);
    printf("Enter position at which you want to insert number:");
    scanf("%d", &position);

    if(position < 1 || position > size+1){
        printf("Invalid Position!");
        return 0;
    }

    for(i = size-1; i >= position-1; i--){
        arr[i+1] = arr[i];
    }
    arr[position-1] = num;
    size++;

    printf("Array after Insertion:");
    for(i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    
    return 0;
}