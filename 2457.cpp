#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main(){

    char letra;
    string texto;
    float totalPalavras = 1;
    float letraPalavra = 0;
    string palavra;

    cin >> letra;
    int numLetra = (int)letra;

    clear_keyboard_buffer();
    getline(cin, texto);
    int len = size(texto);

    for (int i = 0; i < len; i++){

        if (texto[i] != 32) palavra += texto[i];

        int tam = size(palavra);
        bool achei = false;

        for (int i = 0; i < tam; i++){
            if (palavra[i] == numLetra){
                achei = true;
            }
        }
        if (achei) letraPalavra++;
        palavra = '\0';
        if (texto[i] == 32) totalPalavras++;
    }
    float porc = 100 * letraPalavra / totalPalavras;
    cout << setprecision(3) << porc << endl;
}
