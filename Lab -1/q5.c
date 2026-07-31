#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int arr[MAX_SIZE];
    int size, sum = 0;

    printf("Enter array size (max %d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", arr + i) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int *ptr = arr;
    int *end = arr + size;
    while (ptr < end) {
        sum += *ptr;
        ptr++;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
