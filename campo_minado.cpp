#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

void buffer(void){ // função para limpar buffer na memória
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}
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
int anoAtual(){
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano = data ->tm_year + 1900;
    return ano;
}
void bemVindo(){
    dados jogador;
    cout << endl;
    cout << "Insira seu nome para começar: ";
    getline(cin, jogador.nome);
    system("clear");
    cout << jogador.nome << " O Campo Minado é um popular jogo de computador para um jogador." << endl;
    cout << "Foi inventado por Robert Donner em 1989 e tem como objectivo" << endl;
    cout << "revelar um campo de minas sem que alguma seja detonada." << endl;
}

void menu(){
    printf("\n\tQual é seu nível?\n\n");
    printf("1 - Fácil com 5 bombas;\n");
    printf("2 - Médio com 10 bombas;\n");
    printf("3 - Difícil com 24 bombas.\n\n");
}



int main (){
setlocale(LC_ALL, "Portuguese");
srand((int)time(NULL));

int l = 5, c = 5;
int x, y;
int cont = 5;
int mapa[l][c];
int jogo[c][l];




    texto();
    bemVindo();
    menu();

    int numBombas;
    int opcao;
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



    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            jogo[i][j] = 0;
        }
    }

    int bomba = 99;
    for (int i = 0; i < numBombas; i++){
        do{
            x = rand() % l;
            y = rand() % c;
        }while(mapa[x][y] == bomba);
        mapa[x][y] = bomba;
    }


    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (mapa[i][j] != bomba) mapa[i][j] = 0;
        }
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

cout << "teste de mesa" << endl;
for (int i = 0; i < l; i++){
    for (int j = 0; j < c; j++){
        cout << mapa[i][j] << " ";
    }
    cout << endl;
}
cout << "teste de mesa" << endl;

    int jogadas = 25 - numBombas;
    do{

        cout << endl << "Insira sua jogada!" << endl << endl;

        for (int i = 0; i < l; i++){
             for (int j = 0; j < c; j++){
                cout << jogo[i][j] << "\t";
            }
            cout << endl;
        }

        do{
            cout << "Digite o número da linha: ";
            cin >> x;
        }while(x < 1 || x > 5);
        do{
            cout << "Digite o número da coluna: ";
            cin >> y;
        }while(y < 1 || y > 5);

        jogadas--;

        x -= 1;
        y -= 1;
        jogo[x][y] = mapa[x][y];

        if (jogadas == 0){
            cout << endl << "PARABÉNS!" << endl << endl;
            for (int i = 0; i < l; i++){
                for (int j = 0; j < c; j++){
                    cout << mapa[i][j] << "\t";
                }
                cout << endl;
            }
            break;
        }else if(jogo[x][y] == bomba){
            cout << endl << "GAME OVER" << endl << endl;
                for (int i = 0; i < l; i++){
                    for (int j = 0; j < c; j++){
                        cout << mapa[i][j] << "\t";
                    }
                    cout << endl;
                }
            break;
        }else{
            cout << endl << "PARABÉNS! PRÓXIMA JOGADA" << endl << endl;
            for (int i = 0; i < l; i++){
                for (int j = 0; j < c; j++){
                    cout << jogo[i][j] << "\t";
                }
                cout << endl;
            }
        }
    }while(true);
}
