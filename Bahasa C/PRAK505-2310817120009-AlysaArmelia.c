#include <stdio.h>

void Biodata (int tahunLahir, char Namaku[50], char Asal[99]) {
    
    int tahun_sekarang = 2023;
    int umur_seseorang = tahun_sekarang - tahunLahir;

    printf("\nPerkenalkan Nama Saya: %s\n", Namaku);
    printf("Umur Saya: %d\n", umur_seseorang);
    printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);  
    printf("Asal Saya dari: %s\n", Asal);
}

int main() {
    int tahunLahir;
    char Namaku[50], Asal[99];
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&Namaku);
    scanf(" %[^\n]%*c",&Asal);
    Biodata(tahunLahir, Namaku, Asal);
return 0;
}