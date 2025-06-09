#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string namaFile;

    cout << "Masukkan nama file: ";
    cin >> namaFile;

    // operasi filedalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file untuk membuka
    outfile.open(namaFile + ".txt");

    cout << "<= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap kararakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q")
            break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // operasi file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file untuk memmbuka
    infile.open(namaFile + ".txt");

    cout << endl
         << ">= Membuka dan membaca file " << endl;
    // jika tidak ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan disini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akanmenampilkan ini
    else
        cout << "Unable to open file";
    return 0;
}
