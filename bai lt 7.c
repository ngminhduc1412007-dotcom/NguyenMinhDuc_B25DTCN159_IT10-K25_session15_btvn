#include <stdio.h>

int binarySearch(int arr[], int n, int num) {
    int left = 0;
    int right = n-1; 
    while (left <= right) {
        int mid = (left+right)/2;  
        if (arr[mid] == num){           
            return mid;              
        }else if (arr[mid] < num){      
            left = mid + 1;           
        }else {                       
            right = mid - 1;           
        }
    }
    return -1; 
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, num;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("da duoc sap xep: ");
    printArr(arr, n);
    printf("nhap gia tri can tim: ");
    scanf("%d", &num);

    int result = binarySearch(arr, n, num);

    if (result == -1){
        printf("khong tim thay", num);
    }else{
		printf("da tim thay tai vi tri %d ", num, result);
	}
    return 0;
}

