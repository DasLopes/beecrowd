P�gina inicialLEIAURI PROBLEMA 1066 - Pares, �mpares, Positivos e Negativos SOLU��O EM C++
URI PROBLEMA 1066 - Pares, �mpares, Positivos e Negativos SOLU��O EM C++
Garcia10/02/2018 03:26:00 PM
URI Online Judge | 1066
Pares, �mpares, Positivos e Negativos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram �mpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.
Entrada
O arquivo de entrada cont�m 5 valores inteiros quaisquer.
Sa�da
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, n�o esquecendo o final de linha ap�s cada uma.



#include <iostream>

using namespace std;

int main()
{
    int n;
    int pos = 0, neg = 0, par = 0, im = 0;

    for(int i = 0; i < 5; ++i)
    {
        cin >> n;
        if(n > 0){
            pos++;
        }else{
            if(n != 0){
                neg++;
            }
        }

        if(n % 2 == 0){
            par++;
        }else{
            im++;
        }
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << im << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
