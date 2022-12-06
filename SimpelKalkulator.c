#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu;
float angka_1, angka_2, hasil_angka;

int validInt(int *var)
{
    char buff[1024];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%d %c", var, &cek) == 1)
        {
            return 1;
        }
    }
    return 0;
}

void ReVldInt(int *var, char *prompt)
{
    while (1)
    {
        printf(prompt);
        if (validInt(var))
            break;
        printf("Input hanya berupa angka!\n");
    }
}

float validFlt(float *var)
{
    char buff[1024];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%f %c", var, &cek) == 1)
        {
            return 1;
        }
    }
    return 0;
}

void ReVldFlt(float *var, char *prompt)
{
    while (1)
    {
        printf(prompt);
        if (validFlt(var))
            break;
        printf("Input hanya berupa angka!\n");
    }
}

void Penjumlahan()
{
    printf("\n========================================");
    printf("\n=         [1] Penjumlahan (+)          =");
    printf("\n========================================\n");
    ReVldFlt(&angka_1, "Masukan bilangan pertama : ");
    ReVldFlt(&angka_2, "Masukan bilangan kedua   : ");
    fflush(stdin);
    printf("========================================\n");
    hasil_angka = angka_1 + angka_2;
    printf("Hasil : %.2f", hasil_angka);
    printf("\n========================================\n");
}

void Pengurangan()
{
    printf("\n========================================");
    printf("\n=         [2] Pengurangan (-)          =");
    printf("\n========================================\n");
    ReVldFlt(&angka_1, "Masukan bilangan pertama : ");
    ReVldFlt(&angka_2, "Masukan bilangan kedua   : ");
    fflush(stdin);
    printf("========================================\n");
    hasil_angka = angka_1 - angka_2;
    printf("Hasil : %.2f", hasil_angka);
    printf("\n========================================\n");
}

void Perkalian()
{
    printf("\n========================================");
    printf("\n=         [3] Perkalian (*)            =");
    printf("\n========================================\n");
    ReVldFlt(&angka_1, "Masukan bilangan pertama : ");
    ReVldFlt(&angka_2, "Masukan bilangan kedua   : ");
    fflush(stdin);
    printf("========================================\n");
    hasil_angka = angka_1 * angka_2;
    printf("Hasil : %.2f", hasil_angka);
    printf("\n========================================\n");
}

void Pembagian()
{
    printf("\n========================================");
    printf("\n=         [4] Pembagian (/)            =");
    printf("\n========================================\n");
    ReVldFlt(&angka_1, "Masukan bilangan pertama : ");
    ReVldFlt(&angka_2, "Masukan bilangan kedua   : ");
    fflush(stdin);
    printf("========================================\n");
    hasil_angka = angka_1 / angka_2;
    printf("Hasil : %.2f", hasil_angka);
    printf("\n========================================\n");
}

void Modulus()
{
    int bilangan_1, bilangan_2, hasil_bilangan;

    printf("\n========================================");
    printf("\n=         [5] Modulus (%)              =");
    printf("\n========================================\n");
    ReVldInt(&bilangan_1, "Masukan bilangan pertama : ");
    ReVldInt(&bilangan_2, "Masukan bilangan kedua   : ");
    fflush(stdin);
    printf("========================================\n");
    hasil_bilangan = bilangan_1 % bilangan_2;
    printf("Hasil : %d\n", hasil_bilangan);
    printf("\n========================================\n");
}

int main()
{

    char Continue[2];

    do
    {
        printf("\n========================================");
        printf("\n=          PROGRAM KALKULATOR          =");
        printf("\n=             KELOMPOK 24              =");
        printf("\n========================================");
        printf("\n=           SIMPEL KALKULATOR          =");
        printf("\n========================================");
        printf("\n=         [1] Penjumlahan (+)          =");
        printf("\n=         [2] Pengurangan (-)          =");
        printf("\n=         [3] Perkalian   (*)          =");
        printf("\n=         [4] Pembagian   (/)          =");
        printf("\n=         [5] Modulus     (%)          =");
        printf("\n========================================\n");
        ReVldInt(&menu, "Masukkan Pilihan : ");
        fflush(stdin);

        switch (menu)
        {
        case 1:
            Penjumlahan();
            break;
        case 2:
            Pengurangan();
            break;
        case 3:
            Perkalian();
            break;
        case 4:
            Pembagian();
            break;
        case 5:
            Modulus();
            break;
        default:
            printf("\nInput Anda Tidak Valid!");
            break;
        }

        printf("\nApakah Anda Ingin Kembali Memilih Rumus Lainnya? (y/t) : ");
        scanf("%[^\n]", &Continue);
        fflush(stdin);
        system("cls");
    } while (strcmp(Continue, "y") == 0);
    return 0;
}