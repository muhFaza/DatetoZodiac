//2502141990
//Muhammad Faza
//Compiler - Dev C++
#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
// struct TanggalLahir
struct StructTanggalLahir {
    int tanggal;
    int bulan;
    int tahun;
};

// deklarasi struct TanggalLahir
struct StructTanggalLahir tgl_lahir;

// fungsi untuk mengecek tanggal
int check_date(int tgl1, int bln1, char operation[2], int tgl2, int bln2) {

    int tanggal1 = tgl1 + bln1*100;
    int tanggal2 = tgl2 + bln2*100;
    
    // check apakah menggunakan operator (<) atau (>)
    if (operation == "<=") {
        if (tanggal1 <= tanggal2) {
            return 1;
        } else {
            return 0;
        }
    } else {
        if (tanggal1 >= tanggal2) {
            return 1;
        } else {
            return 0;
        }
    }
}

// fungsi untuk print hasil
int print_result(char nama[100], char bintang[100]) {
    printf("Nama: %s\n", nama);
    printf("Bintang: %s\n", bintang);
    printf("Tanggal lahir: %d/%d/%d", tgl_lahir.tanggal, tgl_lahir.bulan, tgl_lahir.tahun);
    return 0;
}


// fungsi main
int main()
{
    

    char nama[50];
    // mengambil inputan nama di console
    printf("Masukkan Nama: ");
    scanf("%[^\n]s", nama);
    getchar();
    
    // mengambil inputan nama di console
    printf("Masukkan Tanggal Lahir: (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &tgl_lahir.tanggal, &tgl_lahir.bulan, &tgl_lahir.tahun);
    getchar();
    
    printf("\n");
    
    // Periksa setiap input tanggal
    if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 21, 3) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 19, 4)) {
        print_result(nama, "Aries"); 
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 20, 4) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 20, 5)) {
        print_result(nama, "Taurus");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 21, 5) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 20, 6)) {
        print_result(nama, "Gemini");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 21, 6) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 22, 7)) {
        print_result(nama, "Cancer");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 23, 7) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 22, 8)) {
        print_result(nama, "Leo");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 23, 8) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 22, 9)) {
        print_result(nama, "Virgo");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 23, 9) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 22, 10)) {
        print_result(nama, "Libra");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 23, 10) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 21, 11)) {
        print_result(nama, "Scorpio");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 22 , 11) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 21, 12)) {
        print_result(nama, "Sagitarius");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 22 , 12) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 31, 12)) {
        print_result(nama, "Capricorn");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 1  , 1) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 19, 1)) {
        print_result(nama, "Capricorn");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 20  , 1) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 18, 2)) {
        print_result(nama, "Aquarius");
    } else if (check_date(tgl_lahir.tanggal, tgl_lahir.bulan, ">=", 19  , 2) && check_date(tgl_lahir.tanggal, tgl_lahir.bulan, "<=", 20, 3)) {
        print_result(nama, "Pisces");
    } else {
        print_result(nama, "Data tidak diketahui");
    }
    
   return 0;
}

