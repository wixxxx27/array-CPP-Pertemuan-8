// NAMA : DWIYANDRA RAYSHA PUTRA SYAWAL 
// NPM : 2410631170069 

#include <iostream>
using namespace std;

struct zodiac {
    int hari;
    int bln;
    int thn;
};

 const char* getBulan(int bln) {
    const char* namaBulan[] = {
        "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"
    };
    return namaBulan[bln - 1]; // Menggunakan bln - 1 untuk mulai dari 0 karena array dimulai dari indeks 0
}

const char* getZodiak(zodiac tgl) {
    const char* tandazodiak[] = {
        "Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"
    };
    
    if ((tgl.bln == 1 && tgl.hari >= 20) || (tgl.bln == 2 && tgl.hari <= 18)) {
        return tandazodiak[1]; // Aquarius
    } else if ((tgl.bln == 2 && tgl.hari >= 19) || (tgl.bln == 3 && tgl.hari <= 20)) {
        return tandazodiak[2]; // Pisces
    } else if ((tgl.bln == 3 && tgl.hari >= 21) || (tgl.bln == 4 && tgl.hari <= 19)) {
        return tandazodiak[3]; // Aries
    } else if ((tgl.bln == 4 && tgl.hari >= 20) || (tgl.bln == 5 && tgl.hari <= 20)) {
        return tandazodiak[4]; // Taurus
    } else if ((tgl.bln == 5 && tgl.hari >= 21) || (tgl.bln == 6 && tgl.hari <= 20)) {
        return tandazodiak[5]; // Gemini
    } else if ((tgl.bln == 6 && tgl.hari >= 21) || (tgl.bln == 7 && tgl.hari <= 22)) {
        return tandazodiak[6]; // Cancer
    } else if ((tgl.bln == 7 && tgl.hari >= 23) || (tgl.bln == 8 && tgl.hari <= 22)) {
        return tandazodiak[7]; // Leo
    } else if ((tgl.bln == 8 && tgl.hari >= 23) || (tgl.bln == 9 && tgl.hari <= 22)) {
        return tandazodiak[8]; // Virgo
    } else if ((tgl.bln == 9 && tgl.hari >= 23) || (tgl.bln == 10 && tgl.hari <= 22)) {
        return tandazodiak[9]; // Libra
    } else if ((tgl.bln == 10 && tgl.hari >= 23) || (tgl.bln == 11 && tgl.hari <= 21)) {
        return tandazodiak[10]; // Scorpio
    } else if ((tgl.bln == 11 && tgl.hari >= 22) || (tgl.bln == 12 && tgl.hari <= 21)) {
        return tandazodiak[11]; // Sagittarius
    } else {
        return tandazodiak[0]; // Capricorn
    }
}

int main() {
    zodiac tgl;
    
    cout << "Masukkan Tanggal lahir: ";
    cin >> tgl.hari;
    cout << "Masukkan Bulan lahir (angka): ";
    cin >> tgl.bln;
    cout << "Masukkan Tahun lahir: ";
    cin >> tgl.thn;
    
    const char* namaBulan = getBulan(tgl.bln);
    const char* zodiak = getZodiak(tgl);
    
    cout << "Tanggal lahir anda[tgl-bln-thn]: " << tgl.hari << "-" << namaBulan << "-" << tgl.thn << endl;
    cout << "Zodiak Anda adalah: " << zodiak << endl;

    return 0;
}
