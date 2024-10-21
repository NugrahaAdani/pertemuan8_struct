#include<iostream>
using namespace std;

struct zodiak{
   int tgl, bulan ,tahun;
};
const char* displaydata(zodiak);

int main(){
    zodiak a;
    cout << "==========    TENTUKAN ZOIAKMU!    ==========\n";
    cout << "Masukan Tanggal Lahir : "; cin >> a.tgl;
    cout << "Masukan Bulan Lahir   : "; cin >> a.bulan;
    cout << "Masukan Tahun Lahir   : "; cin >> a.tahun;
    cout << "=============================================\n";
    cout << "Tanggal Lahir Anda[Tgl-Bulan-tahun] : " << a.tgl << "-" << a.bulan << "-" << a.tahun << endl;
    const char* zod = displaydata(a);
    cout << "Zodiak Anda Adalah " << zod; 
return 0;
}

const char* displaydata(zodiak a){
    const char* zod[] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagitarius", "Capricorn"};

    if(a.tgl >= 20 && a.tgl <= 31 && a.bulan == 1 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 18 && a.bulan == 2 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[0];
    }
    else if(a.tgl >= 19 && a.tgl <= 29 && a.bulan == 2 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 20 && a.bulan == 3 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[1];
    }
    else if(a.tgl >= 21 && a.tgl <= 31 && a.bulan == 3 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 19 && a.bulan == 4 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[2];
    }
    else if(a.tgl >= 20 && a.tgl <= 30 && a.bulan == 4 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 20 && a.bulan == 5 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[3];
    }
    else if(a.tgl >= 21 && a.tgl <= 31 && a.bulan == 5 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 20 && a.bulan == 6 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[4];
    }
    else if(a.tgl >= 21 && a.tgl <= 30 && a.bulan == 6 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 22 && a.bulan == 7 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[5];
    }
    else if(a.tgl >= 23 && a.tgl <= 31 && a.bulan == 7 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 22 && a.bulan == 8 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[6];
    }
    else if(a.tgl >= 23 && a.tgl <= 31 && a.bulan == 8 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 22 && a.bulan == 9 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[7];
    }
    else if(a.tgl >= 23 && a.tgl <= 30 && a.bulan == 9 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 22 && a.bulan == 10 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[8];
    }
    else if(a.tgl >= 23 && a.tgl <= 31 && a.bulan == 10 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 21 && a.bulan == 11 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[9];
    }
    else if(a.tgl >= 22 && a.tgl <= 30 && a.bulan == 11 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 21 && a.bulan == 12 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[10];
    }
    else if(a.tgl >= 22 && a.tgl <= 31 && a.bulan == 12 && a.tahun >= 0 && a.tahun <= 3000 || a.tgl >= 1 && a.tgl <= 19 && a.bulan == 1 && a.tahun >= 0 && a.tahun <= 3000){
    return zod[11];
    }
    else{
        cout << "Angka yang anda masukan salah!";
    }
    return zod[0];
}