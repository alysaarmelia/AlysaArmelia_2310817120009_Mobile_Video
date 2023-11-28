def reverse(hitungan):

    reversed_beberapa = 0

    while hitungan != 0:
        pengingat = hitungan % 10
        reversed_beberapa = reversed_beberapa * 10 + pengingat
        hitungan //= 10

    return reversed_beberapa

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))