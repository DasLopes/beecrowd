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
    int pontos;
};

void bemVindo(){
    cout << "\n";
    system("cls");
    cout << "O Campo Minado é um popular jogo de computador\npara um jogador. ";
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
    dados jogador;
    jogador.pontos = 0;
    cout << "Insira seu nome para começar: ";
    getline(cin, jogador.nome);
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

    int nb = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (mapa[i][j] == 0){
                if (i == 0 && j == 0){
                    for (int lin = 0; lin <= 1; lin++){
                        for (int col = 0; col <= 1; col++){
                            if (mapa[lin][col] == bomba) nb++;
                        }
                    }
                    mapa[i][j] = nb;
                    nb = 0;
                }else if (i == 1 && j == 0){
                    for (int lin = 0; lin <= 2; lin++){
                        for (int col = 0; col <= 1; col++){
                            if (mapa[lin][col] == bomba) nb++;
                        }
                    }
                    mapa[i][j] = nb;
                    nb = 0;
                }else if (i == 2 && j == 0){
                        for (int lin = 1; lin <= 3; lin++){
                            for (int col = 0; col <= 1; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 3 && j == 0){
                        for (int lin = 2; lin <= 4; lin++){
                            for (int col = 0; col <= 1; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 4 && j == 0){
                        for (int lin = 3; lin <= 4; lin++){
                            for (int col = 0; col <= 1; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 0 && j == 1){
                        for (int lin = 0; lin <= 1; lin++){
                            for (int col = 0; col <= 2; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 1 & j == 1){
                        for (int lin = 0; lin <= 2; lin++){
                            for (int col = 0; col <= 2; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 2 && j == 1){
                        for (int lin = 1; lin <= 3; lin++){
                            for (int col = 0; col <= 2; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 3 && j == 1){
                        for (int lin = 2; lin <= 4; lin++){
                            for (int col = 0; col <= 2; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 4 && j == 1){
                        for (int lin = 3; lin <= 4; lin++){
                            for (int col = 0; col <= 2; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 0 && j == 2){
                        for (int lin = 0; lin <= 1; lin++){
                            for (int col = 1; col <= 3; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 1 && j == 2){
                        for (int lin = 0; lin <= 2; lin++){
                            for (int col = 1; col <= 3; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 2 && j == 2){
                        for (int lin = 1; lin <= 3; lin++){
                            for (int col = 1; col <= 3; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 3 && j == 2){
                        for (int lin = 2; lin <= 4; lin++){
                            for (int col = 1; col <= 3; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 4 && j == 2){
                        for (int lin = 3; lin <= 4; lin++){
                            for (int col = 1; col <= 3; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 0 && j == 3){
                        for (int lin = 0; lin <= 1; lin++){
                            for (int col = 2; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 1 && j == 3){
                        for (int lin = 0; lin <= 2; lin++){
                            for (int col = 2; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 2 && j == 3){
                        for (int lin = 1; lin <= 3; lin++){
                            for (int col = 2; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 3 && j == 3){
                        for (int lin = 2; lin <= 4; lin++){
                            for (int col = 2; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 4 && j == 3){
                        for (int lin = 3; lin <= 4; lin++){
                            for (int col = 2; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else  if (i == 0 && j == 4){
                        for (int lin = 0; lin <= 1; lin++){
                            for (int col = 3; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 1 && j == 4){
                        for (int lin = 0; lin <= 2; lin++){
                            for (int col = 3; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 2 && j == 4){
                        for (int lin = 1; lin <= 3; lin++){
                            for (int col = 3; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 3 && j == 4){
                        for (int lin = 2; lin <= 4; lin++){
                            for (int col = 3; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }else if (i == 4 && j == 4){
                        for (int lin = 3; lin <= 4; lin++){
                            for (int col = 3; col <= 4; col++){
                                if (mapa[lin][col] == bomba) nb++;
                            }
                        }
                        mapa[i][j] = nb;
                        nb = 0;
                    }
            }
        }
    }
    int jogadas = 25 - numBombas;
    do{
        system("cls");
        cout << "\n============== SUA JOGADA! ==============\n\n";
        cout << "\t1\t2\t3\t4\t5\n\n\n";
        for (int i = 0; i < l; i++){
            cout << i+1 << "\t";
            for (int j = 0; j < c; j++){
                cout << jogo[i][j] << "\t";
            }
            cout << "\n\n\n";
        }
        do{
           do{
                cout << "Digite o número da linha: ";
                cin >> x;
                x -= 1;
            }while(x < 0 || x > 4);
            do{
                cout << "Digite o número da coluna: ";
                cin >> y;
                y -= 1;
            }while(y < 0 || y > 4);
            if (jogo[x][y] == 0) break;
            else cout << "\nJOGADA INVALIDA: DIGITE NÚMEROS DIFERENTES\n\n";
        }while(true);

        jogo[x][y] = mapa[x][y];

        if(mapa[x][y] == bomba){
            system("cls");
            cout << "\n============== GAME OVER ================\n\n";
            cout << "\t1\t2\t3\t4\t5\n\n\n";
            for (int i = 0; i < l; i++){
                cout << i+1 << "\t";
                for (int j = 0; j < c; j++){
                    cout << mapa[i][j] << "\t";
                }
                cout << "\n\n";
            }
            cout << jogador.nome << "! Obrigado por jogar meu jogo.\n";
            cout << "Nesta partida você ganhou " << jogador.pontos << " pontos.\n\n";
            break;
        }
        jogador.pontos++;
        jogadas--;
        if (jogadas == 0){
            if (numBombas == 24) jogador.pontos = 1000;
            system("cls");
            cout << "\n============== PARABÉNS! ================\n\n";
            cout << "\t1\t2\t3\t4\t5\n\n\n";
            for (int i = 0; i < l; i++){
                cout << i+1 << "\t";
                for (int j = 0; j < c; j++){
                    cout << mapa[i][j] << "\t";
                }
                cout << "\n\n";
            }
            cout << jogador.nome << "! Obrigado por jogar meu jogo.\n";
            cout << "Nesta partida você ganhou " << jogador.pontos << " pontos.\n\n";
            break;
        }
    }while(true);
}
