#include <iostream>
#include <cmath>
using namespace std;
struct bierka{
    string kolor;
    string figura;
    char oznaczenie;
    bool atakowany = false;
    bool wybrany = false;
};
void wyswietlanie(bierka tabela[8][8]){
    cout << "\n   a  b  c  d  e  f  g  h" << endl;
    cout << "8 "; for(bierka x : tabela[0]){if(x.atakowany == true){cout << "\033[38;2;255;0;0m[\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m[\033[0m";}else{cout << '[';}if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}if(x.atakowany == true){cout << "\033[38;2;255;0;0m]\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m]\033[0m";}else{cout << ']';}} cout << " 8" << endl;
    cout << "7 "; for(bierka x : tabela[1]){if(x.atakowany == true){cout << "\033[38;2;255;0;0m[\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m[\033[0m";}else{cout << '[';}if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}if(x.atakowany == true){cout << "\033[38;2;255;0;0m]\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m]\033[0m";}else{cout << ']';}} cout << " 7" << endl;
    cout << "6 "; for(bierka x : tabela[2]){if(x.atakowany == true){cout << "\033[38;2;255;0;0m[\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m[\033[0m";}else{cout << '[';}if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}if(x.atakowany == true){cout << "\033[38;2;255;0;0m]\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m]\033[0m";}else{cout << ']';}} cout << " 6" << endl;
    cout << "5 "; for(bierka x : tabela[3]){if(x.atakowany == true){cout << "\033[38;2;255;0;0m[\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m[\033[0m";}else{cout << '[';}if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}if(x.atakowany == true){cout << "\033[38;2;255;0;0m]\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m]\033[0m";}else{cout << ']';}} cout << " 5" << endl;
    cout << "4 "; for(bierka x : tabela[4]){if(x.atakowany == true){cout << "\033[38;2;255;0;0m[\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m[\033[0m";}else{cout << '[';}if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}if(x.atakowany == true){cout << "\033[38;2;255;0;0m]\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m]\033[0m";}else{cout << ']';}} cout << " 4" << endl;
    cout << "3 "; for(bierka x : tabela[5]){if(x.atakowany == true){cout << "\033[38;2;255;0;0m[\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m[\033[0m";}else{cout << '[';}if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}if(x.atakowany == true){cout << "\033[38;2;255;0;0m]\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m]\033[0m";}else{cout << ']';}} cout << " 3" << endl;
    cout << "2 "; for(bierka x : tabela[6]){if(x.atakowany == true){cout << "\033[38;2;255;0;0m[\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m[\033[0m";}else{cout << '[';}if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}if(x.atakowany == true){cout << "\033[38;2;255;0;0m]\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m]\033[0m";}else{cout << ']';}} cout << " 2" << endl;
    cout << "1 "; for(bierka x : tabela[7]){if(x.atakowany == true){cout << "\033[38;2;255;0;0m[\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m[\033[0m";}else{cout << '[';}if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}if(x.atakowany == true){cout << "\033[38;2;255;0;0m]\033[0m";}else if(x.wybrany == true){cout <<"\033[38;2;0;185;0m]\033[0m";}else{cout << ']';}} cout << " 1" << endl;
    cout << "   a  b  c  d  e  f  g  h\n";
}
pair<int, int> wybor_pola(){
    string pole;
    cout << "wybierz pole: ";
    cin >> pole;
    int kolumna = pole[0] - 'a';
    int wiersz = '8' - pole[1];
    return {wiersz,kolumna};
}
// funkcja sprawdzajaca czy krol jest pod szachem

//dodać funkcje sprawdzającą czy ruch powoduje odkrycie króla na szacha
void czyszczenie(bierka tablica[8][8]){
    for(int wiersz = 0; wiersz < 8; wiersz++){
        for(int kolumna = 0; kolumna < 8; kolumna++){
            tablica[wiersz][kolumna].atakowany = false;
            tablica[wiersz][kolumna].wybrany = false;
        }
    }
}
void atakowany(pair<int,int> w_figury, string figura, string kolor,bierka tablica[8][8]){
    if(figura == "wierza"){
        for(int i = w_figury.first + 1; i < 8;i++){
            if(tablica[i][w_figury.second].figura != "puste_pole"){
                if(tablica[i][w_figury.second].kolor != kolor){
                    tablica[i][w_figury.second].atakowany = true;
                }
                break;
            }
        }
        for(int i = w_figury.second + 1; i < 8;i++){
            if(tablica[w_figury.first][i].figura != "puste_pole"){
                if(tablica[w_figury.first][i].kolor != kolor){
                    tablica[w_figury.first][i].atakowany = true;
                }
                break;
            }
        }
        for(int i = w_figury.first - 1; i >= 0;i--){
            if(tablica[i][w_figury.second].figura != "puste_pole"){
                if(tablica[i][w_figury.second].kolor != kolor){
                    tablica[i][w_figury.second].atakowany = true;
                }
                break;
            }
        }
        for(int i = w_figury.second - 1; i >= 0;i--){
            if(tablica[w_figury.first][i].figura != "puste_pole"){
                if(tablica[w_figury.first][i].kolor != kolor){
                    tablica[w_figury.first][i].atakowany = true;
                }
                break;
            }
        }
    }
    if(figura == "goniec"){
        int wiersz = w_figury.first,kolumna = w_figury.second;
        while(wiersz < 7 && kolumna < 7){
            wiersz++;
            kolumna++;
            if(tablica[wiersz][kolumna].figura != "puste_pole"){
                if(tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
                break;
            } 
        }
        wiersz = w_figury.first;
        kolumna = w_figury.second;
        while(wiersz >0 && kolumna < 7){
            wiersz--;
            kolumna++;
            if(tablica[wiersz][kolumna].figura != "puste_pole"){
                if(tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
                break;
            } 
        }
        wiersz = w_figury.first;
        kolumna = w_figury.second;
        while(wiersz >0 && kolumna >0){
            wiersz--;
            kolumna--;
            if(tablica[wiersz][kolumna].figura != "puste_pole"){
                if(tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
                break;
            } 
        }
        wiersz = w_figury.first;
        kolumna = w_figury.second;
        while(wiersz <7 && kolumna >0){
            wiersz++;
            kolumna--;
            if(tablica[wiersz][kolumna].figura != "puste_pole"){
                if(tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
                break;
            } 
        }
    }
    if(figura == "hetman"){
        int wiersz = w_figury.first,kolumna = w_figury.second;
        while(wiersz < 7 && kolumna < 7){
            wiersz++;
            kolumna++;
            if(tablica[wiersz][kolumna].figura != "puste_pole"){
                if(tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
                break;
            } 
        }
        wiersz = w_figury.first;
        kolumna = w_figury.second;
        while(wiersz >0 && kolumna < 7){
            wiersz--;
            kolumna++;
            if(tablica[wiersz][kolumna].figura != "puste_pole"){
                if(tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
                break;
            } 
        }
        wiersz = w_figury.first;
        kolumna = w_figury.second;
        while(wiersz >0 && kolumna >0){
            wiersz--;
            kolumna--;
            if(tablica[wiersz][kolumna].figura != "puste_pole"){
                if(tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
                break;
            } 
        }
        wiersz = w_figury.first;
        kolumna = w_figury.second;
        while(wiersz <7 && kolumna >0){
            wiersz++;
            kolumna--;
            if(tablica[wiersz][kolumna].figura != "puste_pole"){
                if(tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
                break;
            } 
        }
        for(int i = w_figury.first + 1; i < 8;i++){
            if(tablica[i][w_figury.second].figura != "puste_pole"){
                if(tablica[i][w_figury.second].kolor != kolor){
                    tablica[i][w_figury.second].atakowany = true;
                }
                break;
            }
        }
        for(int i = w_figury.second + 1; i < 8;i++){
            if(tablica[w_figury.first][i].figura != "puste_pole"){
                if(tablica[w_figury.first][i].kolor != kolor){
                    tablica[w_figury.first][i].atakowany = true;
                }
                break;
            }
        }
        for(int i = w_figury.first - 1; i >= 0;i--){
            if(tablica[i][w_figury.second].figura != "puste_pole"){
                if(tablica[i][w_figury.second].kolor != kolor){
                    tablica[i][w_figury.second].atakowany = true;
                }
                break;
            }
        }
        for(int i = w_figury.second - 1; i >= 0;i--){
            if(tablica[w_figury.first][i].figura != "puste_pole"){
                if(tablica[w_figury.first][i].kolor != kolor){
                    tablica[w_figury.first][i].atakowany = true;
                }
                break;
            }
        }
    }
    if(figura == "skoczek"){
        if(w_figury.first + 2 <= 7 && w_figury.second + 1 <=7){
            if(tablica[w_figury.first + 2][w_figury.second + 1].figura != "puste_pole" && tablica[w_figury.first + 2][w_figury.second + 1].kolor != kolor){
                tablica[w_figury.first + 2][w_figury.second + 1].atakowany = true;
            }
        }
        if(w_figury.first + 2 <= 7 && w_figury.second -1 >=0){
            if(tablica[w_figury.first + 2][w_figury.second - 1].figura != "puste_pole" && tablica[w_figury.first + 2][w_figury.second - 1].kolor != kolor){
                tablica[w_figury.first + 2][w_figury.second - 1].atakowany = true;
            } 
        }
        if(w_figury.first  - 2 >= 0 && w_figury.second -1 >=0){
            if(tablica[w_figury.first  - 2][w_figury.second - 1].figura != "puste_pole" && tablica[w_figury.first  - 2][w_figury.second - 1].kolor != kolor){
                tablica[w_figury.first  - 2][w_figury.second - 1].atakowany = true;
            }
        }
        if(w_figury.first  - 2 >= 0 && w_figury.second + 1 <= 7){
            if(tablica[w_figury.first  - 2][w_figury.second + 1].figura != "puste_pole" && tablica[w_figury.first  - 2][w_figury.second + 1].kolor != kolor){
                tablica[w_figury.first  - 2][w_figury.second + 1].atakowany = true;
            }
        }
        if(w_figury.second - 2 >= 0 && w_figury.first + 1 <= 7){
            if(tablica[w_figury.first + 1][w_figury.second - 2].figura != "puste_pole" && tablica[w_figury.first + 1][w_figury.second - 2].kolor != kolor){
                tablica[w_figury.first + 1][w_figury.second - 2].atakowany = true;
            }
        }
        if(w_figury.second - 2 >= 0 && w_figury.first - 1 >= 0){
            if(tablica[w_figury.first - 1][w_figury.second - 2].figura != "puste_pole" && tablica[w_figury.first - 1][w_figury.second - 2].kolor != kolor){
                tablica[w_figury.first - 1][w_figury.second - 2].atakowany = true;
            }
        }
        if(w_figury.second + 2 <= 7 && w_figury.first + 1 <= 7){
            if(tablica[w_figury.first + 1][w_figury.second + 2].figura != "puste_pole" && tablica[w_figury.first + 1][w_figury.second + 2].kolor != kolor){
                tablica[w_figury.first + 1][w_figury.second + 2].atakowany = true;
            }
        }
        if(w_figury.second + 2 <= 7 && w_figury.first - 1 >= 0){
            if(tablica[w_figury.first - 1][w_figury.second + 2].figura != "puste_pole" && tablica[w_figury.first - 1][w_figury.second + 2].kolor != kolor){
                tablica[w_figury.first - 1][w_figury.second + 2].atakowany = true;
            }
        }
    }
    if(figura == "krol"){
        for(int wiersz = w_figury.first - 1; wiersz <= w_figury.first + 1;wiersz++){
            for(int kolumna = w_figury.second - 1;kolumna <= w_figury.second + 1;kolumna++){
                if(tablica[wiersz][kolumna].figura != "puste_pole" && tablica[wiersz][kolumna].kolor != kolor){
                    tablica[wiersz][kolumna].atakowany = true;
                }
            }
        }
    }
}

bool is_legal(pair<int,int> w_figury, pair<int,int> w_ruchu,string figura, string kolor,bierka tablica[8][8]){
    bool legal = false;
    if(figura == "pion"){
        if(kolor == "bialy"){
            if(w_figury.first == 6){
                if((w_ruchu.first == 5 || w_ruchu.first == 4) && w_figury.second == w_ruchu.second && tablica[w_ruchu.first][w_ruchu.second].figura == "puste_pole"){ // ruch do przodu z poczatkowej pozycji dla bialych skonnczony
                    legal = true; 
                }
            }
            if(w_ruchu.first == w_figury.first - 1 && w_ruchu.second == w_figury.second && tablica[w_ruchu.first][w_ruchu.second].figura == "puste_pole"){
                legal = true;
            }
            if(w_ruchu.first == w_figury.first - 1 && (w_ruchu.second == w_figury.second + 1 || w_ruchu.second == w_figury.second - 1) && tablica[w_ruchu.first][w_ruchu.second].figura != "puste_pole"){
                legal = true;
            }
        }
        if(kolor == "czarny"){
            if(w_figury.first == 1){
                if((w_ruchu.first == 2 || w_ruchu.first == 3) && w_figury.second == w_ruchu.second && tablica[w_ruchu.first][w_ruchu.second].figura == "puste_pole"){ // ruch do przodu z poczatkowej pozycji dla bialych skonnczony
                    legal = true; 
                }
            }
            if(w_ruchu.first == w_figury.first + 1 && w_ruchu.second == w_figury.second && tablica[w_ruchu.first][w_ruchu.second].figura == "puste_pole"){
                legal = true;
            }
            if(w_ruchu.first == w_figury.first + 1 && (w_ruchu.second == w_figury.second + 1 || w_ruchu.second == w_figury.second - 1) && tablica[w_ruchu.first][w_ruchu.second].figura != "puste_pole" && tablica[w_figury.first][w_figury.second].kolor != tablica[w_ruchu.first][w_ruchu.second].kolor){
                legal = true;
            }
        }
        return legal;
    }
    if(figura == "wierza"){
        if(w_ruchu.first == w_figury.first){
            for(int i = w_figury.second;i <8;i++){
                if(w_ruchu.second == i && tablica[w_figury.first][w_figury.second].kolor != tablica[w_figury.first][i].kolor){
                    legal = true;
                }
                if(tablica[w_figury.first][i].figura != "puste_pole" && i != w_figury.second){
                    break;
                }
            }
            for(int i = w_figury.second;i >= 0;i--){
                if(w_ruchu.second == i && tablica[w_figury.first][w_figury.second].kolor != tablica[w_figury.first][i].kolor){
                    legal = true;
                }
                if(tablica[w_figury.first][i].figura != "puste_pole" && i != w_figury.second){
                    break;
                }
            }
        }
        if(w_ruchu.second == w_figury.second){
            for(int i = w_figury.first;i <8;i++){
                if(w_ruchu.first == i && tablica[w_figury.first][w_figury.second].kolor != tablica[i][w_figury.second].kolor){
                    legal = true;
                }
                if(tablica[i][w_figury.second].figura != "puste_pole" && i != w_figury.first){
                    break;
                }
            }
            for(int i = w_figury.first;i >= 0;i--){
                if(w_ruchu.first == i && tablica[w_figury.first][w_figury.second].kolor != tablica[i][w_figury.second].kolor){
                    legal = true;
                }
                if(tablica[i][w_figury.second].figura != "puste_pole" && i != w_figury.first){
                    break;
                }
            }
        }
        return legal;

    }
    if(figura == "goniec"){
        int wiersz_r = w_figury.first;
        int kolumna_r = w_figury.second;
        while(wiersz_r < 7 && kolumna_r < 7){
            wiersz_r++;
            kolumna_r++;
            
            if(wiersz_r == w_ruchu.first && kolumna_r == w_ruchu.second && tablica[w_figury.first][w_figury.second].kolor != tablica[wiersz_r][kolumna_r].kolor){
                legal = true;
                break;
            }
            if(tablica[wiersz_r][kolumna_r].figura != "puste_pole"){
                break;
            }
            
        }
        wiersz_r = w_figury.first;
        kolumna_r = w_figury.second;
        while(wiersz_r > 0 && kolumna_r < 7){
            wiersz_r--;
            kolumna_r++;
            
            if(wiersz_r == w_ruchu.first && kolumna_r == w_ruchu.second && tablica[w_figury.first][w_figury.second].kolor != tablica[wiersz_r][kolumna_r].kolor){
                legal = true;
                break;
            }
            if(tablica[wiersz_r][kolumna_r].figura != "puste_pole"){
                break;
            }
            
        }
        wiersz_r = w_figury.first;
        kolumna_r = w_figury.second;
        while(wiersz_r < 7 && kolumna_r > 0){
            wiersz_r++;
            kolumna_r--;
            
            if(wiersz_r == w_ruchu.first && kolumna_r == w_ruchu.second && tablica[w_figury.first][w_figury.second].kolor != tablica[wiersz_r][kolumna_r].kolor){
                legal = true;
                break;
            }
            if(tablica[wiersz_r][kolumna_r].figura != "puste_pole"){
                break;
            }
            
        }
        wiersz_r = w_figury.first;
        kolumna_r = w_figury.second;
        while(wiersz_r > 0 && kolumna_r > 0){
            wiersz_r--;
            kolumna_r--;
            
            if(wiersz_r == w_ruchu.first && kolumna_r == w_ruchu.second && tablica[w_figury.first][w_figury.second].kolor != tablica[wiersz_r][kolumna_r].kolor){
                legal = true;
                break;
            }
            if(tablica[wiersz_r][kolumna_r].figura != "puste_pole"){
                break;
            }
            
        }
        return legal;
    }
    if(figura == "hetman"){
        int wiersz_r = w_figury.first;
        int kolumna_r = w_figury.second;
        while(wiersz_r < 7 && kolumna_r < 7){
            wiersz_r++;
            kolumna_r++;
            
            if(wiersz_r == w_ruchu.first && kolumna_r == w_ruchu.second && tablica[w_figury.first][w_figury.second].kolor != tablica[wiersz_r][kolumna_r].kolor){
                legal = true;
                break;
            }
            if(tablica[wiersz_r][kolumna_r].figura != "puste_pole"){
                break;
            }
            
        }
        wiersz_r = w_figury.first;
        kolumna_r = w_figury.second;
        while(wiersz_r > 0 && kolumna_r < 7){
            wiersz_r--;
            kolumna_r++;
            
            if(wiersz_r == w_ruchu.first && kolumna_r == w_ruchu.second && tablica[w_figury.first][w_figury.second].kolor != tablica[wiersz_r][kolumna_r].kolor){
                legal = true;
                break;
            }
            if(tablica[wiersz_r][kolumna_r].figura != "puste_pole"){
                break;
            }
            
        }
        wiersz_r = w_figury.first;
        kolumna_r = w_figury.second;
        while(wiersz_r < 7 && kolumna_r > 0){
            wiersz_r++;
            kolumna_r--;
            
            if(wiersz_r == w_ruchu.first && kolumna_r == w_ruchu.second && tablica[w_figury.first][w_figury.second].kolor != tablica[wiersz_r][kolumna_r].kolor){
                legal = true;
                break;
            }
            if(tablica[wiersz_r][kolumna_r].figura != "puste_pole"){
                break;
            }
            
        }
        wiersz_r = w_figury.first;
        kolumna_r = w_figury.second;
        while(wiersz_r > 0 && kolumna_r > 0){
            wiersz_r--;
            kolumna_r--;
            
            if(wiersz_r == w_ruchu.first && kolumna_r == w_ruchu.second && tablica[w_figury.first][w_figury.second].kolor != tablica[wiersz_r][kolumna_r].kolor){
                legal = true;
                break;
            }
            if(tablica[wiersz_r][kolumna_r].figura != "puste_pole"){
                break;
            }
            
        }
        if(w_ruchu.first == w_figury.first){
            for(int i = w_figury.second;i <8;i++){
                if(w_ruchu.second == i && tablica[w_figury.first][w_figury.second].kolor != tablica[w_figury.first][i].kolor){
                    legal = true;
                }
                if(tablica[w_figury.first][i].figura != "puste_pole" && i != w_figury.second){
                    break;
                }
            }
            for(int i = w_figury.second;i >= 0;i--){
                if(w_ruchu.second == i && tablica[w_figury.first][w_figury.second].kolor != tablica[w_figury.first][i].kolor){
                    legal = true;
                }
                if(tablica[w_figury.first][i].figura != "puste_pole" && i != w_figury.second){
                    break;
                }
            }
        }
        if(w_ruchu.second == w_figury.second){
            for(int i = w_figury.first;i <8;i++){
                if(w_ruchu.first == i && tablica[w_figury.first][w_figury.second].kolor != tablica[i][w_figury.second].kolor){
                    legal = true;
                }
                if(tablica[i][w_figury.second].figura != "puste_pole" && i != w_figury.first){
                    break;
                }
            }
            for(int i = w_figury.first;i >= 0;i--){
                if(w_ruchu.first == i && tablica[w_figury.first][w_figury.second].kolor != tablica[i][w_figury.second].kolor){
                    legal = true;
                }
                if(tablica[i][w_figury.second].figura != "puste_pole" && i != w_figury.first){
                    break;
                }
            }
        }
        return legal;
    }
    if(figura == "skoczek"){
        if(abs(w_ruchu.first - w_figury.first) == 2){
            if(abs(w_ruchu.second - w_figury.second) == 1){
                if(tablica[w_ruchu.first][w_ruchu.second].kolor != kolor){
                    legal = true;
                }
            }
        }
        if(abs(w_ruchu.second - w_figury.second) == 2){
            if(abs(w_ruchu.first - w_figury.first) == 1){
                if(tablica[w_ruchu.first][w_ruchu.second].kolor != kolor){
                    legal = true;
                }
            }
        }
        return legal;
    }
    if(figura == "krol"){
        if(w_figury != w_ruchu){
            if(abs(w_figury.first - w_ruchu.first) <=1 && abs(w_figury.second - w_ruchu.second) <= 1){
                if(tablica[w_ruchu.first][w_ruchu.second].kolor != kolor){
                    legal = true;
                }
            }
        }
        return legal;
    }
    return false;
    //dodać ruch roszady
}

void ruch(bierka tablica[8][8],bierka puste_pole){
    string figura,kolor;
    pair<int, int> wspolzedne_figury;
    pair<int, int> wspolzedne_ruchu;
    do{
        do{
            czyszczenie(tablica);
            wyswietlanie(tablica);
            cout << "Wybierz pole z bierką ktorą chcesz wykonac ruch: ";
            wspolzedne_figury = wybor_pola();
            figura = tablica[wspolzedne_figury.first][wspolzedne_figury.second].figura;
            kolor = tablica[wspolzedne_figury.first][wspolzedne_figury.second].kolor;
            tablica[wspolzedne_figury.first][wspolzedne_figury.second].wybrany = true;
            atakowany(wspolzedne_figury, figura, kolor, tablica);
            wyswietlanie(tablica);
        }while(figura == "puste_pole");
        cout << "Wybierz pole na ktore chcesz sie ruszyc: ";
        wspolzedne_ruchu = wybor_pola();
        if(is_legal(wspolzedne_figury, wspolzedne_ruchu, figura, kolor, tablica) != true){
            cout << "\nTen ruch nie jest legalny. Sproboj ponownie\n";
        }
    }while(is_legal(wspolzedne_figury, wspolzedne_ruchu, figura, kolor, tablica) != true);
    if(is_legal(wspolzedne_figury, wspolzedne_ruchu, figura, kolor, tablica) == true){
        tablica[wspolzedne_ruchu.first][wspolzedne_ruchu.second] = tablica[wspolzedne_figury.first][wspolzedne_figury.second];
        tablica[wspolzedne_figury.first][wspolzedne_figury.second] = puste_pole;
    }
    

}
int main(){
    bierka pion_c;
    pion_c.kolor = "czarny";
    pion_c.figura = "pion";
    pion_c.oznaczenie = 'p';

    bierka wierza_c;
    wierza_c.kolor = "czarny";
    wierza_c.figura = "wierza";
    wierza_c.oznaczenie = 'W';

    bierka skoczek_c;
    skoczek_c.figura = "skoczek";
    skoczek_c.kolor = "czarny";
    skoczek_c.oznaczenie = 'S';
    
    bierka goniec_c;
    goniec_c.kolor = "czarny";
    goniec_c.figura = "goniec";
    goniec_c.oznaczenie = 'G';

    bierka hetman_c;
    hetman_c.kolor = "czarny";
    hetman_c.figura = "hetman";
    hetman_c.oznaczenie = 'H';

    bierka krol_c;
    krol_c.kolor = "czarny";
    krol_c.figura = "krol";
    krol_c.oznaczenie = 'K';
    
    bierka pion_b;
    pion_b.kolor = "bialy";
    pion_b.figura = "pion";
    pion_b.oznaczenie = 'p';

    bierka wierza_b;
    wierza_b.kolor = "bialy";
    wierza_b.figura = "wierza";
    wierza_b.oznaczenie = 'W';

    bierka skoczek_b;
    skoczek_b.figura = "skoczek";
    skoczek_b.kolor = "bialy";
    skoczek_b.oznaczenie = 'S';
    
    bierka goniec_b;
    goniec_b.kolor = "bialy";
    goniec_b.figura = "goniec";
    goniec_b.oznaczenie = 'G';

    bierka hetman_b;
    hetman_b.kolor = "bialy";
    hetman_b.figura = "hetman";
    hetman_b.oznaczenie = 'H';

    bierka krol_b;
    krol_b.kolor = "bialy";
    krol_b.figura = "krol";
    krol_b.oznaczenie = 'K';

    bierka puste_pole;
    puste_pole.kolor = "brak";
    puste_pole.figura = "puste_pole";
    puste_pole.oznaczenie = ' ';

    bierka szachownica[8][8] = {
        {wierza_c,skoczek_c,goniec_c,hetman_c,krol_c,goniec_c,skoczek_c,wierza_c},
        {pion_c,pion_c,pion_c,pion_c,pion_c,pion_c,pion_c,pion_c},
        {puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole},
        {puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole},
        {puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole},
        {puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole,puste_pole},
        {pion_b,pion_b,pion_b,pion_b,pion_b,pion_b,pion_b,pion_b},
        {wierza_b,skoczek_b,goniec_b,hetman_b,krol_b,goniec_b,skoczek_b,wierza_b}
    };
    // wyswietlanie(szachownica);
    while(true){
        ruch(szachownica, puste_pole);
        // wyswietlanie(szachownica);
    }
    cout << endl << "Nacisnij Enter, aby zakonczyc..." << flush;
    cin.ignore(1000,'\n');
    cin.get();
    

    return 0;
}
