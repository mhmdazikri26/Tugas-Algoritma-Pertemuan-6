
#include <iostream>
using namespace std;

int main()
{
    int nilai, kehadiran;

    cout << "=== PROGRAM KELULUSAN MAHASISWA ===" << endl;

    cout << "Masukkan nilai ujian (0-100): ";
    cin >> nilai;

    cout << "Masukkan kehadiran (0-100): ";
    cin >> kehadiran;

    if (nilai >= 60)
    {
        if (kehadiran >= 75)
        {
            cout << "SELAMAT! Anda dinyatakan LULUS." << endl;
        }
        else
        {
            cout << "Anda TIDAK LULUS karena kehadiran kurang." << endl;
        }
    }
    else
    {
        cout << "Anda TIDAK LULUS karena nilai kurang." << endl;
    }

    return 0;
}
