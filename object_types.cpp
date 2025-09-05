/* Software Design - Forum Session 3
 * =================================
 * 
 * Nama    : Cendy Saputra
 * NIM     : 2802683883
 * Kelas   : JTCA - LEC
 * Program : Object Types
*/


#include <iostream>
using namespace std;

// 1. INTERFACE
class Mainan {
public:
    virtual void dimainkan() = 0;
};

// 2. ABSTRACT CLASS
class MainanListrik : public Mainan {
public:
    void nyalakan() {
        cout << "Tekan tombol ON" << endl;
    }
    
    void matikan() {
        cout << "Tekan tombol OFF" << endl;
    }
    
    virtual void dimainkan() = 0;
};

// 3. CONCRETE CLASS
class Robot : public MainanListrik {
public:
    void dimainkan() override {
        cout << "Robot jalan dan ngomong" << endl;
    }
};

class MobilRC : public MainanListrik {
public:
    void dimainkan() override {
        cout << "Mobil RC jalan pakai remote" << endl;
    }
};

int main() {
    cout << "=== OBJECT TYPES ===" << endl;
    
    Robot robotku;
    MobilRC mobilku;
    
    cout << "\n1. Main Robot:" << endl;
    robotku.nyalakan();
    robotku.dimainkan();
    robotku.matikan();
    
    cout << "\n2. Main Mobil RC:" << endl;
    mobilku.nyalakan();
    mobilku.dimainkan();
    mobilku.matikan();
    
    cout << "\n=== PENJELASAN ===" << endl;
    cout << "Interface: 'Semua mainan bisa dimainkan'" << endl;
    cout << "Abstract: 'Mainan listrik ada tombol ON/OFF'" << endl;
    cout << "Concrete: 'Robot & Mobil RC siap main'" << endl;
    
    return 0;
}
