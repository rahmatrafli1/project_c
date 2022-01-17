#include <stdio.h>

int main()
{
    int usia = 23;
    float berat = 100.4;
    double tinggi = 176.23;
    char jenis_kelamin = 'L';

    printf("Usia: %i tahun\n", usia);
    printf("Tinggi: %.2f cm\n", tinggi);
    printf("Berat: %.2f Kg\n", berat);
    printf("Jenis kelamin: %c\n", jenis_kelamin);

    return 0;
}