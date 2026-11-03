#include <iostream>
#include <ctime>
#include <vector>
#include <cmath>
using namespace std;
vector<double> f(double a,double b,double c){
    double p = -(b/(2*a));
    double q = -((pow(b,2)-(4*a*c))/(4*a));
    vector<double> wspolzedne;
    wspolzedne.push_back(p);
    wspolzedne.push_back(q);
    return wspolzedne;
}
void pkt_a(){
    double a,b,c;
    cout << "wpisz a,b,c: ";
    cin >> a;
    cin >> b;
    cin >> c;
    vector<double> wynik = f(a,b,c);
    for(double i : wynik){
        cout << i << " ";
    }
}
void pkt_b(){
    double a,b,c;
    srand(time(0));
    a = rand() % 21 - 10;
    b = rand() % 21 - 10;
    c = rand() % 21 - 10;
    vector<double> wynik = f(a,b,c);
    for(double i : wynik){
        cout << i << " ";
    }
}
void pkt_c(){
    double a,b,c;
    srand(time(0));
    a = (static_cast<double>(rand()) / RAND_MAX) * 20.0 - 10.0;
    b = (static_cast<double>(rand()) / RAND_MAX) * 20.0 - 10.0;
    c = (static_cast<double>(rand()) / RAND_MAX) * 20.0 - 10.0;
    vector<double> wynik = f(a,b,c);
    for(double i : wynik){
        cout << i << " ";
    }
}
int main(){
    cout << "podpunkt a" << endl;
    pkt_a();
    cout << endl << "---------------------------------------------------------------" << endl;
    cout << "podpunkt b" << endl;
    pkt_b();
    cout << endl << "---------------------------------------------------------------" << endl;
    cout << "podpunkt c" << endl;
    pkt_c();
}