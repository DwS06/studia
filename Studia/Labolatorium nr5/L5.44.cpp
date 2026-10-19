#include <iostream>
using namespace std;
void prostokat(int a, int b){
    for(int i = 0 ; i<b;i++){
        if(i == 0 || i == b -1){
            
            for(int j = 0;j < a;j++){
                cout << "U";
            }
            cout << endl;
        }else{
            cout << "U";
            for(int j = 1;j < a-1;j++){
                cout << " ";
            }    
            cout << "U" << endl;
        }
    }
    //return 0;
}
int podawanie1(){
    int a;
    cout << "Podaj a: ";
    while(!(cin >> a)){
        cout << "bledny typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    return a;
}
int podawanie2(){
    int b;
    cout << "Podaj b: ";
    while(!(cin >> b)){
        cout << "bledny typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    return b;
}
int main(){
    int a = podawanie1();
    int b = podawanie2();
    prostokat(a, b);
}