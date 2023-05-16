#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    string sheldon, raj, r;
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> sheldon >> raj;
        if (sheldon == raj) {
            r = "De novo!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "tesoura" && raj == "papel"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "papel" && raj == "tesoura"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "papel" && raj == "pedra"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "pedra" && raj == "papel"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if(sheldon == "pedra" && raj == "lagarto"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "lagarto" && raj == "pedra"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "lagarto" && raj == "Spock"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "Spock" && raj == "lagarto"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "Spock" && raj == "tesoura"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "tesoura" && raj == "Spock"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "tesoura" && raj == "lagarto"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "lagarto" && raj == "tesoura"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "lagarto" && raj == "papel"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "papel" && raj == "lagarto"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "papel" && raj == "Spock"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "Spock" && raj == "papel"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "Spock" && raj == "pedra"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "pedra" && raj == "Spock"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "pedra" && raj == "tesoura"){
            r = "Bazinga!";
            cout << "Caso #" << i << ": " << r << endl;
        }else if (sheldon == "tesoura" && raj == "pedra"){
            r = "Raj trapaceou!";
            cout << "Caso #" << i << ": " << r << endl;
        }
    }
}

