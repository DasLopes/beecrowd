#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(1);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        float a, b, c, media;
        cin >> a >> b >> c;
        media = ((a * 2) + (b * 3) + (c * 5)) / 10;
        cout << media << endl;
    }
}
