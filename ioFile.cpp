#include <fsteam>
#include <iostream>
#include <string>
using namespace std;

// steramreaderandWriter_nim

int main()
{
    string baris;

    // operasi filedalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file untuk membuka
    outfile.open("contohfile.txt");

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
    }
}
