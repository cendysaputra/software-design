/* Software Design - Forum Session 3
 * =================================
 * 
 * Nama    : Cendy Saputra
 * NIM     : 2802683883
 * Kelas   : JTCA - LEC
 * Program : Data Abstraction - Lampu
*/


#include <iostream>
using namespace std;

class Lampu {
private:
    bool nyala;
    
public:
    Lampu() {
        nyala = false;
    }
    
    // Operasi user
    void tekanSaklar() {
        if (nyala == false) {
            nyala = true;
            cout << "Lampu NYALA :D" << endl;
        } else {
            nyala = false;
            cout << "Lampu MATI :(" << endl;
        }
    }
    
    void cekStatus() {
        if (nyala == true) {
            cout << "Status: NYALA" << endl;
        } else {
            cout << "Status: MATI" << endl;
        }
    }
};

int main() {
    Lampu lampuKamar;
    
    cout << "\n=== CONTOH : DATA ABSTRACTION ===" << endl;
    
    lampuKamar.cekStatus();
    lampuKamar.tekanSaklar();
    lampuKamar.tekanSaklar();
    
    cout << "\nDATA ABSTRACTION:" << endl;
    cout << "User tahu: tekanSaklar() & cekStatus()" << endl;
    cout << "User tidak tahu: bagaimana 'nyala' disimpan" << endl;
    
    return 0;
}


/* Penjelasan
 * 1. private = Bagian yang gak bisa diakses user
 * 2. public = Bagian yang bisa user akses
 * 3. nyala = false; = lampu kondisi mati saat dibuat
 * 4. void tekanSaklar = Operasi untuk nyala/mati lampu
 * 
 * Tambahan
 * User hanya tahu pada "tekan saklar", tidak perlu tahu bagaimana variabel nyala bekerja di memori
 */

/* Referensi
 * 1. Turning LED on and off with C++, 2013. https://forum.arduino.cc/t/turning-led-on-and-off-with-c-using-cppwindows/186503
 */
