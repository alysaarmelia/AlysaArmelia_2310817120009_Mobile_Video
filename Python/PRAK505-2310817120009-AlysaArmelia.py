def Biodata(tahunLahir, Namaku, Asal):

    tahun_sekarang = 2023
    umur_seseorang = tahun_sekarang - tahunLahir

    print(f"\nPerkenalkan Nama Saya: {Namaku}")
    print(f"Umur Saya: {umur_seseorang}")
    print(f"Saya Adalah Angkatan: {tahun_sekarang}")
    print(f"Asal Saya dari: {Asal}")


tahunLahir = int(input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal)