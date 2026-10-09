#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c;
    cout << "Podaj a: ";
    while(!(cin >> a)){
        cout << "zly typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cout << "Podaj b: ";
    while(!(cin >> b)){
        cout << "zly typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    cout << "Podaj c: ";
    while(!(cin >> c)){
        cout << "zly typ danych. sproboj ponownie: ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    vector<int> numbers;
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    sort(numbers.begin(), numbers.end());
    for(int i:numbers){
        cout << i << " ";
    }
    for(auto it = numbers.rbegin(); it != numbers.rend(); ++it){
        cout << *it << " ";
    }
}