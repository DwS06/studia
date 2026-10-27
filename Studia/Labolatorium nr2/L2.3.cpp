#include <iostream>
#include <vector>
using namespace std;
void program(vector<int> ciag, int x){
    for(int i : ciag){
        if(i % 10 == x){
            cout << i << ", ";
        }
    }
}
vector<int> wprowadzanie_danych(){
    vector<int> ciag;
    int x;
    cout << "Podawaj liczby.\n";
    cout << "Zakoncz literką.\n";
    cout << "Podaj pierwsza liczbe: ";
    while(cin >> x){
        "Podaj nastepna liczbe: ";
        ciag.push_back(x);
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return ciag;
}
int main(){
    vector<int> ciag = wprowadzanie_danych();
    cin.clear();
    int x;
    cout << "Podaj cyfrę: ";
    cin.get();
    cin >> x;
    cout << "Liczby konczace sie na " << x << ": ";
    program(ciag, x);
}