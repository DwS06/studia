#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    float **tablica;
    float * tablica2;
    cout << "podaj n: ";
    int n;
    cin >> n;
    cout << "\npodaj m: ";
    int m;
    cin >> m;
    int liczba;
    tablica = new float*[n];
    for(int i=0;i<n;i++){
        tablica[i] = new float[m];
    }
    cout << "resr 1 \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tablica[i][j] = (static_cast<float>(rand()) / RAND_MAX) * 50.0;
            if(tablica[i][j] > 25){
                liczba++;
            }
        }
    }
    float tablica3[liczba];
    int k = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tablica[i][j] > 25){
              tablica3[k] = tablica[i][j];
              k++;  
            }
        }
    }
    for(float x : tablica3){
        cout << x << ", ";
    }
    
cout << endl << "Nacisnij Enter, aby zakonczyc..." << flush;
    cin.ignore(1000,'\n');
    cin.get();
}