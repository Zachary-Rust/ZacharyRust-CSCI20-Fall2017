#include <iostream>

using namespace std;

int main ()
{
    int * pointer = nullptr;
    
    int num = 10;
    
    pointer = &num;
    
    cout << pointer << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << pointer + i << endl;
        *(pointer + i) = 0;
    }
}