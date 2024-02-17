#include <stdio.h>

void findCommonElements(int arrA[], int arrB[], int arrC[], int sizeA, int sizeB, int sizeC) {
    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB && k < sizeC) {
        if (arrA[i] == arrB[j] && arrB[j] == arrC[k]) {
            printf("%d ", arrA[i]);
            i++;
            j++;
            k++;
        } else if (arrA[i] < arrB[j]) {
            i++;
        } else if (arrB[j] < arrC[k]) {
            j++;
        } else {
            k++;
        }
    }
}

int main() {
    int arrA[] = {1, 5, 10, 15, 20};
    int arrB[] = {5, 8, 10, 15,20,};
    int arrC[] = {3, 5, 10, 15,20};

    int sizeA = sizeof(arrA) / sizeof(arrA[0]);
    int sizeB = sizeof(arrB) / sizeof(arrB[0]);
    int sizeC = sizeof(arrC) / sizeof(arrC[0]);

    printf("Elemen yang sama pada ketiga array: ");
    findCommonElements(arrA, arrB, arrC, sizeA, sizeB, sizeC);
    printf("\n");

    return 0;
}