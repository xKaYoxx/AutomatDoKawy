#include <iostream>
using namespace std;

class Automat {
  public:
    int ilosc_wody;
    int temp_wody;
    
    void setter(int wartosc_i_wody, int wartosc_temp_wody) {
        ilosc_wody = wartosc_i_wody;
        temp_wody = wartosc_temp_wody;
    }
    
    void nalej_wode() {
        if(ilosc_wody<=10) {
            cout <<"Dolej wody " << endl;
        } else {
            cout <<"Poziom wody jest w normie " << endl;
        }
    }
    
        void sprawdz_temp_wody() {
        if(temp_wody<=100) {
            cout <<"Woda nie jest wystarczająco ciepła " << endl; 
        } else {
            cout <<"Woda jest wystarczająco ciepła " << endl;
        }
    }
    
    void wsyp_kawe() {
        cout <<"Kawa została wsypana " << endl;
    }
    
    void poloz_kubek() {
        cout <<"Kubek został położony " << endl;
    }
    
    void gotowe() {
        cout <<"Kawa została przygotowana, ciesz się jej smakiem " << endl;
    }
};

int main()
{
    Automat kawa;
    kawa.setter(10,100);
    kawa.nalej_wode();
    kawa.sprawdz_temp_wody();
    kawa.wsyp_kawe();
    kawa.poloz_kubek();
    kawa.gotowe();

    return 0;
}
