#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
    Zachary Rust
    9/21/17
    Random Number Generator
*/

int main ()
{
    
    //sets new seed every time program is run
    srand(time(0));
    
    //Outputs random number
    cout << "Your number is: " << rand() % 100 + 1;
    
    /*
    Test Runs:
    86
    34
    38
    87
    */
}