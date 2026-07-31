#include<stdio.h>

int linear_search(int arr[], int n, int target){
    
    for (int i=0; i<n; i++){
        if(arr[i] == target){
            return i; 
        }
    }
    return -1;
}
int main(){
    int n, target;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target element to search\n");
    scanf("%d",&target);
    int result = linear_search(arr, n, target);
    if(result != -1){
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}