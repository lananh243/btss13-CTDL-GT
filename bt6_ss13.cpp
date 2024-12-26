#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}

void selectionSort(int arr[], int n){
	int iterations = 0;
	for(int i=0; i<n-1; i++){
		int min_index = i;
		for(int j=i+1; j <n; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		} 
		if(min_index != i){
			swap(&arr[min_index], &arr[i]);
			printf("Hoan doi : ");
            printArray(arr, n);
            iterations ++;	
		}
	} 
	printf("Sap xep hoan thanh sau %d lan hoan doi\n", iterations);
} 

int main() {
	int n;
	printf("Nhap so luong phan tu cua mang : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Mang ban dau : ");
	printArray(arr, n);
	
	selectionSort(arr, n);
	printf("Mang da sap xep : ");
	printArray(arr, n);
	return 0;
}

