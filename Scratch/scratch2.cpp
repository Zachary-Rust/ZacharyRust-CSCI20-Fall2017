#include <iostream>

using namespace std;

int main ()
{
    int * pointer = nullptr;
    int num = 10;
    pointer = &num;
    
    const int destruction = 5;

    for (int i = 0; i < destruction; i++)
    {
        pointer += i;
        cout << i + 1<< ". " << pointer << endl;
        cout << "Origional: " << *pointer << endl;
        *pointer = 0;
        cout << "Modified: " << *pointer << endl << endl;
    }
    
    return 0;
}