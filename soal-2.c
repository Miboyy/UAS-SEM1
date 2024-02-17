#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target, int *steps) {
    while (low <= high) {
        (*steps)++;
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;

        
        else
            high = mid - 1;
    }

    
    return -1;
}

int main() {
    int n, target;

    // Input jumlah data
    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &n);

    int nilai[n];

    // Input nilai mahasiswa yang sudah terurut
    printf("Masukkan nilai mahasiswa (urutkan terlebih dahulu):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }

    // Input nilai yang dicari
    printf("Masukkan nilai yang dicari: ");
    scanf("%d", &target);

    int steps = 0;
    
    int result = binarySearch(nilai, 0, n - 1, target, &steps);

    if (result != -1) {
        printf("Nilai %d ditemukan pada indeks %d.\n", target, result);
    } else {
        printf("Nilai %d tidak ditemukan.\n", target);
    }

    printf("Langkah-langkah pencarian: %d\n", steps);

    return 0;
}
