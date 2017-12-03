#include <iostream>
#include <string>
#include <fstream>
#include "user.h"
using namespace std;

user::user()
{
    ifstream inFS ("config.txt");
    if (inFS.is_open() && !inFS.eof())
    {
        string blank;
        inFS >> fName;
        inFS >> lName;
        
        int i = 0;
        for (i = 0; i < 2; i++)
        {
            inFS >> blank;
        }
        
        inFS >> totalProduct;
        
        for (i = 0; i < 3; i++)
        {
            inFS >> blank;
        }
        
        inFS >> numProducts;
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
    string name, amount, price, weight;
    
    cout << "Name: ";
    cin >> name;
    cout << "Inventory: ";
    cin >> amount;
    cout << "Price: ";
    cin >> price;
    cout << "Weight: ";
    cin >> weight;
    
    table[numProducts - 1][0] = name;
    table[numProducts - 1][1] = amount;
    table[numProducts - 1][2] = '$' + price;
    table[numProducts - 1][3] = weight + 'g';
    for (int r = 0; r < numProducts; r ++)
    {
        cout << endl;
        cout << table[r][0] << endl;
        cout << "Inventory: " << table[r][1] << endl;
        cout << "Price: $" << table[r][2] << endl;
        cout << "Weight: " << table[r][3] << endl;
        cout << endl;
    }
}

void user::SimpleInv()
{
    cout << "Total inventory: " << totalProduct << endl;
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
        cout << endl;
        cout << "Previous total product: " << totalProduct << endl;
        totalProduct += amount;
        cout << endl;
        cout << "Current total product: " << totalProduct << endl << endl;
        break;
        
        case 2:
        cout << "Remove ";
        cin >> amount;
        cout << endl;
        cout << "Previous total product: " << totalProduct << endl;
        totalProduct -= amount;
        cout << endl;
        cout << "Current total product: " << totalProduct << endl << endl;
        break;
    }
    
    SaveConfig();
}

void user::PrintInv()
{
    cout << "PRINT INVENTORY" << endl;
}

void user::PrintRec()
{
    cout << "PRINT RECORD" << endl;
}

void user::SaveConfig()
{
    ofstream FS("config.txt");
    
    if (!FS.is_open())
    {
        cout << "ERROR SAVING" << endl;
    }
    else
    {
        FS << fName << " " << lName << endl;
        FS << "Total Inventory: " << totalProduct << endl;
        FS << "Number of Products: " << numProducts << endl;
    }
}

void user::SaveTable()
{
    ifstream in("table.txt");
    
    if (!in.is_open())
    {
        cout << "Didn't find table file..." << endl;
    }
    else
    {
        ofstream off("table.txt");
        int r = 0;
        int c = 0;
        
        for (int r = 0; r < 10; r ++)
        {
            for (c = 0; c < 4; c++)
            {
                in >> table[r][c];
                cout << table[r][c];
            }
        }
    }
    in.close();
}

void user::QuickInfo()
{
    cout << endl;
    cout << fName << " " << lName << endl;
    cout << "Total product: " << totalProduct << "g" << endl;
    cout << "Number of products: " << numProducts << endl << endl;
}