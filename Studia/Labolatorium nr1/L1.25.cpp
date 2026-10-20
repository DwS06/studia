#include <iostream>
using namespace std;
bool czy_pitagorejska(int a, int b, int c){
    if(a * a + b * b == c * c){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout << czy_pitagorejska(3,4,5) << endl;
    cout << czy_pitagorejska(1,2,3);
    return 0;
}