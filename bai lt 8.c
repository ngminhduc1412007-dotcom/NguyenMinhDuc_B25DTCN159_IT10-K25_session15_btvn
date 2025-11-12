#include <stdio.h>

int removeElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; 
            }else {
                j++; 
            }
        }
    }
    return n;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    n = removeElement(arr, n);
    printf("mang sau khi bo phan tu trung lap: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("kich thuoc cua mang %d", n);
    return 0;
}

