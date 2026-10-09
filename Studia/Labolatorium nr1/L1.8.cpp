#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Podaj liczbe a: ";
    while (!(cin >> a)){
        cout <<"Zly typ danych. Sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cout << "Podaj liczbe b: ";
    while (!(cin >> b)){
        cout <<"Zly typ danych. Sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    if(a > b){
        cout << "wieksza liczba to: " << a;
    }
    if(b > a){
        cout << "wieksza liczba to: " << b;
    }
    if(a == b){
        cout << "liczby sa sobie rowne";
    }
    
}