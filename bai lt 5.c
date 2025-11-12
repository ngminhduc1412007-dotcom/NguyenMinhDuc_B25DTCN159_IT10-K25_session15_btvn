#include<stdio.h>

int findElementAppearTheMost(int arr[], int n){
	int maxCount = 0;
	int element = arr[0];
	for (int i = 0; i < n; i++){
		int count = 1;
		for (int j = i + 1; j < n; j++){
			if(arr[j] == arr[i]){
				count++;
			}
		}
		if (count > maxCount ){
			maxCount = count;
			element = arr[i];
		}
	}
	return element;
}

int countTheMostOccurrences(int arr[], int n, int num){
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
	
	int element = findElementAppearTheMost(arr, n);
	int nTimes = countTheMostOccurrences(arr, n, element);
	
	printf ("phan tu xuat hien nhieu nhat la: %d \n", element);
	printf ("so lan xuat hien phan tu la: %d", nTimes);
	
	return 0;
}
