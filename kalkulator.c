#include <stdio.h> // library standart input output

int main()
{ // fungsi utama

    float a, b; // deklarasi variabel a dan b

    int menu;    // deklarasi variabel menu
    float rumus; // deklarasi variabel rumus

    printf("Menu Kalkulator Sederhana\n"); // menampilkan output Menu Kalkulator Sederhana
    printf("1: Perkalian\n");              // menampilkan output 1: Perkalian
    printf("2: Penjumlahan\n");            // menampilkan output 2: Penjumlahan
    printf("3: Pengurangan\n");            // menampilkan output 3: Pengurangan
    printf("4: Pembagian\n");              // menampilkan output 4: Pembagian

    printf("Masukan Nomer Menu Diatas [1-4] : "); // menampilkan output Masukan Nomer Menu Diatas [1-4]
    scanf("%d", &menu);                           // membaca input dari keyboard dan menyimpannya pada variable menu
    printf("Masukan Angka Pertama : ");           // menampilkan output Masukan Angka Pertama
    scanf("%f", &a);                              // membaca input dari keyboard dan menyimpannya pada variable a
    printf("Masukan Angka Kedua : ");             // menampilkan output Masukan Angka Kedua
    scanf("%f", &b);                              // membaca input dari keyboard dan menyimpannya pada variable b

    switch (menu)
    {                  // menyeleksi nilai dari variabel menu
    case 1:            // mengecek program jika sudah memenuhi syarat maka akan berjalan di case 1, jika tidak maka ke case berikutnya
        rumus = a * b; // rumus perkalian
        break;         // mengakhiri suatu proses jika kondisinya telah terpenuhi sebelumnya
    case 2:            // mengecek program jika sudah memenuhi syarat maka akan berjalan di case 2, jika tidak maka ke case berikutnya
        rumus = a + b; // rumus penjumlahan
        break;         // mengakhiri suatu proses jika kondisinya telah terpenuhi sebelumnya
    case 3:            // mengecek program jika sudah memenuhi syarat maka akan berjalan di case 3, jika tidak maka ke case berikutnya
        rumus = a - b; // rumus pengurangan
        break;         // mengakhiri suatu proses jika kondisinya telah terpenuhi sebelumnya
    case 4:            // mengecek program jika sudah memenuhi syarat maka akan berjalan di case 4
        rumus = a / b; // rumus pembagian
        break;         // mengakhiri suatu proses jika kondisinya telah terpenuhi sebelumnya
    }

    printf("Hasil Perhitungan Adalah : %.2f", rumus); // // menampilkan output Hasil perhitungan dari variabel rumus
    return 0;                                         // untuk memberitahukan bahwa program telah berakhir secara normal
}