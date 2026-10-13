#include <iostream>
using namespace std;
int f(string tekst){
    bool duza_litera;
    int liczba_zdan = 0;
    for(char a : tekst){
        if(int(a)>64 && int(a) <91){
            duza_litera = true;
        }
        if(a =='.' && duza_litera == true){
            liczba_zdan +=1;
            duza_litera = false;
        }
    }
    return(liczba_zdan);
}
int main(){
    string tekst = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean auctor nulla tellus, eget egestas velit molestie a. Vivamus bibendum dolor et felis tempus, ut facilisis nisi lacinia. Proin elementum massa sapien, quis tempus felis iaculis at. Aliquam finibus velit eu condimentum facilisis. Duis porttitor dolor id facilisis aliquam. Fusce a commodo arcu, vel tempus justo. Fusce ac nulla pulvinar, tincidunt orci id, imperdiet ex. Curabitur id velit vitae massa commodo tincidunt ac vitae turpis. Aenean elit erat, tristique ac sem sagittis, ultricies molestie lectus. Mauris sed lobortis sem. Integer velit enim, commodo id urna non, cursus mattis mi. Pellentesque eu pulvinar magna. Duis placerat imperdiet dictum. Phasellus sed mauris massa. Fusce commodo tristique pellentesque.";
    cout << "liczba zdan: " << f(tekst);
}
