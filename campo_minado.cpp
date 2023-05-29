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
    cout << "No ano de " << anoAtual() << " você completa " << anoAtual() - jogador.idade << endl;
    cout << "Campo minado é um popular jogo de computador para um jogador." << endl;
    cout << "Foi inventado por Robert Donner em 1989 e tem como objectivo" << endl;
    cout << "revelar um campo de minas sem que alguma seja detonada." << endl;
}
void matriz(){

}
int main (){
    texto();
    bemVindo();
}
