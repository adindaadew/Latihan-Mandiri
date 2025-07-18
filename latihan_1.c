#include <stdio.h>
#include <string.h>

#define MAX_PRODUK 100

// Definisi struktur untuk produk
struct Produk {
    char nama[50];
    float harga;
    int stok;
};

int main() {
    struct Produk produk[MAX_PRODUK];
    int n, i;
    float hargaTertinggi = 0.0;
    int indexTertinggi = -1;

    // Meminta pengguna untuk memasukkan jumlah produk
    printf("Masukkan jumlah produk: ");
    scanf("%d", &n);

    // Memastikan jumlah produk tidak melebihi batas
    if (n > MAX_PRODUK) {
        printf("Jumlah produk tidak boleh lebih dari %d.\n", MAX_PRODUK);
        return 1;
    }

    // Memasukkan data produk
    for (i = 0; i < n; i++) {
        printf("Nama produk %d: ", i + 1);
        scanf("%s", produk[i].nama);
        printf("Harga produk %d: ", i + 1);
        scanf("%f", &produk[i].harga);
        printf("Stok produk %d: ", i + 1);
        scanf("%d", &produk[i].stok);
    }

    // Mencari produk dengan harga tertinggi
    for (i = 0; i < n; i++) {
        if (produk[i].harga > hargaTertinggi) {
            hargaTertinggi = produk[i].harga;
            indexTertinggi = i;
        }
    }

    // Mencetak produk dengan harga tertinggi
    if (indexTertinggi != -1) {
        printf("\nProduk dengan harga tertinggi:\n");
        printf("Nama: %s\n", produk[indexTertinggi].nama);
        printf("Harga: %.2f\n", produk[indexTertinggi].harga);
    } else {
        printf("Tidak ada produk yang dimasukkan.\n");
    }

    return 0;
}
