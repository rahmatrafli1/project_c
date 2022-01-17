#include <stdio.h> // library standart input output

int main()
{ // fungsi utama

    int a; // jam berangkat
    int b; // menit berangkat
    int c; // jam sampai
    int d; // menit sampai

    printf("Masukan Jam Berangkat : ");   // menampilkan output Masukan Jam Berangkat
    scanf("%d", &a);                      // membaca input dari keyboard dan menyimpannya pada variable a
    printf("Masukan Menit Berangkat : "); // menampilkan output Masukan Menit Berangkat
    scanf("%d", &b);                      // membaca input dari keyboard dan menyimpannya pada variable b
    printf("Masukan Jam Sampai : ");      // menampilkan output Masukan Jam Sampai
    scanf("%d", &c);                      // membaca input dari keyboard dan menyimpannya pada variable c
    printf("Masukan Menit Sampai : ");    // menampilkan output Masukan Menit Sampai
    scanf("%d", &d);                      // membaca input dari keyboard dan menyimpannya pada variable d

    int e = d - b; // selisih menit

    if (e < 0)
    {            // jika e kurang dari 0 maka
        e += 60; // nilai e ditambahkan dengan 60 ( e + 60 )
        c -= 1;  // dan nilai c dikurangi 1 ( c - 1 )
    }

    int f = c - a; // selisih jam ( nilai c diambil dari baris 29 apabila nilai e > 0, jika e >=0 maka c diambil dari data yang diinputkan )

    if (f < 0)
    {            // jika f kurang dari 0 maka
        f += 24; // variabel f memperoleh nilai dari f + 24
    }

    printf("Lama Perjalanan Anda : %d Jam %d Menit\n", f, e); // output lama perjalanan dalam jam dan menit
}