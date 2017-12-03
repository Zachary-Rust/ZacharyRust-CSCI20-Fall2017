#include <iostream>
#include <string>
#include <fstream>
#include "user.h"

using namespace std;

int main()
{
    user myUser;
    
    //Checks if new user
    ifstream inFS("config.txt");
    
    if (!inFS.is_open())
    {
        cout << "New user detected!" << endl;
        myUser.SetName();
        myUser.SaveConfig();
    }
    
    inFS.close();
    
    //Regular run starts here
    cout << "Welcome " << myUser.GetName() << endl << endl;
    
    int decision = 0;
    while (decision != 5)
    {
        cout << "1. Make Sale" << endl;
        cout << "2. Update Total Inventory" << endl;
        cout << "3. Add Item to Inventory" << endl;
        cout << "4. Quick Info" << endl;
        cout << "5. Quit" << endl;
        
        cin >> decision;
        
        switch (decision)
        {
            case 1:
            //myUser.MakeSale();
            break;
            
            case 2:
            myUser.SimpleInv();
            break;
            
            case 3:
            myUser.AddItem();
            break;
            
            case 4:
            myUser.QuickInfo();
            break;
            
            case 5:
            cout << "Goodbye..." << endl;
            return 0;
            break;
            
            default:
            decision = 0;
            break;
        }
    }
return 0;
}