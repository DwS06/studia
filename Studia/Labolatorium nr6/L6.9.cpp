#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int n = rand() % 6;
    int m = rand() % 6;
    cout << n << "," << m  << endl << endl;
    int tab[n][m];
    for(int i =0;i < n;i++){
        for(int j=0; j<m;j++){
            tab[i][j] = rand() % 20 - 10;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int suma = 0, suma_min, suma_wiersz;
    bool first = true;
    for(int i =0;i < n;i++){
        suma = 0;
        for(int j=0; j<m;j++){
            suma += tab[i][j];
        }
        if(first){
            suma_min = suma;
            suma_wiersz = i;
            first = false;
        }else{
            if(suma < suma_min){
                suma_min = suma;
                suma_wiersz= i;
            }
        }
    }
    int iloczyn = 1, iloczyn_max, iloczyn_kolumna;
    first = true;
    for(int j = 0;j<m;j++){
        iloczyn = 1;
        for(int i=0;i<n;i++){
            iloczyn = iloczyn * tab[i][j];
        }
        if(first){
            iloczyn_max = iloczyn;
            iloczyn_kolumna = j;
            first = false;
        }
        else{
            if(iloczyn > iloczyn_max){
                iloczyn_max = iloczyn;
                iloczyn_kolumna = j;
            }
        }
    }
    int t1[n];
    int t2[m];
    for(int i = 0;i<n; i++){
        t1[i] = tab[i][iloczyn_kolumna];
    }
    for(int i = 0;i<m; i++){
        t2[i] = tab[suma_wiersz][i];
    }
    cout << "{";
    for(int i: t1){
        cout << i << ", ";
    }
    cout << "}" << endl << "{";
    for(int i: t2){
        cout << i << ", ";
    }
    cout << "}";
}