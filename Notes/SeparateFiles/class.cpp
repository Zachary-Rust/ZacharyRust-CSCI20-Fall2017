//Class Function Definitions
#include <iostream>
#include "class.h"

MyClass::MyClass()
{
    num = 0;
}

MyClass::SetNum(n)
{
    num = n;
}

MyClass::GetNum()
{
    return num;
}

MyClass::Print()
{
    cout << num << endl;
}