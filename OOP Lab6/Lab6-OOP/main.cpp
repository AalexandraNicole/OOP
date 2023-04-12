#include "Hex.h" 

//operatorul '-' trebuie sa fie de tip friend
int main()
{
    Hex a("a0");
    Hex b("Bc");
    Hex c = 100;
    Hex d = "10Fe";
    Hex e = a + b;
    Hex f;
    Hex g;

    f = d + b;
    cout << hex << f << endl;

    g = b - a;
    cout << hex << g << endl;

    c[0] = '1';
    c[1] = '0';
    c[2] = '0';
    c[3] = 'F';
    c[4] = 'a';
    c[5] = 'e';

    cout << hex << c << endl;

    return 0;
}