#include <iostream>

using namespace std;

int main ()
{
    char lang;
    
    cout << "Input language.\n\n";
    cout <<"[c] for C++\n[J] for Java\n[W] for Web Dev\n";
    cin >> lang;
    
    switch (lang)
    {
        case 'c':
        cout << "C fam";
        break;
        case 'J':
        cout << "Java";
        case 'W':
        break;
        cout << "Web Dev";
        break;
        default:
        cout << "learn";
        break;
    }
}