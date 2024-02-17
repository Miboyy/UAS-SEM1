#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];
    int total = 0;

    printf("Masukkan data:\n");
    for (int i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
        total += data[i];
    }

    float rataRata = (float)total / n;
    int nilaiTengah;

    if (n % 2 == 0) {
        nilaiTengah = (data[n / 2 - 1] + data[n / 2]) / 2;
    } else {
        nilaiTengah = data[n / 2];
    }

    printf("Jumlah data: %d\n", total);
    printf("Rata-rata data: %.2f\n", rataRata);
    printf("Nilai tengah data: %d\n", nilaiTengah);

    return 0;
}