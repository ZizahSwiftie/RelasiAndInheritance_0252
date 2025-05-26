#ifndef ANAK_H
#define ANAK_H

class anak
{
public:
    string nama;
    anak(string pNama) : nama(pNama) 
    {
        cout << "Anak \"" << nama << "\" ada\n";
    }
    ~anak()
    {
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};
#endif

#ifndef IBU_H
#define IBU_H

class ibu
{
public:
    string nama;
    vector<anak> daftar_anak;

    ibu(string pNama) : nama(pNama) 
    {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
};
