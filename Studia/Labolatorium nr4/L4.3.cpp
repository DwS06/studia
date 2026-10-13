#include <iostream>
using namespace std;
int main(){
    string imie;
    cout << "podaj swoje imie: ";
    while(!(cin >> imie)){
        cout << "bledny typ danych.";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    if(imie.back() == 'a'){
        cout << "Kobieta." << endl;
    }else{
        cout << "Mezczyzna." << endl;
    }
    for(int i = imie.length()-1;i>=0;i--){
        cout << imie.at(i);
    }
}