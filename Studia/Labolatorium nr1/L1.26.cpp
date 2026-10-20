#include <iostream>
#include <vector>
using namespace std;
bool czy_jest_nierosnacy(vector<int> vector){
    int prev;
    bool czy_pierwszy = true;
    for(int i : vector){
        if(i == 0){
            break;
        }
        if(czy_pierwszy){
            prev = i;
            czy_pierwszy = false;
            continue;
        }
        if(prev < i){
            return false;
        }
        prev = i;
    }
    return true;
}
bool czy_jest_niemalejacy(vector<int> vector){
    int prev;
    bool czy_pierwszy = false;
    for(int i : vector){
        if(i == 0){
            break;
        }
        if(czy_pierwszy){
            prev = i;
            czy_pierwszy = false;
            continue;
        }
        if(prev > i){
            return false;
        }
        prev = i;
    }
    return true;
}
int main(){
    // vector<int> ciag = {10,10,5,4,0};
    // vector<int> ciag = {3,4,4,10,0};
    vector<int> ciag = {4,5,2,3,6,1,0};
    
    if(!czy_jest_niemalejacy(ciag) && !czy_jest_nierosnacy(ciag)){
        cout << "Ciag nie jest uporzadkowany.";
    }
    if(czy_jest_niemalejacy(ciag)){
        cout << "Ciag jest uporzadkowany niemalejaca.";
    }
    if(czy_jest_nierosnacy(ciag)){
        cout << "Ciag jest uporzadkowany nierosnaco.";
    }
    return 0;
}