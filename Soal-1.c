#include <stdio.h>

void findThreeLargest(int arr[], int n) {
    int a = arr[0];
    int b = arr[0];
    int c  = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > a) {
            c = b;
            b = a;
            a = arr[i];
        } else if (arr[i] > b) {
            c = b;
            b = arr[i];
        } else if (arr[i] > c) {
          c  = arr[i];
        }
    }

    printf("Tiga elemen terbesar dalam array adalah: %d, %d, %d\n", a, b, c);
}

int main() {
    int arr[] = {10, 4, 7, 20, 15, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    findThreeLargest(arr, n);

    return 0;
}