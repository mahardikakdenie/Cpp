#include <iostream>
#include <string>

using namespace std;

// class dengan Construktor
class Mahasiswa
{
public:
    string Nama;
    string Nim;
    string Jurusan;
    double Ipk;

    //construktor dengan parameter

    Mahasiswa(string inputNama, string inputNim, string inputJurusan, double inputIpk)
    {
        this->Nama = inputNama;
        this->Nim = inputNim;
        this->Jurusan = inputJurusan;
        this->Ipk = inputIpk;

        cout << "\nNama Mahasiswa : " << this->Nama << endl;
        cout << "Nomor Induk Mahasiswa : " << this->Nim << endl;
        cout << "Nama Jurusan : " << this->Jurusan << endl;
        cout << "Index Prestasi Kumulatif : " << this->Ipk << endl;
    }
};
int main(int argc, char const *argv[])
{
    int jumlah;
    string nama[100], nim[100], Jurusan[100];
    double Ipk[100];
    system("cls");
    cout << "masukan jumlah mahasiswa : ";
    cin >> jumlah;
    MainMenu:
    system("cls");
    if (jumlah < 0)
    {
        for (int i = 0; i < jumlah; i++)
        {
            system("cls");
            cout << "\nMasukan Nama : ";
            cin >> nama[i];
            cout << "Masukan Nim : ";
            cin >> nim[i];
            cout << "Masukan Jurusan : ";
            cin >> Jurusan[i];
            cout << "Masukan Ipk : ";
            cin >> Ipk[i];
        }
        system("cls");
        for (int i = 0; i < jumlah; i++)
        {
            Mahasiswa Mahasiswa3 = Mahasiswa(nama[i], nim[i], Jurusan[i], Ipk[i]);
        }
    }
    else
    {
        goto MainMenu;
    }
    
}
