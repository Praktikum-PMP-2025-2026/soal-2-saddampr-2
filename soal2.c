/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1 (Susulan)
 *   Hari dan Tanggal    : Rabu, 3 Juni 2026
 *   Nama (NIM)          : 13224031
 *   Nama File           : soal2.c
 *   Deskripsi           : Membuat perhitungan atas banyaknya langkah, ganjil dan genap. Lalu hitung transformasi hingga mencapai 1
 * 
 */

 #include<stdio.h>

int transformasi (int n) {
    if (n == 1) {
        return 0; 
    }
    
    if (n % 2 == 0) {
        return 1 + transformasi(n / 2); 
    } else {
        return 1 + transformasi(3 * n + 1); 
    }
}

int main() {
    int input ;
    if (scanf("%d", &input) != 1) return 0; 

    for (int i = 0; i < input; i++) {
        int n;
        scanf("%d", &n);
        printf("LANGKAH %d\n", transformasi(n)); 
    }
    return 0;   
}
