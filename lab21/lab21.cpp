#include <iostream>
#include <cmath>

using namespace std;

/*
Zachary Rust
9/19/17
This program calculates wind chills with an old and new formula.
*/

int main () {
    
    //user input
    double temp_f     = 0;
    double wind_speed = 0;
    
    //where the chills will be stored
    double old_chill = 0;
    double new_chill = 0;
    
    cout << "Input wind temperature in farenheight: ";
    cin >> temp_f;
    
    cout << "Input wind speed: ";
    cin >> wind_speed;
    
    //Formulas for chills
    old_chill = 0.081 * (3.71 * sqrt(wind_speed) + 5.81 - 0.25 * wind_speed) * (temp_f - 91.4) + 91.4;
    new_chill = 35.74 + 0.6215 * temp_f - 35.75 * (pow(wind_speed, 0.16)) + 0.4275 * temp_f * (pow (wind_speed, 0.16));
    
    //Output results
    cout << "Wind Speed: " << wind_speed << "    " << endl;
    cout << "Old Formula: " << old_chill << "    " << endl;
    cout << "New Formula: " << new_chill << "    " << endl;
    cout << "Difference: " << abs(old_chill - new_chill);
    
    /*
    
Wind Speed: 4    
Old Formula: 30.5753    
New Formula: 25.767    
Difference: 4.8083

Wind Speed: 10    
Old Formula: 27.8601    
New Formula: 32.713    
Difference: 4.85286
    
Wind Speed: 2    
Old Formula: 98.7538    
New Formula: 105.711    
Difference: 6.95719
    
    */
}