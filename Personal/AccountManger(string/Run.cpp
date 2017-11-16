#include <iostream>
#include <string>

using namespace std;

int main ()
{
    cout << "Welcome, what would you like to do...\n";
    cout << "1.Log in\n2.Create Account\n3. Exit\n";
    
    int choice = 0;
    cin >> choice;
    
    switch (choice)
    {
        case 1:
        
        break;
        
        case 2:
        
        break;
        
        case 3:
        
        break;
        
        default:
        
        break;
    }
}

void LogIn()
{
    
}

void CreateAccount()
{
    string name;
    string pWord;
    
    cout << "Enter name: ";
    cin >> name;
    
    cout << "Enter password: ";
    cin >> pWord;
}