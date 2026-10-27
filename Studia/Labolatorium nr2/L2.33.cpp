#include <iostream>
using namespace std;
bool program(int x){
    int suma = 0, iloczyn = 1;
    string str_liczba = to_string(x);
    for(char i : str_liczba){
        if( i == '-'){
            continue;
        }
        suma += int(i - '0');
        iloczyn *= int(i - '0');
    }
    cout << suma << endl << iloczyn << endl;

    if(suma > iloczyn){
        return true;
    }else{
        return false;
    }
}
int main(){
    int liczba;
    cin >> liczba;
    cout << program(liczba);

    return 0;
}