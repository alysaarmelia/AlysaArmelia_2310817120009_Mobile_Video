#include <stdio.h>

int maksimal(int a, int b){

    int batas_atas;

    if (a >= b)
    {
        batas_atas = a;
    }
    else if (b >= a)
    {
        batas_atas = b;
    }
    else 
    {
        return batas_atas;
    }
} 

int minimal(int a, int b){ 

    int batas_bawah;

    if (a <= b)
    {
        batas_bawah = a;
    }
    else if (b <= a)
    {
        batas_bawah = b;
    }
    else 
    {
        return batas_bawah;
    }

} 

int main(){
    int batas = 0; 
    int maks = -100000; 
    int minim = 100000; 
    int bilangan; 
    scanf("%d", &bilangan); 
    while(batas < bilangan){ 
        int nilai; 
        scanf("%d", &nilai); 
        maks = maksimal(maks, nilai); 
        minim = minimal(minim, nilai); 
        batas++; 
    } 
        printf("%d %d",maks,minim); 
}