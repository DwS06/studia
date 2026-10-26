#include <iostream>
#include <vector>
#include "../functions/generator.cpp"
using namespace std;
void algorithm(vector<int> vector){
    bool istnieje = false;
    for(int i : vector){
        if(i % 2 == 0){
            break;
        }
        if(to_string(i).back() == '7'){
            cout << i << endl;
            istnieje = true;
        }
    }
    if(!istnieje){
        cout << "Brak liczb nieparzystych zakonczonych cyfra 7.";
    }
}
int main(){
    // vector<int> ciag = {13,23,35,63,27,10};
    vector<int> ciag;
    ciag = generator();//moja autorska funkcja generująca losowe liczby
    for(int i = 0; i < ciag.size()-1; i++){
        if(ciag.at(i) % 2 == 0){
            ciag.at(i) += 1;
        }
    }
    if(ciag.at(ciag.size()-1) % 2 != 0){
        ciag.at(ciag.size()-1) += 1;
    }
    algorithm(ciag);
    return 0;
}