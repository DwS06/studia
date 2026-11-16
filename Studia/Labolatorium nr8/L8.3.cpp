#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
void BubleSort(int n, double T[])
{
    int i,j;
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - 1; j++)
            if(T[j] > T[j + 1])
                swap(T[j],T[j + 1]);
}
void BubleSortReverse(int n, double T[])
{
    int i,j;
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - 1; j++)
            if(T[j] < T[j + 1])
                swap(T[j],T[j + 1]);
}
int main(){
    srand(time(0));
    double * tablica;
    cout << "podaj n: ";
    int n;
    cin >> n;
    tablica = new double[n];
    for(int i = 0;i<n;i++){
        double x = (static_cast<double>(rand()) / RAND_MAX) * 200.0 - 100.0;
        tablica[i] = x;
    }
    BubleSort(n,tablica);
    for(int i = 0;i<n;i++){
        cout << tablica[i] << endl;
    }
    cout << endl;

    BubleSortReverse(n,tablica);
    for(int i = 0;i<n;i++){
        cout << tablica[i] << endl;
    }
    double mediana;
    if(n%2 == 0){
        mediana = (tablica[n/2 - 1] + tablica[n/2]) / 2.0;
    }else{
        mediana = tablica[n/2];
    }
    cout << "\n mediana: " << mediana;
    cout << endl << "Nacisnij Enter, aby zakonczyc..." << flush;
    cin.ignore(1000,'\n');
    cin.get();
    
    
}