#include <iostream>
#include <cmath>
using namespace std;
struct bierka{
    string kolor;
    string figura;
    char oznaczenie;
};
void wyswietlanie(bierka tabela[8][8]){
    cout << "\n   a  b  c  d  e  f  g  h" << endl;
    cout << "8 "; for(bierka x : tabela[0]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 8" << endl;
    cout << "7 "; for(bierka x : tabela[1]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 7" << endl;
    cout << "6 "; for(bierka x : tabela[2]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 6" << endl;
    cout << "5 "; for(bierka x : tabela[3]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 5" << endl;
    cout << "4 "; for(bierka x : tabela[4]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 4" << endl;
    cout << "3 "; for(bierka x : tabela[5]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 3" << endl;
    cout << "2 "; for(bierka x : tabela[6]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 2" << endl;
    cout << "1 "; for(bierka x : tabela[7]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 1" << endl;
    cout << "   a  b  c  d  e  f  g  h\n";
    
}
pair<int, int> wybor_pola(){
    string pole;
    cout << "wybierz pole: ";
    cin >> pole;
    int kolumna = pole[0] - 'a';
    int wiersz = '8' - pole[1];
    cout << wiersz << kolumna;
    return {wiersz,kolumna};
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
    return false;
}

void ruch(bierka tablica[8][8],bierka puste_pole){
    string figura,kolor;
    pair<int, int> wspolzedne_figury;
    pair<int, int> wspolzedne_ruchu;
    do{
        do{
            cout << "Wybierz pole z bierką ktorą chcesz wykonac ruch: ";
            wspolzedne_figury = wybor_pola();
            figura = tablica[wspolzedne_figury.first][wspolzedne_figury.second].figura;
            kolor = tablica[wspolzedne_figury.first][wspolzedne_figury.second].kolor;

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
    wyswietlanie(szachownica);
    while(true){
        ruch(szachownica, puste_pole);
        wyswietlanie(szachownica);
    }
    cout << endl << "Nacisnij Enter, aby zakonczyc..." << flush;
    cin.ignore(1000,'\n');
    cin.get();
    

    return 0;
}
