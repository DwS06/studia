#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    vector<double> liczby;
    int n = 10000;
    for(int i=0;i<n;i++){
        double random = (static_cast<double>(rand()) / RAND_MAX) * 2.0 - 1.0;
        if(random != 1){
            liczby.push_back(random);
            cout << random << " "; 
        }
    }
    int p1=0,p2=0,p3 =0,p4 = 0;
    for(double liczba : liczby){
        if(liczba >=-1 && liczba <-0.5){
            p1++;
        }
        if(liczba >=-0.5 && liczba <0){
            p2++;
        }
        if(liczba >=0 && liczba <0.5){
            p3++;
        }
        if(liczba >=0.5 && liczba <1){
            p4++;
        }
    }
    cout << endl << endl << p1 << " "<< p2 << " "<< p3 << " "<< p4 << " ";
}