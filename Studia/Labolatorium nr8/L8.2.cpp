#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    char * tablica;
    cout << "podaj n: ";
    int n;
    cin >> n;
    cout << endl;
    string samogloski = "aeiouy";
    tablica = new char [n];
    for(int i = 0; i<n; i++){
        char x = rand() % 26 + 97;
        tablica[i] = x;
        
        for(char a : samogloski){
            if(x == a){
                cout << x << ", ";
            }
        }
    }
    cout << endl << "Nacisnij Enter, aby zakonczyc..." << flush;
    cin.ignore(1000,'\n');
    cin.get();
    return 0;
}