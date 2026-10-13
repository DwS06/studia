#include <iostream>
#include <vector>
using namespace std;
vector<string> f(string x){
    vector<string> ciagi;
    string ciag_tymczasowy;
    for(int i = 0; i < x.length();i++){
        if((int)x[i] >96 && (int)x[i]<123){
            ciag_tymczasowy.push_back(x[i]);
        }else{
            if(ciag_tymczasowy.length() >=2){
                ciagi.push_back(ciag_tymczasowy);
                ciag_tymczasowy ="";
            }else{
                ciag_tymczasowy = "";
            }
        }
    }
    return(ciagi);
}
int main(){
    vector<string> vector = f("dDASsaDORrekWSD*");
    cout << "podciagi: ";
    for(string i : vector){
        cout << i << ", ";
    }
    cout << endl << "liczba: " << vector.size();

}