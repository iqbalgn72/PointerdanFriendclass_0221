#include <iostream>
using namespace std;

class siswa;
class orang
{
    private:
    string nama;

    public:
        void setNama (string pNama);
        friend class siswa;

};

class siswa 
{
    private:
        int Id;

    public:
        void setId(int pId);
        void didsplayAll(orang&a)
};

void siswa::displayALL(orang &a)
{
    cout << id << endl << a.nama;
}
void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setId(intpId)
{
    id = pId;
}
int main()
{
    orang joko;
    joko.setNama("joko susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayALL(joko);
    return 0
}