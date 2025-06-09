#include <iostream>
#include <exception>
// untuk objek exeption yang akan digunakan
#include <array>
// untuk objek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1 :....
    try
    {
        array<int, 3> data = {1, 2, 3};
        // pesan array integer 3c element
        cout << data.at(5) << endl;
        // memanggil element array elemet ke 5
    }
    catch (exception &e)
    {
        // penangkap menggunakan objek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/
    }
}
cout << "Baris Program Yang terakhir" << endl;
/*Penanda 2: bahwa program berjalan tanpa henti meskipun terjadi kesalahan*/
return 0;