#include <stdio.h>
#include <math.h>

int mutlak (int angka){
    
    if (angka < 0)
    {
        angka *= -1;
    }
    return angka;
}

int hitung (int nilai1, int nilai2){ 

    int Hasil;
    int perhitungan;

    perhitungan = nilai1 - nilai2;

    if (perhitungan < 0)
    {
        perhitungan *= -1;
    }
    return perhitungan;
} 

int main() 
{ 
    int a, b, c, d, Hasil;
    scanf("%d %d %d %d", &a, &c, &b, &d); 
    Hasil = hitung(a,b) + hitung(c,d); 
    printf("%d",mutlak(Hasil)); 
return 0; 
}