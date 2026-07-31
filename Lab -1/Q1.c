#include<stdio.h>

int largest(int nums[], int n){
    int max= nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]>max)
            max=nums[i];
    }
    return max;

}

int smallest(int nums[], int n){
    int min= nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]<min){
            min=nums[i];
    }
    }
    return min;

}

float average(int nums[], int n){
    int sum= 0;
    for(int i=0;i<n;i++){
        sum += nums[i];
    }
    float avg=(float)sum/n;
    return avg;

}

int main(){
    int n;

    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ARRAY:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int max=largest(arr, n);
    int min=smallest(arr, n);
    float avg=average(arr, n);
    printf("MAX no.: %d\n",max);
    printf("MIN no.: %d\n",min);
    printf("AVERAGE: %f\n",avg);

    return 0;
}
