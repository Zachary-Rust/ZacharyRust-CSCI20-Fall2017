#include <iostream>
#include <string>
#include <fstream>
//#include "run.h"
//#include "class.h"

using namespace std;
void MakeSale ();
double UpdateTotal();
void UpdateDetail();

class user {
    private:
    string fName;
    string lName;
    
    string table[10][10];
    
    double totalProduct;
    int numProducts;
    
    public:
    user();
    void SetName();
    string GetName();
    void AddItem();
    void SimpleInv();
    void PrintInv();
    void PrintRec();
    void Save();
};

user::user()
{
    ifstream inFS ("config.txt");
    if (inFS.is_open() && !inFS.eof())
    {
        string blank;
        inFS >> fName;
        cout << fName << endl;
        inFS >> lName;
        cout << lName << endl;
        
    }
    else
    {
        cout << "Didn't find user file..." << endl;
        fName = "null";
        lName = "null";
        
        totalProduct = 0;
        numProducts = 0;
    }
}

void user::SetName()
{
    cout << "Please enter first name: ";
    cin >> fName;
    cout << "Last name: ";
    cin >> lName;
}

string user::GetName()
{
    return fName + " " + lName;
}

void user::AddItem()
{
    numProducts++;
    string name, amount, price;
    
    
    
    table[numProducts - 1][0] = name;
    table[numProducts - 1][1] = amount;
    table[numProducts - 1][2] = price;
    for (int i = 0; i < numProducts; i ++)
    {
        for (int a = 0; a < 3; a++)
        {
            cout << table[numProducts - 1][0] << " " << table[numProducts - 1][1] << " " << table[numProducts - 1][2] << endl;
        }
    }
}

void user::SimpleInv()
{
    cout << "1. Add" << endl;
    cout << "2. Remove" << endl;
    
    int decision = 0;
    cin >> decision;
    
    double amount = 0;
    switch (decision)
    {
        case 1:
        cout << "Add ";
        cin >> amount;
        cout << "Previous total product: " << totalProduct << endl;
        totalProduct += amount;
        cout << "Current total product: " << totalProduct << endl;
        break;
        
        case 2:
        cout << "Remove ";
        cin >> amount;
        cout << "Previous total product: " << totalProduct << endl;
        totalProduct -= amount;
        cout << "Current total product: " << totalProduct << endl;
        break;
    }
}

void user::PrintInv()
{
    cout << "PRINT INVENTORY" << endl;
}

void user::PrintRec()
{
    cout << "PRINT RECORD" << endl;
}

void user::Save()
{
    ofstream FS("config.txt");
    
    if (!FS.is_open())
    {
        cout << "ERROR SAVING" << endl;
    }
    else
    {
        FS << fName << " " << lName << endl;
        cout << "Total Inventory: " << totalProduct << endl;
        cout << "Number of Products: " << numProducts << endl;
    }
}

int main()
{
    user myUser;
    
    //Checks if new user
    ifstream inFS("config.txt");
    
    if (!inFS.is_open())
    {
        double inventory = 0;
        cout << "New user detected!" << endl;
        myUser.SetName();
        myUser.Save();
    }
    
    inFS.close();
    
    //Regular run starts here
    cout << "Welcome " << myUser.GetName() << endl << endl;
    
    int decision = 0;
    while (decision != 4)
    {
        cout << "1. Make Sale" << endl;
        cout << "2. Update Total Inventory" << endl;
        cout << "3. Add Item to Inventory" << endl;
        cout << "4. Quit" << endl;
        
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
            cout << "Goodbye...";
            break;
        }
    }
    
    return 0;
}