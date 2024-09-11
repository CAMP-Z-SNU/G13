#include <stdio.h>

#define SIZE 10  

void findMaxMin(int arr[], int size, int *max, int *min) {
    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return;
    }
    
    *max = arr[0];
    *min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[SIZE] = {3, 5, 1, 9, 7, 6, 8, 4, 2, 0};  
    int max, min;
    
    findMaxMin(arr, SIZE, &max, &min);
    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    
    return 0;
}
