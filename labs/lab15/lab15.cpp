#include <iostream>
#include <string>
using namespace std;

/*
    Created By: Zachary Rust
    Date:       9/7/17
    Title:      Ad Lib Game
*/

int main()
{
    string firstWord = "good";
    string secondWord = "growl";
    string thirdWord = "delicious";
    string fourthWord = "wack";
    string fifthWord = "mac n' cheese";
    
    cout << "Enter an adjective: ";
    cin >> firstWord;
    cout << "Enter a verb: ";
    cin >> secondWord;
    cout << "Enter an adjective: ";
    cin >> thirdWord;
    cout << "Enter an adjective: ";
    cin >> fourthWord;
    cout << "Enter a food: ";
    cin >> fifthWord;
    cout << endl;
    
    cout << "Our school cafeteria has really " << firstWord << " food." << endl;
    cout << "Just thinking about it makes my stomach " << secondWord << "." << endl;
    cout << "The spaghetti is " << thirdWord << "." << endl;
    cout << "However the turkey tacos are totally " << fourthWord << "." << endl;
    cout << "It's kind of a hit or miss depending on what day it is." << endl;
    cout << "Thankfully today is " << fifthWord << " day!" << endl;
    
    return 0;
}