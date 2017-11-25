#include <iostream>

using namespace std;

int main()
{
    int choice = 0;
    int newVal = 0;
    int spaces = 0;
    
    cout << "Enter number of spaces: ";
    cin >> spaces;
    
    int* p = nullptr;
    
    p = new int[spaces];
    
    while (choice != -1)
    {
        for (int i = 0; i < spaces - 1; i++)
        {
            cout << p[i] << ", ";
        }
        cout << p[spaces - 1] << endl;
        
        cout << "Enter index you would like to change (When done, enter -1): ";
        cin >> choice;
        if (choice != -1)
        {
            cout << "Enter value: ";
            cin >> newVal;
            
            p[choice - 1] = newVal;
        }
    }
    
    delete p;
}