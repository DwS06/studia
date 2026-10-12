#include <iostream>
using namespace std;
float zamien_na_C(float x){
   return(((x-32)*5)/9);
}
float zamien_na_F(float x){
    return(x*9/5+32);
}
int main(){
    float temp;
    cout << "wprowac temperature. potem podaj jednostke.: ";
    while(!(cin >> temp)){
        cout << "bledny typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cout << "c - celciusze, f - fahrenheity: ";
    char x;
    while(!(cin >> x) /*|| x != 'c' || x != 'f'*/){
        cout << "bledny typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    switch (x)
    {
    case 'c':
        cout << zamien_na_F(temp) << "F" << endl;
        break;
    
    case 'f':
    cout << zamien_na_C(temp) << "C" << endl;
        break;
    }
    
}