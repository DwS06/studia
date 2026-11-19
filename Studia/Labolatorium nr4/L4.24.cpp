#include <iostream>
#include <string>
using namespace std;
int main(){
    string c1;
    getline(cin, c1);
    for(int i = 1; i < c1.size();){
        if(c1.at(i) == ' ' && c1.at(i - 1) == ' '){
            c1.erase(i, 1);
        }else{
            i++;
        }
    }
    cout << c1;
    cin.ignore(1000, '\n');
    cin.get();
}