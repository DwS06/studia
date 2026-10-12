#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x = 10, max = 0,num = 0; 
    for(int i=1;x!=0;i++){
        cout << "(" << i <<")";  
        cin >> x;
        if(x == 0){
            break;
        }
        if(x > max){
            max = x;
            num = i;
        }
    }
    cout << "Najwieksza liczba: " << max << ", na miejscu: "<< num; 
}