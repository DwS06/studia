#include <iostream>
#include <conio.h>
using namespace std;
void typ_znaku(int x){
    if(x >=48 && x <=48+10){
        cout << (char)x << " -> " << "cyfra";
    }
    else if(x >=97 && x <= 97+26){
        cout << (char)x << " -> "<< "mala litera";
    }
    else if(x >=65 && x <= 65+26){
        cout<< (char)x << " -> " << "duza litera";
    }
    else if(x == 13){
        cout << "Enter";
    }
    else if(x == 27){
        cout << "ESC";
    }
    else if(x == 0 || x == 224){
        x = _getch();
        if(x == 75){
            cout << "strzalka w lewo";
        }
        else if(x == 77){
            cout << "strzalka w prawo";
        }
        else if(x == 59){
            cout << "f1";
        }
        else{
            cout << "inny klawisz";
        }
    }
    else{
        cout << "inny klawisz";
    }
    cout << endl;
}
int main(){
    while(true){
        int x;
        x = _getch();
        typ_znaku(x);
    }
}