#include <iostream>
using namespace std;

int main(){
    int codigo, quantidade;
    float itens[] = {0, 4, 4.5, 5, 2, 1.5};

    cin >> codigo >> quantidade;
    cout.precision(2);
    cout << fixed;
    cout << "Total: R$ " << itens[codigo] * quantidade << endl;


    return 0;
}