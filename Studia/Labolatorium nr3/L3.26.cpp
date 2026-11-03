#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
    srand(time(0));
    vector<double> liczby;
    for(int i=0;i<10;i++){
        double random = (static_cast<double>(rand()) / RAND_MAX) * 30.0 - 10.0;
        liczby.push_back(random);
        cout << random << " "; 
    }
    cout << endl;
    for(double i : liczby){
        cout << ceil(i) << " ";
    }
}