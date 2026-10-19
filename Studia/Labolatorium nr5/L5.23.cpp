#include <iostream>
#include <cmath>
using namespace std;
int silnia(int x){
    int wynik = 1;
    for(int i = 1; i<=x;i++){
        wynik = wynik * i;
    }
    return wynik;
}
int main(){
    int n;
    cout << "Podaj n: ";
    while(!(cin >> n)){
        cout << "bledny typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    int wynik;
    for(int i = 1; i<=n;i++){
        int a;

        cout << "Podaj a: ";
        while(!(cin >> a)){
            cout << "bledny typ danych. sproboj ponownie: ";
            cin.clear();
            cin.ignore(1000,'\n');
        }
        if(a > pow(2, i) || a < silnia(i)){
            wynik += 1;
        }
    }
    cout << "Liczby spelniajace warunek: " <<  wynik;
}