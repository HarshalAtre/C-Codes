#include <iostream>
using namespace std;
int main(){
    
    char button;
    cout<<"Input Character ";
    cin >> button;
    return 0;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Hola";
        break;
    case 'c':
        cout << "Namaste";
        break;
    case 'd':
        cout << "ciao";
        break;

    default:
        cout << "Still Learning";
        break;
    }
    return 0;
}