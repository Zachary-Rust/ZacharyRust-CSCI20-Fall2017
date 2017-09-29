#include <iostream>
#include <cstdlib>
#include <ctime>
/*
    Zachary Rust
    9/28/17
    This program contains a randome number generator that accepts two values, swaps them and uses them to get a random number.
    It then uses the random number to the function conversion pounds to kilograms, then to the function conversion kilograms to pounds.
*/
using namespace std;

//Converts kilograms to pounds
double KilogramsToPounds (double k)
{
    double pounds = 0.0;
    const double pounds_per_kilogram = 2.2046226218;
    
    pounds = k * pounds_per_kilogram;
    cout << "Pounds: " << pounds << endl;
}

//Converts pounds to kilograms
double PoundsToKilograms (double p)
{
    double kilograms = 0.0;
    const double kilograms_per_pound = 0.453592;
    
    kilograms = p * kilograms_per_pound;
    cout << "Kilograms: " << kilograms << endl;
    
    KilogramsToPounds(kilograms);
}

/*This function swaps the two numbers if a is greater that b.
A should be the lower number in the range and b should be the bigger number in the range
If that isn't true, this function fixes it by swapping them. */
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
int RandNumGen ()
{
    int first_number = 1;
    int last_number = 100;
    
    SwapFunction(first_number, last_number);
    int ran_num = 0;
    ran_num = (rand() % (last_number - first_number)) + first_number + 1;
    
    cout << "A random number between is " << ran_num << "." << endl;
    PoundsToKilograms(ran_num);
}

int main ()
{
    
    //sets random seep for random number generator
    srand(time(0));
    
    //Calls function to generate random number
    RandNumGen();
    
    return 0;
}
/*
Tests:

A random number between is 85.
Kilograms: 38.5553
Pounds: 84.9999

A random number between is 48.
Kilograms: 21.7724
Pounds: 48

A random number between is 48.
Kilograms: 21.7724
Pounds: 48
*/