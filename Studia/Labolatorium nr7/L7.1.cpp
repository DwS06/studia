#include <iostream>
#include <vector>
#include <limits>
using namespace std;
struct student{
    string nazwisko,kierunek;
    vector<vector<string>> przedmiot_ocena;
    float srednia;
};
student dodawanie(){
    float suma_ocen = 0.0;
    float liczba_ocen = 0.0;
    float srednia_ocen = 0.0;
    student student1;
    cout << "\nPodaj Nazwisko: ";
    cin >> student1.nazwisko;
    cout << "\nPodaj Kierunek: ";
    string kierunek = "";
    cin >> kierunek;
    student1.kierunek = kierunek;
    if(kierunek == "Informatyka"){
        student1.przedmiot_ocena = {
            {"matematyka"},
            {"informatyka"},
            {"fizyka"}
        };
    }
            cout << "Wprowadzaj oceny dla przedmiotu, jak chcesz przejsc do nastepnego przedmiotu kliknij enter. \n";

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (auto& x : student1.przedmiot_ocena) {
        cout << x.at(0) << ": ";
        string ocena;

        while (getline(cin, ocena) && !ocena.empty()) {
            x.push_back(ocena);
            suma_ocen += stoi(ocena);
            liczba_ocen += 1;
        }
    }
    srednia_ocen = suma_ocen / liczba_ocen;
    student1.srednia = srednia_ocen;
    return student1;
}
int main(){
    vector<student> studenci;
    cout << "dodawanie";
    while(true){
        cout << "aby zakaczyc wpisz 0";
        int x = 1;
        cin >> x;
        if(x == 0){
            break;
        }else{
            studenci.push_back(dodawanie());
        }
        
        
    }
    cout << "wprowadz srednia: ";
    float srednia;
    cin >> srednia;
    for(student s : studenci){
        if(s.srednia > srednia){
            cout << s.nazwisko << " " << s.srednia << endl;
        }
    }
    
}
