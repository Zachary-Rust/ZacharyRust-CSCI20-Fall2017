#include <iostream>
#include "main.h"
#include "class.h"
using namespace std;

int randomNumberGenerator();

int main()
{
    int num = 0;
    
    num = randomNumberGenerator();
    cout << num << endl;
    
    MyClass one;
    one.SetNum(num);
    one.Print();
}