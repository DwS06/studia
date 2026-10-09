#include <iostream>
using namespace std;
int main(){
    int num;
    bool is_it_valid = false;
    int valid_nums[11]={0,1,2,3,4,5,6,7,8,9,10};
    cout << "Podaj liczbę z przedzialu 0-10. ";
    while(!(cin >> num && num >=0 && num <=10)){
        cout << "Bledny input. Sproboj ponownie. ";
        cin.clear();
        cin.ignore(1000,'\n');
    }
    // cin >> num; //pobieranie liczby z klawiatury
    // cout << num;
    // for(int i:valid_nums){
    //         if(num == i){
    //             is_it_valid = true;
    //             break;
    //         }
    //     }
    // while(is_it_valid == false){
    //     cout << "Podana przez ciebie liczba nie miesci sie w zakresie. Sprobuj ponownie.";
    //     cin >> num; //pobieranie liczby z klawiatury
    //     for(int i:valid_nums){
    //         if(num == i){
    //             is_it_valid = true;
    //             break;
    //         }
    //     }
        

    // }
    if(num <=1 && num >=0){
        cout << "mierna";
    }
    if(num ==2 || num==3){
        cout << "niedostateczna";
    }
    if(num ==4||num==5){
        cout << "dostateczna";
    }
    if(num==6||num==7){
        cout << "dobra";
    }
    if(num==8||num==9){
        cout << "bardzo dobra";
    }
    if(num==10){
        cout << "celujaca";
    }
}