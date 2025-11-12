#include<stdio.h>

int findElementAppearTheLest(int arr[], int n){
	int minCount = n + 1;
	int element = arr[0];
	for (int i = 0; i < n; i++){
		int count = 0;
		for (int j = i + 1; j < n; j++){
			if(arr[j] == arr[i]){
				count++;
			}
		}
		if (count < minCount ){
			minCount = count;
			element = arr[i];
		}
	}
	return element;
}

int countTheLestOccurrences(int arr[], int n, int num){
	int count = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] == num){
			count++;
		}
	}
	return count;
}

int main(){
	int n;
	printf ("nhap so phan tu cua mang: ");
	scanf ("%d", &n);
	int arr[n];
	for (int i = 0; i < n;i++){
	printf ("nhap so phan tu thu arr[%d]: ",i);
	scanf ("%d", &arr[i]);
	}
	
	int element = findElementAppearTheLest(arr, n);
	int nTimes = countTheLestOccurrences(arr, n, element);
	
	printf ("phan tu xuat hien it nhat la: %d \n", element);
	printf ("so lan xuat hien phan tu la: %d", nTimes);
	
	return 0;
}
