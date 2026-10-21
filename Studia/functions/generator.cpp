#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
vector<int> generator(int amount = 100, int range = 100){
    
    vector<int> vector;
    srand(time(0));
    for(int i = 0; i< amount; i++){
        vector.push_back(rand() % range +1);
    }
    return vector;
}