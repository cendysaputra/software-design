/* Software Design - Forum Session 3
 * =================================
 * 
 * Nama    : Cendy Saputra
 * NIM     : 2802683883
 * Kelas   : JTCA - LEC
 * Program : Inheritance
*/


#include <iostream>
using namespace std;

// ===== INHERITANCE =====

// Parent class
class Sepatu {
public:
    // diwariskan ke semua child
    void dipakai() {
        cout << "Sepatu dipakai di kaki" << endl;
    }
    
    void dilepas() {
        cout << "Sepatu dilepas" << endl;
    }
    
    virtual void fungsi() {
        cout << "Untuk jalan" << endl;
    }
};

// Child 1
class SepatuOlahraga : public Sepatu {
public:
    void fungsi() override {
        cout << "Untuk lari dan olahraga" << endl;
    }
};

// Child 2
class SepatuKantor : public Sepatu {
public:
    void fungsi() override {
        cout << "Untuk kerja formal" << endl;
    }
};

int main() {
    SepatuOlahraga nikeку;
    SepatuKantor formalku;
    
    cout << "=== INHERITANCE ===" << endl;
    
    cout << "\n1. Sepatu Olahraga:" << endl;
    nikeку.dipakai();
    nikeку.fungsi();
    nikeку.dilepas();
    
    cout << "\n2. Sepatu Kantor:" << endl;
    formalku.dipakai();
    formalku.fungsi();
    formalku.dilepas();
    
    cout << "\nINHERITANCE:" << endl;
    cout << "Sama: dipakai(), dilepas()" << endl;
    cout << "Beda: fungsi()" << endl;
    
    return 0;
}
