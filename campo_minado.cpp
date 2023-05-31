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
    int idade;
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
    cout << "Por favor! Poderia inseria seu ano de nascimento: ";
    cin >> jogador.idade;
    system("clear");
    cout << jogador.nome << "! É um prazer te conhecer. ";
    cout << "Neste ano você você completa " << anoAtual() - jogador.idade << "." << endl;
    cout << "Campo minado é um popular jogo de computador para um jogador." << endl;
    cout << "Foi inventado por Robert Donner em 1989 e tem como objectivo" << endl;
    cout << "revelar um campo de minas sem que alguma seja detonada." << endl;
}

void menu(){
    printf("\n\tPrograma menu.\n\n");
    printf("1 - Fácil com 5 bombas;\n");
    printf("2 - Médio com 10 bombas;\n");
    printf("3 - Difícil com 24 bombas.\n\n");
}



int main (){
setlocale(LC_ALL, "Portuguese");

int l = 5, c = 5;
int x, y;
int cont = 5;
int mapa[l][c];
int jogo[c][l];
int numBombas = 0;
int opcao;
srand((int)time(NULL));


    texto();
    bemVindo();
    menu();

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

    for (int i = 0; i < numBombas; i++){
        do{
            x = rand() % l;
            y = rand() % c;
        }while(mapa[x][y] == 13);
        mapa[x][y] = 13;
    }
    numBombas = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (mapa[i][j] == 0){
                if (mapa[i-1][j-1] == 13) numBombas++;
                if (mapa[i-1][j] == 13) numBombas++;
                if (mapa[i-1][j+1] == 13) numBombas++;
                if (mapa[i][j-1] == 13) numBombas++;
                if (mapa[i][j+1] == 13) numBombas++;
                if (mapa[i+1][j-1] == 13) numBombas++;
                if (mapa[i+1][j] == 13) numBombas++;
                if (mapa[i+1][j+1] == 13) numBombas++;
                jogo[i][j] = numBombas;
                numBombas = 0;
            }
        }
    }

    do{
        do{
            cout << "Digite o número da linha: ";
            cin >> x;
        }while(x < 0 || x > 4);
        do{
            cout << "Digite o número da coluna: ";
            cin >> y;
        }while(y < 0 || y > 4);

        if (mapa[x][y] == 13){
            if (cont == 5) cout << "Poxa! Na primeira tentativa!" << endl;
            cout << "Fim de jogo" << endl;
            break;
        }else{
            for (int i = 0; i < l; i++){
                for (int j = 0; j < c; j++){
                    if(i == x && j == y){
                        cout << jogo[i][j] << "\t";
                    }else{
                        cout << "?" << "\t";
                    }
                }
                cout << endl;
            }
        }
        cont--;
        if (cont == 0){
            cout << "Você ganhou" << endl;
            break;
        }
    }while(true);
}
