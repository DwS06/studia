#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    // for(int i=0;i<100;i++){
    //     cout << rand()%21 -10 << ", ";
    // }
    int liczba;
    cout << "podaj liczbe: ";
    while(!(cin >> liczba)){
        cout << "bledny typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    float suma = 0;
    int liczba_liczb = 0;
    float losowa;
    while(suma < liczba){
        losowa=-10.0+20.0*rand()/(RAND_MAX);
        if(suma + losowa >liczba){
            break;
        }
        suma += losowa;
        cout << suma << ", ";
        liczba_liczb +=1;
    }
    
    cout << "srednia: " << (suma / liczba_liczb);
}
