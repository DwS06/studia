#include <iostream>
#include <vector>
using namespace std;
bool czy_arytmetyczny(vector<float> x){
    if(x.at(1) - x.at(0) == x.at(3) - x.at(2)){
        return true;
    }else{
        return false;
    }
}
bool czy_geometryczny(vector<float> x){
    if((x.at(1) / x.at(0)) == (x.at(3) / x.at(2))){
        return true;
    }else{
        return false;
    }
}

int main(){
    int x;
    vector<float> ciag;
    for(int i=0;i<4;i++){
        cout << "Podaj wyraz ciagu: ";
        while(!(cin >> x)){
            
            cout << "bledny typ danych. sproboj ponownie: ";
            cin.clear();
            cin.ignore(1000,'\n');
        }
        ciag.push_back(x);
    }
    // for(int i:ciag){
    //     cout << i << " ";
    // }
    if(czy_arytmetyczny(ciag)==true){
        cout << "Ciag jest arytmetyczny." << endl;
    }else{
        cout << "Ciag nie jest arytmetyczny" << endl;
    }
    if(czy_geometryczny(ciag)==true){
        cout << "Ciag jest geometryczny.";
    }else{
        cout << "Ciag nie jest geometryczny";
    }

}
