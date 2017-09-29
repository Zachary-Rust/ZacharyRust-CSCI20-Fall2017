#include <iostream>
#include <cstdlib>
#include <ctime>
/*
    Zachary Rust
    9/26/17
    This program generates a random number between two numbers and has a swap function that swaps two values
*/
using namespace std;

//swap function
void SwapFunction (int& a, int& b)
{
    int c = 0;
    
    if (a > b)
    {
        c = b;
        b = a;
        a = c;
    }
    
    return;
}

//generates a random number between two numbers set by the user
int RandNumGen (int a, int b)
{
    SwapFunction(a, b);
    int ran_num = 0;
    ran_num = (rand() % (b - a)) + a + 1;
    
    cout << "A random number between " << a << " and " << b << " is " << ran_num << ".";
}

int main ()
{
    
    //sets random seep for random number generator
    srand(time(0));
    
    
    int first_number = 0;
    int last_number = 0;
    
    cout <<"Enter two numbers to find a random number between." << endl;
    
    //Get user input
    cout << "Enter first number: ";
    cin >> first_number;
    
    cout << "Enter second number: ";
    cin >> last_number;
    
    //sets and outputs the random number with a function call
    RandNumGen(first_number, last_number);
    
    return 0;
}

/*

    Test 1:
    A random number between 1 and 10 is 10.
    
    Test 2:
    A random number between 5 and 82 is 35.
    
    Test 3:
    A random number between 22 and 73 is 52.
    
    */