#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int swapped;
    int iterations = 0;

    for (int i = 0; i < n - 1; i++) {
        swapped = 0; 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }
        iterations++; 
        if (swapped == 0) {
            break; 
        }
    }

    printf("Sap xep hoan thanh sau %d lan lap\n", iterations);
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Mang ban dau: ");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);
    
    return 0;
}
