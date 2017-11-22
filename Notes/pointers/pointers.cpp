#include <iostream>

using namespace std;

int main ()
{
    int *p, *r;
    int x;
    
    //this sets p to the memory address of x, not x itself
    p = &x;
    
    p = new int;
    r = p;
    *p = 42;
    
    p = &x;
}