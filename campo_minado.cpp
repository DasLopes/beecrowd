#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

void texto() {
puts("");
puts("      .--.                               .-..-. _                 .-.      ");
puts("     : .--'                              : `' ::_;                : :      ");
puts("     : :    .--.  ,-.,-.,-..---.  .--.   : .. :.-.,-.,-. .--.   .-' : .--. ");
puts("     : :__ ' .; ; : ,. ,. :: .; `' .; :  : :; :: :: ,. :' .; ; ' .; :' .; :");
puts("     `.__.'`.__,_;:_;:_;:_;: ._.'`.__.'  :_;:_;:_;:_;:_;`.__,_;`.__.'`.__.'");
puts("                           : :                                        ");
puts("                           :_;                                    ");
}
struct dados{
    string nome;
};

void bemVindo(){
    dados jogador;
    cout << endl;
    cout << "Insira seu nome para começar: ";
    getline(cin, jogador.nome);
    system("cls");
    cout << jogador.nome << "! O Campo Minado é um popular jogo de computador\npara um jogador.";
    cout << "Foi inventado por Robert Donner\nem 1989 e tem como objectivo ";
    cout << "revelar um campo de\nminas sem que alguma seja detonada.\n";
    cout << "O número 99 representa uma bomba.\n";
}

void menu(){
    cout << "\n\tQual é seu nível?\n\n";
    cout << "1 - Fácil com 5 bombas;\n";
    cout << "2 - Médio com 10 bombas;\n";
    cout << "3 - Difícil com 24 bombas.\n\n";
}

int main (){
cout << setlocale(LC_ALL, "Portuguese");
srand((int)time(NULL));

int l = 5, c = 5;
int x, y;
int cont = 5;
int mapa[l][c];
int jogo[c][l];

    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            jogo[i][j] = 0;
            mapa[i][j] = 0;
        }
    }

    texto();
    bemVindo();
    menu();

    int numBombas = 0;
    int opcao = 0;
    do{
        printf("Escolha uma opção abaixo: ");
        cin >> opcao;
        if (opcao == 1){
            numBombas = 5;
            break;
        }else if (opcao == 2){
            numBombas = 10;
            break;
        }else if(opcao == 3){
            numBombas = 24;
            break;
        }
    }while(true);

    int bomba = 99;
    for (int i = 0; i < numBombas; i++){
        do{
            x = rand() % l;
            y = rand() % c;
        }while(mapa[x][y] == bomba);
        mapa[x][y] = bomba;
    }

    int bombas = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (mapa[i][j] == 0){
                if (mapa[i-1][j-1] == bomba) bombas++;
                if (mapa[i-1][j] == bomba) bombas++;
                if (mapa[i-1][j+1] == bomba) bombas++;
                if (mapa[i][j-1] == bomba) bombas++;
                if (mapa[i][j+1] == bomba) bombas++;
                if (mapa[i+1][j-1] == bomba) bombas++;
                if (mapa[i+1][j] == bomba) bombas++;
                if (mapa[i+1][j+1] == bomba) bombas++;
                mapa[i][j] = bombas;
                bombas = 0;
            }
        }
    }

    int jogadas = 25 - numBombas;
    do{
        system("cls");
        cout << endl << "========== SUA JOGADA! ==========" << endl << endl;
        for (int i = 0; i < l; i++){
            for (int j = 0; j < c; j++){
                cout << jogo[i][j] << "\t";
            }
            cout << endl << endl;
        }
        do{
           do{
                cout << "Digite o número da linha: ";
                cin >> x;
            }while(x < 1 || x > 5);
            do{
                cout << "Digite o número da coluna: ";
                cin >> y;
            }while(y < 1 || y > 5);
        }while(jogo[x][y] != 0);

        jogadas--;

        x -= 1;
        y -= 1;
        jogo[x][y] = mapa[x][y];


        if(jogo[x][y] == bomba){
            system("cls");
            cout << endl << "=========== GAME OVER ===========" << endl << endl;
                for (int i = 0; i < l; i++){
                    for (int j = 0; j < c; j++){
                        cout << mapa[i][j] << "\t";
                    }
                    cout << endl << endl;
                }
            break;
        }

        if (jogadas == 0 && jogo[x][y] != bomba){
            system("cls");
            cout << endl << "=========== PARABÉNS! ===========" << endl << endl;
            for (int i = 0; i < l; i++){
                for (int j = 0; j < c; j++){
                    cout << mapa[i][j] << "\t";
                }
                cout << endl << endl;
            }
            break;
        }
    }while(true);
}
