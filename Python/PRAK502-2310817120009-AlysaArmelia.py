def mutlak(angka):

    if angka < 0:

        angka *= -1

    return angka

def hitung(nilai1, nilai2):

    perhitungan = nilai1 - nilai2

    if perhitungan < 0:

        perhitungan *= -1
        
    return perhitungan

a, c, b, d = map(int, input().split())
Hasil = hitung(a, b) + hitung(c, d)
print(mutlak(Hasil))