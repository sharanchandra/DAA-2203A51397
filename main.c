#include <stdio.h>


void bubbleSort(int arr[], int n) {
    int i, j;
    int temp;
    int swapped;


    for (i = 0; i < n - 1; i++) {
        swapped = 0;  
        for (j = 0; j < n - i - 1; j++) {
        
            if (arr[j] > arr[j +1];
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  
            }
        }


        if (swapped == 0) {
            break;
        }
    }
}


void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
