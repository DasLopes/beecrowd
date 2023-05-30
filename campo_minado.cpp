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
    system("clear");
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
            cout << "*\t";
        }
        cout << endl;
    }
}
int menu(){
    printf("\n\tPrograma menu.\n");
    printf("Escolha uma opção abaixo:\n");
    printf("1 - Fácil com 5 bombas;\n");
    printf("2 - Médio com 10 bombas;\n");
    printf("3 - Difícil com 24 bombas.\n");
    int num;
    while(true){
        cin >> num;
        if (num == 1){
            num = 5;
            break;
        }else if(num == 2){
            num = 10;
            break;
        }else if (num == 3){
            num = 24;
            break;
        }else printf ("Opção inválida, digite novamente.\n");
    }
    system("clear");
    return num;
}
int main (){
    string matriz[5][5];
    texto();
    bemVindo();
    campo_1();
    int len = menu();
    printf("\nlen = %i\n", len);
    int n = 0;
    for (int i = 0; i < len; i++){
        n += (i * i) + (rand() * rand());
        srand(n);
        matriz[rand() % 4][rand() % 4] = "X";
    }
    for (int l = 0; l < 5; l++){
        for (int c = 0; c < 5; c++){
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }

}
