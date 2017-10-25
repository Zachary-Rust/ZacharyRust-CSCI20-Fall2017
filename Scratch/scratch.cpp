#include <iostream>

using namespace std;

void PrintA (char c)
{
    cout << "    " << c << endl;
    cout << "   " << c << c << c << endl;
    cout << "  " << c << "   " << c << endl;
    cout << " " <<c << c << c << c << c << c << c << endl;
    cout << c << "       " << c << endl;
    cout << "~~~~~~~~~" << endl;
}

void PrintB (char c)
{
    cout << c << c << endl;
    cout << c << " " << c << endl;
    cout << c << c << c << endl;
    cout << c << " " << c << endl;
    cout << c << c << c << endl;
}

void PrintC (char c)
{
    cout << " " << c << c << c << endl;
    cout << c << endl;
    cout << c << endl;
    cout << c << endl;
    cout << " " << c << c << c << endl;
    cout << "~~~~" << endl;
}

int main()
{
    char c = 'O';
    PrintA(c);
    PrintB(c);
    PrintC(c);
}