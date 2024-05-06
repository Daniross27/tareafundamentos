 #include <iostream>

using namespace std;

int main ()
{
    char letra;
    cout << "ingrese una letra:R,Y,B,W,K,C,G ";
    cin >> letra;
    switch(letra)
    {
    case 'R':
    cout <<"Rojo\n";
        break;
    case 'Y':
    cout <<"amarillo\n";
    break;
    case 'B':
    cout << "azul\n";
    break;
    case 'W':
    cout <<"blanco\n";
    break;
    case 'K':
    cout <<"negro\n";
    break;
    case 'C':
    cout <<"cian\n";
    break;
    case 'G':
    cout << "verde\n";
    break;

    default:
    cout << "letra invalida";

        break;
    }

    return 0;
}


