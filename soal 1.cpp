#include <iostream>
using namespace std;

int main(){

    //deklarasi variabel
    float absensi, tugas, uts, uas, nilai_akhir;
    char nilai_huruf;

    cout<<"program menghitung nilai akhir mahasiswa"<<endl;
    cout<<"----------------------------------------"<<endl;

    //proses input
    cout<<"masukan nilai absensi : ";
    cin>>absensi;

    cout<<"masukan nilai tugas : ";
    cin>>tugas;

    cout<<"masukan nilai uts     : ";
    cin>>uts;

    cout<<"masukan nilai uas     : ";
    cin>>uas;

    //rumus
    nilai_akhir=((absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4));

    if(nilai_akhir>=80){
        nilai_huruf='A';
    }else if (nilai_akhir>=70){
        nilai_huruf='B';
    }else if (nilai_akhir>=60){
        nilai_huruf='C';
    }else if (nilai_akhir>=50){
        nilai_huruf='D';
    }else {
        nilai_huruf='E';
    }

    //prooses output

    cout<<"nilai akhir : "<<nilai_akhir<<endl;
    cout<<"nilai huruf : "<<nilai_huruf<<endl;
}
