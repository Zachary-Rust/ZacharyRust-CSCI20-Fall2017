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
    
    return pounds;
}

//Converts pounds to kilograms
double PoundsToKilograms (double p)
{
    double kilograms = 0.0;
    const double kilograms_per_pound = 0.453592;
    
    kilograms = p * kilograms_per_pound;
    cout << "Kilograms: " << kilograms << endl;
    
    return kilograms;
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

//generates a random number between two numbers set by the user.  The function parameters are the numbers to find the random number between.
int RandNumGen (int first_number, int last_number)
{
    
    SwapFunction(first_number, last_number);
    int ran_num = 0;
    ran_num = (rand() % (last_number - first_number)) + first_number + 1;
    
    cout << "A random number between is " << ran_num << "." << endl;
    
    return ran_num;
}

int main ()
{
    
    //sets random seep for random number generator
    srand(time(0));
    
    //Calls function to generate random number
    int pounds = RandNumGen(1, 100);
    
    //Converts the random number to kilograms
    double kilograms = PoundsToKilograms(pounds);
    
    //Converts kilograms to pounds
    KilogramsToPounds(kilograms);
    
    return 0;
}
/*
Tests:

A random number between is 51.
Kilograms: 23.1332
Pounds: 51

A random number between is 67.
Kilograms: 30.3907
Pounds: 66.9999

A random number between is 31.
Kilograms: 14.0614
Pounds: 31
*/