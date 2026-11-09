#include <iostream>
using namespace std;
struct bierka{
    string kolor;
    string figura;
    char oznaczenie;
};
void wyswietlanie(bierka tabela[8][8]){
    cout << "   a  b  c  d  e  f  g  h" << endl;
    cout << "8 "; for(bierka x : tabela[0]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 8" << endl;
    cout << "7 "; for(bierka x : tabela[1]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 7" << endl;
    cout << "6 "; for(bierka x : tabela[2]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 6" << endl;
    cout << "5 "; for(bierka x : tabela[3]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 5" << endl;
    cout << "4 "; for(bierka x : tabela[4]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 4" << endl;
    cout << "3 "; for(bierka x : tabela[5]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 3" << endl;
    cout << "2 "; for(bierka x : tabela[6]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 2" << endl;
    cout << "1 "; for(bierka x : tabela[7]){cout << '[';if(x.kolor == "czarny"){cout << "\033[38;2;92;51;23m" << x.oznaczenie << "\033[0m";}if(x.kolor == "bialy"){cout << "\033[38;2;245;222;179m" << x.oznaczenie << "\033[0m";}if(x.kolor == "brak"){cout << x.oznaczenie;}cout << ']';} cout << " 1" << endl;
    cout << "   a  b  c  d  e  f  g  h";
    
}
pair<int, int> wybor_bierki(bierka tabela[8][8]){
    string pole;
    cout << "wybierz pole: ";
    cin >> pole;
    int kolumna = pole[0] - 'a';
    int wiersz = pole[1] - '1';
    return {kolumna,wiersz};
    // dodać walidację czy na danym polu faktycznie stoi jakaś figura.
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
    cout << endl << "Nacisnij Enter, aby zakonczyc..." << flush;
    cin.get();
    auto wynik = wybor_bierki(szachownica);
    int i = wynik.first;
    int j = wynik.second;

    return 0;
}
