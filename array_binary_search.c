#include<stdio.h>
int main(){
    int arr[20], i, size, data, mid, left, right;

    printf("Enter size of array:");
    scanf("%d", &size);
    if(size>20){
        printf("Overflow Condition");
        return 0;
    }else{
        printf("Enter elements of array in SORTED order:");
        for(i=0; i<size; i++){
            scanf("%d",&arr[i]);
        }
    }

    printf("Entered element of array:");
    for(i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }

    printf("\nEnter data to be searched:");
    scanf("%d", &data);

    left = 0, right = size-1;
    while(left<=right){
        mid = (left+right)/2;
        if(data == arr[mid]){
            printf("Element found at index: %d", mid);
            return 0;
        }else if(data< arr[mid]){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
    printf("Element not found");
    return 0;

    
}
