#include <iostream>
#include <vector>
#include <ctime>
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
vector<int> generator(){
    vector<int> vector;
    srand(time(0));
    for(int i = 0; i< 100; i++){
        int x = rand() % 201;
        if(x % 2 == 0){
            x += 1;
        }
        vector.push_back(x);
    }
    int x = rand() % 201;
    if(x % 2 != 0) x++;
    vector.push_back(x);
    return vector;
}
int main(){
    // vector<int> ciag = {13,23,35,63,27,10};
    vector<int> ciag;
    ciag = generator();
    algorithm(ciag);
    return 0;
}
