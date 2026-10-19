#include <iostream>
#include <vector>
using namespace std;
bool czy(int liczba){
    string napis = to_string(liczba);
    if(napis.at(0) == '-'){
        if(napis.at(1) == napis.at(napis.length() -1)){
            return true;
        }else{
            return false;
        }
    }else{
        if(napis.at(0) == napis.at(napis.length()-1)){
            return true;
        }else{
            return false;
        }
    }
}
int main(){
    int n;
    cout << "podaj n:";
    while(!(cin >> n)){
            cout << "bledny typ danych. sproboj ponownie: ";
            cin.clear();
            cin.ignore(1000,'\n');
        }
    int zmienna = 0;
    vector<int> vector;
    for(int i = 0;i <n;i++){
        while(!(cin >> zmienna)){
            cout << "bledny typ danych. sproboj ponownie: ";
            cin.clear();
            cin.ignore(1000,'\n');
        }
        vector.push_back(zmienna);
    }
    for(int x : vector){
        if(czy(x)){
            cout << x << ", ";
        }
    }
}