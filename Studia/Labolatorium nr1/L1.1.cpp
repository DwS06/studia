#include <iostream>
using namespace std;
int main(){
    int n;
    string imie,nazwisko;
    cout << "Podaj n: ";
    while(!(cin >> n)){
        cout << "Bledny typ danych. Sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }   
    cout << "Podaj swoje Imie: ";
    while(!(cin >> imie)){
        cout << "Bledny typ danych. Sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cout << "Podaj swoje Nazwisko: ";
    while(!(cin >> nazwisko)){
        cout << "Bledny typ danych. Sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    for(int i = 0;i <n;i++){
        cout << imie << " " << nazwisko << endl;
    }
}