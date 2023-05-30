#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
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
    cout << endl;
    cout << jogador.nome << "! É um prazer te conhecer. ";
    cout << "Neste ano você você completa " << anoAtual() - jogador.idade << "." << endl;
    cout << "Campo minado é um popular jogo de computador para um jogador." << endl;
    cout << "Foi inventado por Robert Donner em 1989 e tem como objectivo" << endl;
    cout << "revelar um campo de minas sem que alguma seja detonada." << endl;
}
void campo_1(){
    cout << "\nEste campo possuí 25 posições.\n" << endl;
    for (int l = 0; l < 5; l++){
        for (int c = 0; c < 5; c++){
            cout << "X\t";
        }
        cout << endl;
    }
}
int campo_2(int n){
    return 0;
}
void menu(){
    printf("\n\tPrograma menu.\n");
    printf("Escolha uma opção abaixo:\n");
    printf("1 - Fácil com 5 bombas;\n");
    printf("2 - Médio com 10 bombas;\n");
    printf("3 - Difícil com 24 bombas.\n");
    int num;
    while(true){
        cin >> num;
        if (num == 1) break;
        else if(num == 2) break;
        else if (num == 3) break;
        else printf ("Opção inválida, digite novamente.\n");
    }


    switch (num){
        case 1:
            campo_2(num);
            break;
        case 2:
            campo_2(num);
            break;
        case 3:
            campo_2(num);
            break;
      }
}
int main (){
    int num;
    texto();
    bemVindo();
    campo_1();
    menu();
}
