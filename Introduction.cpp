#include <iostream>
using namespace std;

class Mahasiswa 
{

public:

    int nim ;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM :" << nim << endl;
        cout << "Nama :" << nama << endl;
        cout << "Nilai:" << nilai << endl;
    }
};

int main()
{
   Mahasiswa mhs;
   mhs.nim = 20210140081;
   mhs.nama ="Ilham Fauzi";
   mhs.nilai = 90.5;
}

