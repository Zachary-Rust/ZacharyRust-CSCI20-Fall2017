#include <iostream>
#include <string>

using namespace std;
/*
Zachary Rust
9/12/17
This program tells you your health information
*/

//struct for user info
struct personInfo {
    string first_name;
    string last_name;
    
    int age_years     = 0;
    int height_feet   = 0;
    int height_inches = 0;
    int weight_pounds = 0;
    int bmi           = 0;
};

int main()
{
    //output variables
    int cals_mifflin = 0;
    int cals_harris  = 0;
    int twix         = 0;
    int sandwiches   = 0;
    int pizza_slices = 0;
    
    //needed info
    const int cals_twix = 286;
    const int cals_sandwiches = 340;
    const int cals_pizza_slices = 285;
    
    //needed for formulas
    int height_centimeters = 0;
    int weight_kg = 0;
    int age_months = 0;
    
    //define users struct
    personInfo user_info;
    
    //get user_info
    cout << "Enter first name: ";
    cin >> user_info.first_name;
    
    cout << "Enter last name: ";
    cin >> user_info.last_name;
    
    cout << "Enter weight in pounds: ";
    cin >> user_info.weight_pounds;
    
    cout << "Enter age in months: ";
    cin >> age_months;
    
    cout << "Enter height in feet: ";
    cin >> user_info.height_feet;
    
    cout << "Enter inches remaining: ";
    cin >> user_info.height_inches;
    
    //operations
    weight_kg = user_info.weight_pounds * 0.453592;
    height_centimeters = user_info.height_feet * 30.48 + user_info.height_inches * 2.54;
    user_info.age_years = age_months/12;
    //mifflin calories
    cals_mifflin = 10 * weight_kg + 6.25 * height_centimeters - 5 * user_info.age_years + 5;
    
    //harris calories
    cals_harris = 66.5 + (13.75 * weight_kg) + (5.003 * height_centimeters) - (6.775 * user_info.age_years);
    
    //Final output
    cout << endl;
    cout << "-------------------------------------------------------------------";
    cout << endl;
    cout << "Name: " << user_info.first_name << " " << user_info.last_name << endl;
    cout << "Age: " << user_info.age_years << endl;
    cout << "Height: " << user_info.height_feet << "\"" << user_info.height_inches << "'" << endl;
    cout << "Weight: " << user_info.weight_pounds << "lbs." << endl;
    cout << "Mifflin St Jeor calories needed to maintain current weight: " << cals_mifflin << endl;
    cout << "Harris-Benedict calories needed to maintain current weight: " << cals_harris << endl;
    cout << endl;
    
    //food needed to maintain weight
    cout << "Twix needed to maintain weight: " << cals_mifflin/cals_twix << endl;
    cout << "Sandwiches needed to maintain weight: " << cals_mifflin/cals_sandwiches << endl;
    cout << "Pizza slices needed to maintain weight: " << cals_mifflin/cals_pizza_slices << endl;
    cout << "-------------------------------------------------------------------";
    
    /*
    Tests:
    
-------------------------------------------------------------------
Name: Sofia Cameron
Age: 2
Height: 3"1'
Weight: 35lbs.
Mifflin St Jeor calories needed to maintain current weight: 726
Harris-Benedict calories needed to maintain current weight: 724

Twix needed to maintain weight: 2
Sandwiches needed to maintain weight: 2
Pizza slices needed to maintain weight: 2
-------------------------------------------------------------------

-------------------------------------------------------------------
Name: Richard Watson
Age: 6
Height: 3"8'
Weight: 42lbs.
Mifflin St Jeor calories needed to maintain current weight: 858
Harris-Benedict calories needed to maintain current weight: 842

Twix needed to maintain weight: 3
Sandwiches needed to maintain weight: 2
Pizza slices needed to maintain weight: 3
-------------------------------------------------------------------

-------------------------------------------------------------------
Name: Heather Hunt
Age: 26
Height: 5"10'
Weight: 192lbs.
Mifflin St Jeor calories needed to maintain current weight: 1851
Harris-Benedict calories needed to maintain current weight: 1972

Twix needed to maintain weight: 6
Sandwiches needed to maintain weight: 5
Pizza slices needed to maintain weight: 6
-------------------------------------------------------------------

-------------------------------------------------------------------
Name: Eddy Hall
Age: 13
Height: 6"1'
Weight: 590lbs.
Mifflin St Jeor calories needed to maintain current weight: 3766
Harris-Benedict calories needed to maintain current weight: 4575

Twix needed to maintain weight: 13
Sandwiches needed to maintain weight: 11
Pizza slices needed to maintain weight: 13
-------------------------------------------------------------------
    
    */
}