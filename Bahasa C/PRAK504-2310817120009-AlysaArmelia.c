#include <stdio.h>

int reverse (int hitungan){ 

    int reversed_beberapa = 0;

    while (hitungan != 0)
    {
        int pengingat = hitungan % 10;
        reversed_beberapa = reversed_beberapa * 10 + pengingat;
        hitungan /= 10;
    }
    
    return reversed_beberapa;
 } 

int main() { 
    int A, B; 
    scanf("%d %d",&A,&B); 
    A = reverse(A); 
    B = reverse(B); 
    int C = A+B; 
    printf("%d", reverse(C)); 
}