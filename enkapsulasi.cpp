#include <iostream>
using namespace std;

class remoteLampu{
private:
    string SaklarNo[10];
public:
    void setSaKlarNo(int i, string value){
        SaklarNo[i] = value;
    }
    string getSaKlarNo(int i) {
        return SaklarNo[i];
    }
};
int main(){
    remoteLampu LampuRumah;
    LampuRumah.setSaKlarNo(0, "Lampur Teras Ruma");
    LampuRumah.setSaKlarNo(1, "Lampu Ruang Tamu");
    LampuRumah.setSaKlarNo(2, "Lampu Kamar Tidur");
    LampuRumah.setSaKlarNo(3, "Lampu Dapur");
    cout << LampuRumah.getSaKlarNo(0) << endl;
    cout << LampuRumah.getSaKlarNo(1) << endl;
    cout << LampuRumah.getSaKlarNo(2) << endl;
    cout << LampuRumah.getSaKlarNo(3) << endl;
    return 0;
}