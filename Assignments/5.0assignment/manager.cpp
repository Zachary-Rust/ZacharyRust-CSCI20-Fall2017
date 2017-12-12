#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cctype>
#include "manager.h"

using namespace std;

manager::manager()
{
    //store end
    employee = "null";
    has_ran = false;
    
    //load data
    ifstream in;
    
    in.open("config.txt");
    
    in >> company;
    recipt_num = 1000;
    in >> num_products;
    
    //gets all products & prices
    for (int i = 0; i < num_products && !in.eof(); i++)
    {
        in >> products[i];
        in >> prices[i];
        //checks user error if wrong number or products is in file
        if (in.eof())
        {
        }
    }
    in.close();
    
    //Get last recipt number
    in.open("number.txt");
    
    if (!in.is_open())
    {
        cout << "Didn't load recipt data. (Could be due to initial startup.)" << endl;
    }
    else
    {
    in >> recipt_num;
    cout << "RECIPT NUMBER---  " << recipt_num << endl;
    }
    
    in.close();
    
    //customer end
    c_name = "";
    date = "";
    items = 0;
    c_products[10];
    c_prices[10];
}

void manager::Initialize()
{
    string temp = "";
    
    //Gets date only onece
    if (!has_ran)
    {
        cout << "Welcome!" << endl;
        
        //Get date
        cout << "Enter date (mm/dd/yyyy): ";
        cin >> date;
        
        has_ran = true;
        
        //Geta cashier information
        cout << "Enter name." << endl;
        cout << "First: ";
        cin >> employee;
        cout << "Last: ";
        cin >> temp;
        employee += ' ' + temp;
        
        //Gets customer information
        cout << endl;
        cout << "Enter customer name." << endl;
        cout << "First: ";
        cin >> c_name;
        cout << "Last: ";
        cin >> temp;
        c_name += " " + temp;
        ListItems();
    }
    else
    {
        //reset customer information
        total = 0.00;
        items = 0;
    
        //Gets customer information
        cout << endl;
        cout << "Enter customer name." << endl;
        cout << "Enter 'q' to quit." << endl;
        cout << "First: ";
        cin >> c_name;
        if (c_name == "q")
        {
            Quit();
        }
        else
        {
        cout << "Last: ";
        cin >> temp;
        c_name += " " + temp;
        
        //starts "register"
        ListItems();
        }
    }
}

void manager::ListItems()
{
    cout << endl;
    cout << "*******************" << endl;
    int i = 0;
    for (i = 0; i < num_products; i++)
    {
        cout << i+1 << ": " << products [i];
        cout << " $" << prices[i];
        cout << endl;
    }
    //special commands
    cout << "P : Print Recipt" << endl;
    cout << "Q : Quit" << endl;
    cout << "******************" << endl;
    cout << endl;
    char choice;
    cin >> choice;
    if (choice - '0' > 0 && choice - '0' <= num_products)
    {
        BuyItem(choice - '0');
        ListItems();
    }
    else if (choice == 'p')
    {
        DisplayRecipt();
        PrintRecipt();
        Initialize();
    }
    else if (choice == 'q')
    {
        Quit();
    }
    else
    {
        ListItems();
    }
}

void manager::BuyItem(int p)
{
    //sets p to be used as index
    p--;
    
    //adds customer items
    c_products[items] = products[p];
    c_prices[items] = prices[p];
    
    items++;

    total += prices[p];
    
    for (int i = 0; i < items; i++)
    {
        cout << i+1 << ". " << c_products[i] << " $" << c_prices[i] << endl;
    }
    cout << "total $" << total << endl;
}

void manager::DisplayRecipt()
{
    //set recipt number
    recipt_num++;
    
    //print recipt
    cout << endl;
    cout << "******************************" << endl;
    cout << fixed << setprecision(2) << "SALE" << endl;
    cout << c_name << endl;
    cout << date << endl;
    cout << '#' << recipt_num << endl << endl;
    
    //print all items purchased and prices
    for (int i = 0; i < items; i++)
    {
        cout << c_products[i] << '-' << setw(24 - strlen(c_products[i].c_str())) << "$" << c_prices[i] << endl;
    }
    
    cout << endl << "Subtotal: " << setw(16) << "$" << total << endl;
    cout << "Tax:" << setw(22) << "$" << total * 0.0725 << endl;
    cout << "Total:" << setw(20) << "$" << total + total * 0.0725 << endl;
    cout << endl;
    cout << "Cashier: " << employee << endl;
    cout << "******************************" << endl;
}

void manager::PrintRecipt()
{
    //create file stream for recipts
    ofstream ofFS("reciptlog.txt", ios::app);
    
    //check that file is open
    if (!ofFS.is_open())
    {
        cout << "Error loading reciptlog..." << endl;
    }
    else
    {
        //output recipt
        ofFS << endl;
        ofFS << "******************************" << endl;
        ofFS << fixed << setprecision(2) << "SALE" << endl;
        ofFS << c_name << endl;
        ofFS << date << endl;
        ofFS << '#' << recipt_num << endl << endl;
        
        //print all items purchased and prices
        for (int i = 0; i < items; i++)
        {
            ofFS << c_products[i] << '-' << setw(24 - strlen(c_products[i].c_str())) << "$" << c_prices[i] << endl;
        }
        
        ofFS << endl << "Subtotal: " << setw(16) << "$" << total << endl;
        ofFS << "Tax:" << setw(22) << "$" << total * 0.0725 << endl;
        ofFS << "Total:" << setw(20) << "$" << total + total * 0.0725 << endl;
        ofFS << endl;
        ofFS << "Cashier: " << employee << endl;
        ofFS << "******************************" << endl;
    }
    
    ofFS.close();
}

void manager::ChangeCashier()
{
    string temp = "";
    
    cout << endl;
    cout << "Enter name." << endl;
    cout << "First: ";
    cin >> employee;
    cout << "Last: ";
    cin >> temp;
    employee += ' ' + temp;
}

void manager::Quit()
{
    cout << "Goodbye..." << endl;
    
    //set latest recipt number
    ofstream off("number.txt");
    
    if (!off.is_open())
    {
        cout << "Error opening reciptlog.." << endl;
    }
    else
    {
        off << recipt_num << endl;
    }
    
    off.close();
}