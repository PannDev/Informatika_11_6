//? Header Files and namespaces
#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstring>
// #include<unistd.h>
// #include<limits>
using namespace std;

//? Code Shortners
// #define endl '\n'
// #define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PHI 3.14

// 1 //? nama hobi
void namaHobi() {
    // system("clear");
    string nama, hobi;
    cout << "nama : "; cin >> nama;
    cout << "hobi : "; cin >> hobi;

    cout << "nama kamu " << nama << " hobi kamu " << hobi << endl;
}

// 2 //? luas lingkaran
void luasLingkaran() {
    // system("clear");
    double r; 
    cout << "masukan nilai jari - jari : "; cin >> r;

    double L = PHI * pow(r, 2);
    cout << "luas lingkaran " << L << endl;
}

// 3 //? cek ganjil genap
void ganjilGenap() {
    // system("clear");
    int angka;
    cout << "masukan angka : "; cin >> angka;

    // (angka % 2 == 0) ? cout << "angka genap\n" : cout << "angka ganjil\n";
    if (angka % 2 == 0) {
        cout << "angka genap" << endl;
    } else {
        cout << "angka ganjil" << endl;
    }
}

// 4 //? tahun kabisat
void tahunKabisat() {
    // system("clear");
    int tahun;
    cout << "tahun : "; cin >> tahun;
    // (tahun % 4 == 0) ? cout << "tahun kabisat\n" : cout << "bukan tahun kabisat\n";
    if (tahun % 4 == 0) {
        cout << "tahun kabisat" << endl;
    } else {
        cout << "bukan tahun kabisat" << endl;
    }
}

// 5 //? konversi suhu dari c --> k f r
void konversiSuhu() {
    // system("clear");
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
        // usleep(1000000);
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
    // system("clear");
    double r;
    cout << "masukan r : "; cin >> r;
    double luas = 6 * r * r;

    cout << luas << endl;
}

// 9 //? cekUmur
void cekUmur() {
    // system("clear");

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
    // system("clear");

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

// 12 //? karyawan bekerja  25 august
void karyawan() {
    // system("clear");
    //? bekerja 5 hari = 1 minggu
    //? 9 jam/ hari
    //? upah jumlah jam * 25000
    //? lembur jumlah jam lembur * 40000
    //? minimal kerja / 1 minggu 45 jam
    //? total = upah +lembur


    int hari, lembur;
    cout << "Berapa hari ? "; cin >> hari;
    cout << "Berapa jam lembur ? "; cin >> lembur;

    int upah = hari * 9 * 25000;
    int upahLembur = lembur * 40000;
    int upahTotal;
    if (hari * 9 >= 45) {
        upahTotal = upah + lembur;
    } else {
        upahTotal = upah;
    }

    cout << "upah total : " << upahTotal << endl;

}

// 13 //? belanja
void belanja () {
    // system("clear");
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

// 14 //? Problem INF 28 August
void profesi() {
    // system("clear");
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

// 15 //? Perulangan 1
void perulangan1 () {
    // system("clear");
    int sampai;
    cout << "ingin keluarkan dari 1 sampai berapa? ";
    cin >> sampai;
    cout << endl;

    for (int mulai = 1; mulai <= sampai; mulai++) {
        cout << mulai << endl;
    }
}

// 16 //? Perulangan 2
void perulangan2() {
    // system("clear");
    int mulai, sampai, ulang;

    cout << "mulai dari berapa ? ";
    cin >> mulai;

    cout << "sampai berapa ? ";
    cin >> sampai;

    if (mulai > sampai) {
        for (ulang = mulai; ulang >= sampai; ulang--) {
            cout << ulang << endl;
        }
    } else if (sampai > mulai) {
        for (ulang = mulai; ulang <= sampai; ulang++) {
            cout << ulang << endl;
        }
    }
    else {
        cout << "mulai dan akhir tidak bisa sama, harap input yang benar" << endl << endl;
        return perulangan2();
    }
}

//17 //? Perulangan Rafly
void perulanganRafli() {
    // system("clear");

    int kata;

    for (kata = 1; kata <= 3; kata++) {
        cout << "Rafli" << endl;
    }
}

//18 //? Perulangan Angka
void perulanganAngka() {
    // system("clear");

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

}

//19
void perulanganAngka2() {
    // system("clear");

    for (int baris = 3; baris <= 5; baris++) {

        for (int angka = 5; angka >= baris; angka--) {
            cout << angka;
        }

        cout << endl;
    }

}

//20 //? Perulangan Pola - Pola 1
void pola1() {
    for (int i = 4; i >= 1; i--)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = i; k <= 4; k++)
        {
            cout << k;
        }

        cout << endl;
    }
}

//21 //? Perulangan Pola - Pola 2
void pola2() {
    for (int i = 1; i <= 4; i++)
    {
        int angka = 4;
        for (int j = 1; j <= 4 - i; j++)
        {

            cout << "  ";
        }
        for (int k = 1; k <= i * 2 - 1; k++)
        {
            cout << angka << " ";
            angka++;
        }

        cout << endl;
    }
}

//22 //? Perulangan Pola - Pola 3
void pola3() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {

            if (i == 1 ) {
                if (j == 1 || j == 5) cout << "*";
                else cout << " ";
            }
            else if (i == 2) {
                if (j == 1 || j == 2 || j == 4 || j == 5) cout << "*";
                else cout << " ";
            }
            else if (i == 3) cout << "*";

        }

        cout << endl;
    }
}

//23 //? Soal Cerita Kelompok Kambing
void kambing() {
    int n;
    cout << "Berapa kandang kambing yang kamu punya? "; cin >> n;

    int banyakKambing = 0;
    int jumlahKambing = 0;

    for (int ke = 1; ke <= n; ke++) {
        cout << "Kandang ke-" << ke << ": ";
        cin >> banyakKambing;
        jumlahKambing = jumlahKambing + banyakKambing;
    }

    cout << "Kamu mempunyai " << jumlahKambing << " kambing dari " << n << " kandang" << endl;
}

//24 //? Soal Cerita Kelas Lain 
void batikTravel() {
    int biayaCB = 200000;
    int biayaCJ = 250000;
    int biayaTol = 100000;
    int biayaJemput = 20000;
    int total = 0;

    cout<< "Selamat Datang Batik Travel" << endl;

    string nama;
    cout << "Nama : "; cin >> nama;

    int umur;
    cout << "Umur : "; cin >> umur;

    string alamat;
    cout << "Alamat : "; cin >> alamat;
    cout << endl;

    int rutePerjalanan;
    cout << "Pilih Rute Perjalanan : " << endl;
    cout << "1. Cirebon - Bandung" << endl;
    cout << "2. Cirebon - Jakarta" << endl;
    cout << "rute (1/2): "; cin >> rutePerjalanan;

    string tol, jemput;
    cout << "Apakah melewati jalan tol? (ya/tidak) "; cin >> tol;
    cout << "Apakah ingin dijemput di rumah? (ya/tidak) "; cin >> jemput;

    switch (rutePerjalanan)
    {
    case 1:
        if (tol == "ya" && jemput == "ya") {
            total = biayaTol + biayaCB + biayaJemput;
        } else if (tol == "ya") {
            total = biayaTol + biayaCB;
        } else if (jemput == "ya") {
            total = biayaJemput + biayaCB;
        } else {
            total = biayaCB;
        }
        break;
    
    case 2:
        if (tol == "ya" && jemput == "ya") {
            total = biayaTol + biayaCJ + biayaJemput;
        } else if (tol == "ya") {
            total = biayaTol + biayaCJ;
        } else if (jemput == "ya") {
            total = biayaJemput + biayaCJ;
        } else {
            total = biayaCJ;
        }
        break;
        default:
        cout << "input tidak valid";
        break;
    }

    cout << "Data Pelanggan : " << endl;
    cout << "Nama : " << nama;
    cout << "umur : " << umur;
    cout << "alamat : " << alamat;
    cout << "Rute Perjalanan : ";
    if (rutePerjalanan == 1) {
        cout << "Cirebon - Bandung";
    } else if (rutePerjalanan == 2) {
        cout << "Cirebon - Jakarta";
    }
}

//25 Array 2d //? implementasi matrix
void matrixWhile() {
    int matriks[3][5];

    int j = 0;
    while (j < 3) {

        int i = 0;
        while (i < 5) {

            cout << "Isi data [" << j << "][" << i << "] : ";
            cin >> matriks[j][i];

            i++;
        }

        j++;
    }

    j = 0;
    while (j < 3) {

        int i = 0;
        while (i < 5) {

            cout << matriks[j][i] << " ";

            i++;
        }
        cout << endl;

        j++;
    }
}

//26 Array 2d //? implementasi matrix dan operasi matematika
void matrixMath() {
    int x, y;
    cout << "input baris matrix : "; cin >> y;
    cout << "input kolom matrix : "; cin >> x;


    int matriks[y][x];
    
    cout << endl;
    for (int j = 0; j < y; j++) {
        for (int i = 0; i < x; i++) {

            cout << "Isi data [" << j << "][" << i << "] : ";
            cin >> matriks[j][i];

        }
    }

    float sum = 0;
    for (int j = 0; j < y; j++) {
        for(int i = 0; i < x; i++) {
            sum += matriks[j][i];
        }
    }

    float rata = sum / (x*y);

    cout << endl;
    cout << "Jumlah : " << sum << endl;
    cout << "Rata - Rata : " << rata << endl;
    cout << "Pangkat 2 : " << endl;

    int j = 0;
    while (j < y) { // baris

        int i = 0;
        while (i < x) { // kolomm
            cout << pow(matriks[j][i], 2) << " "; i++;
        }

        cout << endl;
        j++;
    }
}

//27 array 2d //? bubble sort
void bubbleSort() {
    //  int number[4] = {4, -3, 7, 1};
    int number[4];
    for (int i = 0; i < 4; i++) {
        cout << "masukan angka ke-" << i << " : "; cin >> number[i];
    }

    for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        if (number[j+1] < number[j]) {
            int temp = number[j];
            number[j] = number[j+1];
            number[j+1] = temp;
        }
    }
    }

    for (int i = 0; i < 4; i++) {
        cout << number[i] << " ";
    } cout << endl;
}

//28 nilai terendah //? 21 august
void nilaiTerendah() {
    int p,q,r,s;
    cout << "masukan nilai p : "; cin >> p;
    cout << "masukan nilai q : "; cin >> q;
    cout << "masukan nilai r : "; cin >> r;
    cout << "masukan nilai s : "; cin >> s;

    int nilaiTerendah = p;

    if (q < nilaiTerendah) {
        nilaiTerendah = q;
    }
    else if (r < nilaiTerendah) {
        nilaiTerendah = r;
    }
    else if (s < nilaiTerendah) {
        nilaiTerendah = s;
    } else {
        nilaiTerendah = p;
    }

    cout << "nilai terendah : " << nilaiTerendah << endl;
}

// deklarasi sub-program
float kelilingPersegi(float sisi); float luasPersegi(float sisi); void trapesium(); void persegiPanjang(); float luasLingkaran(float r); float keliingLingkaran(float r); void segitiga();

// 29 subprogram utama
void utama() {
    int bidang;
    cout << "Daftar bidang datar" << endl;
    cout << "--------------------" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Trapesium" << endl;
    cout << "3. Persegi Panjang" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "5. Segitiga" << endl;
    cout << "--------------------" << endl;
    cout << "Pilih bidang datar (1 - 5): "; cin >> bidang;

    // mau pake switch biar rapih hehe
    switch(bidang) {
        case 1:
            float sisi;
            cout << "masukan sisi : "; cin >> sisi;
            cout << "Keliling : " << kelilingPersegi(sisi) << endl;
            cout << "Luas : " << luasPersegi(sisi) << endl;
            break;
        case 2:
            trapesium();
            break;
        case 3:
            persegiPanjang();
            break;
        case 4:
            float r;
            cout << "masukan r : "; cin >> r;
            cout << "Keliling : " << keliingLingkaran(r) << endl;
            cout << "Luas : " << luasLingkaran(r) << endl;
            break;
        case 5:
            segitiga();
            break;
        default:
            cout << "masukan tidak sesuai" << endl;
            break;
    }

    
}

// 29 subprogram persegi
float kelilingPersegi(float sisi) {
    return 4 * sisi;
}

float luasPersegi(float sisi) {
    return sisi * sisi;
}

// 29 subprogram trapesium
void trapesium() {
    float a,b,c,d;
    cout << "alas atas : "; cin >> a;
    cout << "alas bawah : "; cin >> b;
    cout << "tinggi : "; cin >> c;
    cout << "sisi miring : "; cin >> d;
    cout << "Luas : " << 0.5 * (a + b) * c << endl;
    cout << "Keliling : " << 2 * d + a + b << endl;
}

// 29 subprogram persegi panjang
void persegiPanjang() {
    float p,l;
    cout << "panjang : "; cin >> p;
    cout << "lebar : "; cin >> l;
    cout << "Luas : " << p * l << endl;
    cout << "Keliling : " << 2 * (p + l) << endl;
}

// 29 subprogram lingkaran
float luasLingkaran(float r) {
    return PHI * r * r;
    //* PHI nya konstanta define
}

// 29 subprogram lingkaran
float keliingLingkaran(float r) {
    return 2 * PHI * r;
    //* PHI nya konstanta define
}

// 29 subprogram segitiga
void segitiga() {
    float a,t;
    cout << "alas : "; cin >> a;
    cout << "tinggi : "; cin >> t;
    cout << "Luas : " << 0.5 * a * t << endl;
    cout << "Keliling : " << 3 * a << endl; // sekalian keliling
}

// 30 mainan string
void stringThings() {
    cout << endl;
    char kata1[50], kata2[50];
    cout << "kata jangan ada spasi !\n";
    cout << "masukan kata 1 : "; cin >> kata1; 
    cout << "masukan kata 2 : "; cin >> kata2;
    cout << endl;

    cout << "panjang kata 1 : " << strlen(kata1) << endl;
    cout << "panjang kata 2 : " << strlen(kata2) << endl;
    cout << endl;
    cout << "gabungin kata 1 dan kata 2 : " << strcat(kata1, kata2) << endl;
    cout << "panjang kata 1 sekarang: " << strlen(kata1) << endl;
    cout << "isi kata 1 sekarang : " << kata1 << endl;
    cout << endl;
    cout << "isi kata 2 sekarang : " << kata2 << endl;
    cout << "gabungin kata 2 dan kata 1 : " << strcat(kata2, kata1) << endl;
    cout << "panjang kata 2 sekarang: " << strlen(kata2) << endl;
    cout << "isi kata 2 sekarang : " << kata2 << endl;
}

// 31 materi array 2d
void transposeMatrix() {
    cout << "masukan ordo kolom dan baris :" << endl;
    cout << "kolom : "; int kolom; cin >> kolom;
    cout << "baris : "; int baris; cin >> baris;
    int matriks[kolom][baris];

    int j = 0;
    while (j < kolom) {

        int i = 0;
        while (i < baris) {

            cout << "Isi data [" << j << "][" << i << "] : ";
            cin >> matriks[j][i];

            i++;
        }

        j++;
    }

    j = 0;
    while (j < kolom) {

        int i = 0;
        while (i < baris) {

            cout << matriks[j][i] << " ";

            i++;
        }
        cout << endl;

        j++;
    }

    cout << endl;
    cout << "Transpose Matrix : " << endl;
    j = 0;
    while (j < kolom) {

        int i = 0;
        while (i < baris) {

            cout << matriks[i][j] << " ";

            i++;
        }
        cout << endl;

        j++;
    }
}

// 0 //? main 
//! maintenance
void home() {
    // system("clear");
    cout << "Mohammad Evan Abygail Hezal XI-6 / 14\n";
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
    cout << "12. Karyawan Bekerja\n";
    cout << "13. Belanja\n";
    cout << "14. Profesi\n";
    cout << "15. Perulangan 1\n";
    cout << "16. Perulangan 2\n";
    cout << "17. Perulangan Rafli\n";
    cout << "18. Perulangan Angka j++\n";
    cout << "19. Perulangan Angka j--\n";
    cout << "20. Perulangan Pola 1\n";
    cout << "21. Perulangan Pola 2\n";
    cout << "22. Perulangan Pola 3\n";
    cout << "23. Soal Cerita Kelompok Kambing\n";
    cout << "24. Soal Cerita Kelompok Batik Travel\n";
    cout << "25. Array 2d (Matrix)\n";
    cout << "26. Array 2d (Matrix Math)\n";
    cout << "27. Bubble Sort Menaik\n";
    cout << "28. Nilai Terendah\n";
    cout << "29. Luas dan Keliling Bangun Datar\n";
    cout << "30. strcat strlen dan lain-lain\n";
    cout << "31. Transpose Matrix (array 2d)\n";
    cout << ">> ";

    cin >> pilih;
    cout << endl;
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
            karyawan();
            break;
        case 13:
            belanja();
            break;
        case 14:
            profesi();
            break;
        case 15:
            perulangan1();
            break;
        case 16:
            perulangan2();
            break;
        case 17:
            perulanganRafli();
            break;
        case 18:
            perulanganAngka();
            break;
        case 19:
            perulanganAngka2();
            break;
        case 20:
            pola1();
            break;
        case 21:
            pola2();
            break;
        case 22:
            pola3();
            break;
        case 23:
            kambing();
            break;
        case 24:
            batikTravel();
            break;
        case 25:
            matrixWhile();
            break;
        case 26:
            matrixMath();
            break;
        case 27:
            bubbleSort();
            break;
        case 28:
            nilaiTerendah();
            break;
        case 29:
            utama(); // sub-program utama, materi sub-program
            break;
        case 30:
            stringThings();
            break;
        case 31:
            transposeMatrix();
            break;
        default:
            cout << "Pilih angka 1 - 31 !" << endl << endl;
            // usleep(1000000);
            home();
            break;
    }
}

//! main
int main () {
    // PannDev

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
            cout << "Salah input. " << endl;
            break;
            // usleep(1000000);
        }
    } while (true);

    return 0;
}
