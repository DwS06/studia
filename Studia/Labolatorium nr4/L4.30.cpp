#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string tekst;
    char szukana_litera;
    int liczba_wystapien = 0;

    cout << "Podaj tekst: ";
    getline(cin, tekst);

    cout << "Podaj litere: ";
    cin >> szukana_litera;

    for(char znak : tekst){
        if(tolower(znak) == tolower(szukana_litera)){
            liczba_wystapien++;
        }
    }

    cout << "Liczba wystapien: " << liczba_wystapien << endl;
    cin.ignore(1000, '\n');
    cin.get();

}