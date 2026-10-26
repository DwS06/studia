#include <iostream>
using namespace std;
int main(){
    cout << "Podaj n: ";
    int n;
    cin >> n;
    int tab[n];
    for(int i = 0; i< n;i++){
        int x;
        cin >> x;
        tab[i] = x;
    }
    for(int i = 0; i< n;i += 2){
        cout << tab[i] << ", ";
    }
}