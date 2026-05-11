#include <string>
#include <iostream>
using namespace std;

class Jantung {
public:
    Jantung() {
        cout << "Jantung Ditambah\n";
    }
    ~Jantung() {
        cout << "Jantung Dimatikan\n";
    }
};

class Manusia {
private:
    string nama;
    Jantung jantung;
public:
    Manusia(const string& name) : nama(name) {
        cout << "Manusia " << nama << " Dibuat\n";
    }
