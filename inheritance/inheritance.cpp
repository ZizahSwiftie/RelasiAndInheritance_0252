#include <iostream>
#include <string>
using namespace std;

// Kelas dasar
class orang {
public:
    string nama;

    orang(string pNama) : nama(pNama) {
        cout << "Orang dibuat\n" << endl;
    }

    ~orang() {
        cout << "Orang dihapus\n" << endl;
    }

    int jumlah(int a, int b) {
        return a + b;
    }
};
