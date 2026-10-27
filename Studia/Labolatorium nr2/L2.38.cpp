#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
vector<int> generator(){
    vector<int> ciag;
    srand(time(0));
    for(int i = 0;i < 10; i++){
        int random = rand() % 20001 - 10000;
    ciag.push_back(random);
    cout << random << ", ";
    }
    cout << "\n----------------------------------------------------------------------------------------------------------------\n";
    return ciag;
}
int program(vector<int> ciag){
    int szukana;
    bool first = true;
    for(int i : ciag){
        string liczba = to_string(i);
        if(liczba.length() % 2 == 1){
            if(first){
                szukana = i;
                first = false;
            }else{
                if(i > szukana){
                    szukana = i;
                }
            }
        }
    }
    return szukana;
}
int main(){
    cout << program(generator());
}
