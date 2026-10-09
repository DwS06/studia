#include <iostream>
using namespace std;
int main(){
    string imie;
    cout << "Podaj swoje imie: ";
    while(!(cin >> imie)){
        cout << "Zly typ danych. Sproboj ponowie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    for(int i=0;i<5;i++){
        cout << imie << endl;
    }
}