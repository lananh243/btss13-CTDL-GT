#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int min_index = i;
		for(int j=i+1; j <n; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		} 
		swap(&arr[min_index], &arr[i]);
	} 
} 

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}

//tim kiem nhi phan
int binarySearch(int arr[], int n, int target){
	int low = 0;
	int high = n-1;
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == target){
			return mid;
		}else if(arr[mid] > target){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return -1;
} 
int main() {
	int n, target;
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
	printf("Mang sau khi sap xep : ");
	printArray(arr, n);
	
	printf("Nhap phan tu muon tim kiem : ");
	scanf("%d", &target);
	
	int result = binarySearch(arr, n, target);
	
	if(result != -1){
		printf("Phan tu %d dc tim thay tai vi tri %d \n", target, result);
	}else{
		printf("Ko tim thay phan tu %d\n", target);
	}
	return 0;
}

