#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Fungsi untuk melakukan linear search
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int n, i, x, result;

    // Meminta pengguna untuk memasukkan jumlah angka
    printf("Masukkan jumlah angka: ");
    scanf("%d", &n);

    int arr[n];

    // Meminta pengguna untuk memasukkan angka-angka
    printf("Masukkan %d angka:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Mengurutkan angka-angka menggunakan insertion sort
    insertionSort(arr, n);

    // Menampilkan angka-angka yang sudah diurutkan
    printf("Angka-angka yang sudah diurutkan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Meminta pengguna untuk memasukkan angka yang ingin dicari
    printf("Masukkan angka yang ingin dicari: ");
    scanf("%d", &x);

    // Mencari angka menggunakan linear search
    result = linearSearch(arr, n, x);

    // Menampilkan hasil pencarian
    if (result != -1) {
        printf("Angka %d ditemukan pada indeks %d.\n", x, result);
    } else {
        printf("Angka %d tidak ditemukan.\n", x);
    }

    return 0;
}
