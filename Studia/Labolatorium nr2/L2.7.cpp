#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int min = NULL, iloczyn;
    srand(time(0));
    vector<int> vector;
    for (int i = 0;i <10;i++){
        vector.push_back(rand()%21);
    }
    for(int i:vector){
        cout << i << " ";
    }
    cout << endl << vector.size();
    
    for(int i = 0;i<vector.size()-1;i++){
            iloczyn = vector.at(i)*vector.at(i+1);
            if(min == NULL){
                min = iloczyn;
            }
            if(iloczyn < min){
                min = iloczyn;
            }
            cout << endl << iloczyn;
    }
    cout << "\nNajmniejszy iloczyn: " << min;

}