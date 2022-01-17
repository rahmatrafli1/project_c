#include <stdio.h> // library standart input output

int main()
{                  // fungsi utama
    float a, b, c; // deklarasi variabel a, b, dan c

    printf("Masukan Angka A : "); // menampilkan teks output masukan angka a
    scanf("%f", &a);              // membaca input dari keyboard dan menyimpannya dalam variabel a
    printf("Masukan Angka B : "); // menampilkan teks output masukan angka b
    scanf("%f", &b);              // membaca input dari keyboard dan menyimpannya dalam variabel b
    printf("Masukan Angka C : "); // menampilkan teks output masukan angka c
    scanf("%f", &c);              // membaca input dari keyboard dan menyimpannya dalam variabel c

    if (a > b && a > c)
    {                                                     // jika a lebih besar dari b dan c
        printf("Bilangan Terbesar Adalah A yaitu %g", a); // maka akan ditampilkan output A
    }
    else if (b > a && b > c)
    {                                                     // lain jika b lebih besar dari a dan c
        printf("Bilangan Terbesar Adalah B yaitu %g", b); // maka akan ditampilkan output B
    }
    else if (c > a && c > b)
    {                                                     // lain jika c lebih besar dari a dan b
        printf("Bilangan Terbesar Adalah C yaitu %g", c); // maka akan ditampilkan output C
    }

    return 0; // untuk memberitahukan bahwa program telah berakhir secara normal
}