#include <stdio.h>

int removeElement(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; 
            } else {
                j++; 
            }
        }
    }
    return size;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    size = removeElement(arr, size);
    printf("mang sau khi bo phan tu trung lap: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("kich thuoc cua mang %d", size);
    return 0;
}

