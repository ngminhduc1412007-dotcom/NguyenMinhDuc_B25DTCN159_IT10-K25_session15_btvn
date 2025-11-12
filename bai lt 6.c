#include<stdio.h>

int bubbleSoft(int arr[], int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++ ){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int printArr(int arr[], int n){
	for (int i = 0; i < n; i++){
	printf ("%d", arr[i]);
	}
	printf ("\n");
}

int main(){
	int n;
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d", &n);
	int arr[n];
	for (int i = 0; i< n; i++){
		printf("nhap phan tu thu arr[%d]: ", i);
		scanf ("%d", &arr[i]);
	}
	int arrange = bubbleSoft(arr, n);
	int print = printArr(arr, n);
	printf ("sap xep cac phan tu theo thu tu tang dan: ", print);
	
	return 0;
}
