#include <iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            cout << "Selamat Belajar diProdi TI UMY" << endl;
            throw 0.5; // melemparka sebuah integer maka
            cout << "Pernyataan tidak akan di eksekusi" << endl;
        }
        catch (int a)
        {
            // blok ini akan di eksekusi
            cout << " Pengecualian akan dieksekusi" << endl;

            catch (...)
            {
                //* jika selain integer maka blok ini akan di esekusi*/
                cout << "default Pengecualian diexsekusi" << endl;
            }
            return 0;
        }