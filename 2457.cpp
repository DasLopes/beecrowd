#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void buffer(void){ // função para limpar buffer na memória
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main (){
    cout << fixed << setprecision(1);

    // declaração de variaveis
    char letra;
    string frase, palavra;
    int qtdPalavras = 1, cont = 0;
    float letraNaPalavra = 0.0;

    //entrada de dados
    cin >> letra;
    buffer();
    getline(cin, frase);
    //laço para determinar o tamanho do vetor
    for (int i = 0; i < size(frase); i++) if (frase[i] == 32) qtdPalavras++;
    //declação do vetor
    string vetor[qtdPalavras];
    //laço para inserir palavra nas posições do vetor
    for (int i = 0; i < size(frase); i++){
        if (frase[i] != 32) palavra += frase[i];
        else{
            vetor[cont] = palavra;
            palavra = '\0';
            cont++;
        }
    }
    //inserindo a última palavra da frase no vetor
    vetor[cont] = palavra;
    //laço para verificar se a letra escolhida pelo usuário consta em alguma palavra da frase
    for (int i = 0; i < qtdPalavras; i++){
        palavra = vetor[i];
        for (int i = 0; i < size(palavra); i++){
            if (palavra[i] == (int)letra){
                letraNaPalavra++;
                break;
            }
        }
    }
    cout << (100 * letraNaPalavra / qtdPalavras) << endl;
}
