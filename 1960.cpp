#include <iostream>
#include <string>
using namespace std;
int main (){

    string unidade[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}; //declaração de vetor do tipo string
    string dezena[] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}; //declaração de vetor do tipo string
    string centena[] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; //declaração de vetor do tipo string
    string romanos; //declaração de variável do tipo string
    int len = sizeof(unidade) / sizeof(unidade[0]); //calcula o tamanho do vetor e atribui na variavel

    int num, qtd = 0; //declaração de variaveis no tipo inteiro

    do{ //laço para impedir usuario de digitar número < 1 ou > 999
        cin >> num;
    }while(num < 1 || num > 999);

    while(num >= 100){ // enquanto num for maior ou igual a 100
        qtd++; //sempre que condição for aceita, acrescenta uma unidade na variavel
        num -= 100; //sempre que a condição aceita, subtrai 100 da variavel
    }
    for (int i = 0; i < len; i++){ //laço para atribuir o algarismo correspondente ao conteúdo da variavel qtd
        if (i+1 == qtd) romanos = centena[i]; //condição para determinar qual posição do vetor é igual ao conteúdo da variavel
    }

    qtd = 0; //reiniando a variavel
    while(num >= 10){ // enquanto num for maior ou igual a 10
        qtd++;//sempre que condição for aceita, acrescenta uma unidade na variavel
        num -= 10;//sempre que a condição aceita, subtrai 10 da variavel
    }
    for (int i = 0; i < len; i++){ //laço para atribuir o algarismo correspondente ao conteúdo da variavel qtd
        if (i+1 == qtd) romanos += dezena[i];//condição para determinar qual posição do vetor é igual ao conteúdo da variavel
    }
    for (int i = 0; i < len; i++){//laço para atribuir o algarismo correspondente ao conteúdo da variavel num
        if (i+1 == num) romanos += unidade[i];//condição para determinar qual posição do vetor é igual ao conteúdo da variavel
    }
    cout << romanos << endl; //impressão do resultado, mostrando o conteúdo da variavel romanos
}
