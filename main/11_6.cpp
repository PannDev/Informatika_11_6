//? Header Files and namespaces
#include<bits/stdc++.h>
#include<unistd.h>
#include<limits>
using namespace std;

//? Code Shortners
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PHI 3.14

// 1 //? nama hobi
void namaHobi() {
    system("clear");
    string nama, hobi;
    cout << "nama : "; cin >> nama;
    cout << "hobi : "; cin >> hobi;

    cout << "nama kamu " << nama << " hobi kamu " << hobi << endl;
}

// 2 //? luas lingkaran
void luasLingkaran() {
    system("clear");
    double r; 
    cout << "masukan nilai jari - jari : "; cin >> r;

    double L = PHI * pow(r, 2);
    cout << "luas lingkaran " << L << endl;
}

// 3 //? cek ganjil genap
void ganjilGenap() {
    system("clear");
    int angka;
    cout << "masukan angka : "; cin >> angka;

    (angka % 2 == 0) ? cout << "angka genap\n" : cout << "angka ganjil\n";
}

// 4 //? tahun kabisat
void tahunKabisat() {
    system("clear");
    int tahun;
    cout << "tahun : "; cin >> tahun;
    (tahun % 4 == 0) ? cout << "tahun kabisat\n" : cout << "bukan tahun kabisat\n";
}

// 5 //? konversi suhu dari c --> k f r
void konversiSuhu() {
    system("clear");
    double c, k, f, r;
    string konversi;
    cout << "masukan celcius : "; cin >> c;
    cout << "mau konversi kemana? (K,F,R) : "; cin >> konversi;

    if (konversi == "R") {
        r = c * 0.8;
        cout << "suhu reamur = " << r << endl;
    } else if (konversi == "F") {
        f = (c * 1.8) + 32;
        cout << "suhu fahrenheit = " << f << endl;
    } else if (konversi == "K") {
        k = c + 273.15;
        cout << "suhu kelvin = " << k << endl;
    } else {
        cout << "input salah\n";
        usleep(1000000);
        konversiSuhu();
    }
}

// 6 //? operator assignment ( += ; -= ; *= ; /= )
void opAssign() {
    double a1, a2, a3, a4, b;
    cout << "masukan nilai a1 : ";  cin >> a1;
    cout << "masukan nilai a2 : ";  cin >> a2;
    cout << "masukan nilai a3 : ";  cin >> a3;
    cout << "masukan nilai a4 : ";  cin >> a4;
    cout << "masukan nilai b : ";  cin >> b;

    a1 += b;
    a2 -= b;
    a3 *= b;
    a4 /= b;

    cout << endl;
    cout << "Hasil a +=  b adalah " << a1 << endl;
    cout << "Hasil a -= b adalah " << a2 << endl;
    cout << "Hasil a *= b adalah " << a3 << endl;
    cout << "Hasil a /= b adalah " << a4 << endl;
}

// 7 //? nilai
void nilai (){
    int pratikum, uts, uas;
    float nilaiAkhir;
    string grade;

    cout << "masukan nilai pratikum : "; cin >> pratikum;
    cout << "masukan nilai uts : "; cin >> uts;
    cout << "masukan nilai uas : "; cin >> uas;

    nilaiAkhir = (0.5*pratikum) + (0.2*uts) + (0.3*uas);

    if (nilaiAkhir >= 90) {
        grade = "A";
    } else if (nilaiAkhir < 90 && nilaiAkhir >= 80) {
        grade = "B";
    } else if (nilaiAkhir < 80 && nilaiAkhir >= 70) {
        grade = "C";
    } else if (nilaiAkhir < 70 && nilaiAkhir >= 60) {
        grade = "D";
    } else {
        grade = "E";
    }

    cout << endl;
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    cout << "Grade Nilai : " << grade << endl;

}

// 8 //? Luas permukaan kubus
void kubus() {
    system("clear");
    double r;
    cout << "masukan r : "; cin >> r;
    double luas = 6 * r * r;

    cout << luas << endl;
}

// 9 //? cekUmur
void cekUmur() {
    system("clear");

    int usia;
    cout << "usia : "; cin >> usia;

    if (usia < 0) {
        cout << "usia tidak boleh negatif" << endl;
    }
    else if (usia >= 0 && usia <= 5) {
        cout << "balita" << endl;
    } else if (usia >5 && usia <= 11) {
        cout << "anak - anak" << endl;
    } else if (usia > 11 && usia <= 16) {
        cout << "remaja awal" << endl;
    } else if(usia > 16 && usia <= 25) {
        cout << "remaja akhir" << endl;
    } else if (usia > 25 && usia <= 35) {
        cout << "dewasa awal" << endl;
    } else {
        cout << "lansia" << endl;
    }

}

//10 //? cek kuadran
void Kuadran() {
    system("clear");

    int x, y;
    cout << "masukan nilai x : "; cin >> x;
    cout << "masukan nilai y : "; cin >> y;

    if (x > 0 && y > 0) { //* x,y > 0 
        cout << "kuadran 1" << endl;
    } else if (x < 0 && y > 0) { //* x < 0   y > 0
        cout << "kuadran 2" << endl;
    } else if (x < 0 && y < 0) { //* x dan y < 0
        cout << "kuadran 3" << endl;
    } else if (x > 0 && y < 0) { //* x > 0 dan y < 0
        cout << "kuadran 4" << endl;
    } else if (x == 0 && y == 0) { //* x == 0 dan y == 0
        cout << "titik pusat" << endl;
    } else if (x == 0) {
        cout << "titik berada di garis Y" << endl;
    } else if (y == 0) {
        cout << "titik berada di garis X" << endl;
    }

}

//11 //? cek namaHari
void namaHari() {
    int hari; 
    cout << "masukan kode hari : "; cin >> hari;

    switch (hari) {
        case 1:
            cout << "Hari Minggu" << endl;
            break;
        case 2:
            cout << "Hari Senin" << endl;
            break;
        case 3:
            cout << "Hari Selasa" << endl;
            break;
        case 4:
            cout << "Hari Rabu" << endl;
            break;
        case 5:
            cout << "Hari Kamis" << endl;
            break;
        case 6:
            cout << "Hari Jumat" << endl;
            break;
        case 7:
            cout << "Hari Sabtu" << endl;
            break;
        default:
            cout << "Kode hari salah" << endl;
    }

}

//12 //? cek kuadran tapi pakai switch
//! bug
void kuadranSwitch() {
    system("clear");

    int x, y;
    cout << "masukan nilai x : "; cin >> x;
    cout << "masukan nilai y : "; cin >> y;

    int kuadran;
    if (x > 0 && y > 0) { //* x,y > 0 
        kuadran = 1;
    } else if (x < 0 && y > 0) { //* x < 0   y > 0
        kuadran = 2;
    } else if (x < 0 && y < 0) { //* x dan y < 0
        kuadran = 3;
    } else if (x > 0 && y < 0) { //* x > 0 dan y < 0
        kuadran = 4;
    } else if (x == 0 && y == 0) { //* x == 0 dan y == 0
        kuadran = 0; //? berada di titik pusat
    } else if (x == 0) {
        kuadran = 5;
        // cout << "titik berada di garis Y" << endl;
    } else if (y == 0) {
        kuadran = 6;
        // cout << "titik berada di garis X" << endl;
    }

    switch (kuadran) {
        case 0:
            cout << "titik pusat" << endl;
            break;
        case 1:
            cout << "kuadrn 1" << endl;
            break;
        case 2:
            cout << "kuadran 2" << endl;
            break;
        case 3:
            cout << "kuadran 3" << endl;
            break;
        case 4:
            cout << "kuadran 4" << endl;
            break;
        case 5:
            cout << "garis Y" << endl;
            break;
        case 6:
            cout << "garis X" << endl;
            break;
        default:
            cout << "error" << endl;
    }

}

// 13 //? karyawan bekerja 
//! masih bug
void karyawan() {
    system("clear");
    //? bekerja 5 hari = 1 minggu
    //? 9 jam/ hari
    //? upah jumlah jam * 25000
    //? lembur jumlah jam lembur * 40000
    //? minimal kerja / 1 minggu 45 jam
    //? total = upah +lembur


    int hari, lembur;
    cout << "Berapa hari ? "; cin >> hari;
    cout << "Berapa jam lembur ? "; cin >> lembur;

    
    int jumlahJamKerja = hari * 9;
    int upah = jumlahJamKerja * 25000;
    int upahLembur =  lembur * 40000;
    int upahTotal = upah + upahLembur;

    

}

// 14 //? belanja
void belanja () {
    system("clear");
    string member, pembayaran;
    float harga, totalBelanja;

    cout << "punya member tidak? [ya/tidak] "; cin >> member;
    cout << "berapa total belanja? "; cin >> harga;
    cout << "Pembayaran dengan cash/kartu/tf/qris ? "; cin >> pembayaran;

    // (member == "ya") ? totalBelanja = harga - 0.1 * harga : totalBelanja = harga; 

    if (member == "ya") {
        totalBelanja = harga - 0.1 * harga;
    } else {
        totalBelanja = harga;
    }

    if (pembayaran == "cash") {
        totalBelanja -= 0.04 * totalBelanja;
    } else if (pembayaran == "kartu") {
        totalBelanja += 0.05 * totalBelanja;
    }

    cout << "total belanja anda : " << totalBelanja << endl;
}

// 15 //? Problem INF 28 August
void profesi() {
    system("clear");
    int profesi, bidangDokter, pilihTingkat;
    cout << "Cek gaji kamu berdasarkan profesi" << endl;
    cout << "1. Dokter" << endl;
    cout << "2. Programmer" << endl;
    cin >> profesi;

    if (profesi == 1) {

        cout << "Pilih Bidang" << endl;
        cout << "1. Anak" << endl;
        cout << "2. Umum" << endl;
        cin >> bidangDokter;

        switch (bidangDokter)
        {
        case 1:
            cout << "Profesi Kamu Dokter Anak, " << "Gaji Kamu Rp 10.000.000/Bulan" << endl;  
            break;
        case 2:
            cout << "Profesi Kamu Dokter Umum, " << "Gaji Kamu Rp 15.000.000/Bulan" << endl;
            break;
        default:
        cout << "input tidak tersedia" << endl;
            break;
        }

    }
    else if (profesi == 2) {
        cout << "Pilih Tingkat" << endl;
        cout << "1. Junior Programmer" << endl;
        cout << "2. Senior Programmer" << endl;
        cin >> pilihTingkat;

        switch (pilihTingkat)
        {
        case 1:
            cout << "Profesi Kamu Junior Programmer, " << "Gaji Kamu Rp 20.000.000/Bulan" << endl;
            break;
        case 2:
            cout << "Profesi Kamu Senior Programmer, " << "Gaji Kamu Rp 30.000.000/Bulan" << endl;
            break;
        default:
            cout << "input tidak tersedia" << endl;
            break;
        }

    }
    else {
            cout << "input tidak tersedia" << endl;
        }
}

// 16 //? Perulangan 1
void perulangan1 () {
    system("clear");
    int sampai;
    cout << "ingin keluarkan dari 1 sampai berapa? ";
    cin >> sampai;
    cout << endl;

    for (int mulai = 1; mulai <= sampai; mulai++) {
        cout << mulai << endl;
    }
}

// 17 //? Perulangan 2
void perulangan2() {
    system("clear");
    int mulai, sampai, ulang;

    cout << "mulai dari berapa ? ";
    cin >> mulai;

    cout << "sampai berapa ? ";
    cin >> sampai;

    for (ulang = mulai; ulang <= sampai; ulang++) {
        cout << ulang << endl;
    }
}

//18 //? Perulangan Rafly
void perulanganRafli() {
    system("clear");

    int kata;

    for (kata = 1; kata <= 3; kata++) {
        cout << "Rafli\n";
    }
}

//19 //? Perulangan Angka
void perulanganAngka() {
    system("clear");


    //! i = Baris (endl)
    //! j = Angka
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
}

void perulanganAngka2() {
    system("clear");

    for (int baris = 3; baris <= 5; baris++) {

        for (int angka = 5; angka >= baris; angka--) {
            cout << angka;
        }

        cout << endl;
    }

}

// 15 14 13 -- 14 13 -- 13



// 0 //? main 
//! always maintenance
void home() {
    system("clear");
    cout << "selamat datang di program evan\n";
    cout << "ingin jalankan program apa?\n\n";

    int pilih;
    cout << "1. Nama Hobi\n";
    cout << "2. Luas Lingkaran\n";
    cout << "3. Ganjil Genap\n";
    cout << "4. Tahun Kabisat\n";
    cout << "5. Konversi Suhu\n";
    cout << "6. Operator Assignment\n";
    cout << "7. Grade Nilai \n";
    cout << "8. Luas permukaan kubus\n";
    cout << "9. cekUmur\n";
    cout << "10. Kuadran\n";
    cout << "11. Nama Hari\n";
    cout << "12. Kuadran versi switch [BUG]\n";
    cout << "13. Karyawan Bekerja [BUG]\n";
    cout << "14. Belanja\n";
    cout << "15. Profesi\n";
    cout << "16. Perulangan 1\n";
    cout << "17. Perulangan 2\n";
    cout << "18. Perulangan Rafli\n";
    cout << "19. Perulangan Angka j++\n";
    cout << "20. Perulangan Angka j--\n";
    cout << ">> ";

    cin >> pilih;
    
    switch (pilih) {
        case 1:
            namaHobi();
            break;
        case 2:
            luasLingkaran();
            break;
        case 3:
            ganjilGenap();
            break;
        case 4:
            tahunKabisat();
            break;
        case 5:
            konversiSuhu();
            break;
        case 6:
            opAssign();
            break;
        case 7:
            nilai();
            break;
        case 8:
            kubus();
            break;
        case 9:
            cekUmur();
            break;
        case 10:
            Kuadran();
            break;
        case 11:
            namaHari();
            break;
        case 12:
            kuadranSwitch();
            break;
        case 13:
            karyawan();
            break;
        case 14:
            belanja();
            break;
        case 15:
            profesi();
            break;
        case 16:
            perulangan1();
            break;
        case 17:
            perulangan2();
            break;
        case 18:
            perulanganRafli();
            break;
        case 19:
            perulanganAngka();
            break;
        case 20:
            perulanganAngka2();
            break;
        default:
            cout << "Pilih angka 1 - 20 !" << endl;
            usleep(1000000);
            home();
            break;
    }
}

//! main
int main () {
    PannDev

    char hyn;
    do {
        home();
        cout << "\nketik h untuk kembali ke beranda\n";
        cout << "ketik n untuk keluar program\n";
        cout << ">> ";

        string input;
        cin >> input;

        if (input == "h") {
            continue; //? h = home
        } else if (input == "n") {
            break; //? n = no
        } else {
            cout << "Salah input. ";
            usleep(1000000);
        }
    } while (true);

    return 0;
}
