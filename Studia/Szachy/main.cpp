#include <iostream>
using namespace std;
struct bierka{
    string kolor;
    string figura;
    char oznaczenie;
};
void wyswietlanie(char tabela[8][8]){
    cout << "   a  b  c  d  e  f  g  h" << endl;
    cout << "8 "; for(char x : tabela[0]){cout << '[' << x << ']';} cout << " 8" << endl;
    cout << "7 "; for(char x : tabela[1]){cout << '[' << x << ']';} cout << " 7" << endl;
    cout << "6 "; for(char x : tabela[2]){cout << '[' << x << ']';} cout << " 6" << endl;
    cout << "5 "; for(char x : tabela[3]){cout << '[' << x << ']';} cout << " 5" << endl;
    cout << "4 "; for(char x : tabela[4]){cout << '[' << x << ']';} cout << " 4" << endl;
    cout << "3 "; for(char x : tabela[5]){cout << '[' << x << ']';} cout << " 3" << endl;
    cout << "2 "; for(char x : tabela[6]){cout << '[' << x << ']';} cout << " 2" << endl;
    cout << "1 "; for(char x : tabela[7]){cout << '[' << x << ']';} cout << " 1" << endl;
    cout << "   a  b  c  d  e  f  g  h";
    
}
int main(){
    // char szachownica[8][8] = {
    //     {' ',' ',' ',' ',' ',' ',' ',' '},
    //     {' ',' ',' ',' ',' ',' ',' ',' '},
    //     {' ',' ',' ',' ',' ',' ',' ',' '},
    //     {' ',' ',' ',' ',' ',' ',' ',' '},
    //     {' ',' ',' ',' ',' ',' ',' ',' '},
    //     {' ',' ',' ',' ',' ',' ',' ',' '},
    //     {' ',' ',' ',' ',' ',' ',' ',' '},
    //     {' ',' ',' ',' ',' ',' ',' ',' '}
    // };

    bierka wierza;

    bierka szachownica[8][8] = {
        {'W','S','G','H','K','G','S','W'},
        {'p','p','p','p','p','p','p','p'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'p','p','p','p','p','p','p','p'},
        {'W','S','G','H','K','G','S','W'}
    };
    wyswietlanie(szachownica);
}
