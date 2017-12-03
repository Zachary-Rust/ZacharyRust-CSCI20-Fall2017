#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "manager.h"
using namespace std;

//Constructor
manager::manager() {
    //store end
    recipt_num = 0;
    employee = "null";
    id = 1000;
    
    //load products
    ifstream in;
    
    in.open("1000.txt");
    
    //Gets company name
    in >> company;
    
    //gets number of productos for loops
    in >> num_products;
    
    //Set products and prices
    for (int i = 0; i < num_products && !in.eof(); i++)
    {
        in >> products[i];
        in >> prices[i];
        //checks user error if wrong number of products is entered
        if (in.eof())
        {
            num_products = i + 1;
        }
    }
    in.close();
    
    //customer end
    total = 0.00;
    c_name = "null";
    date = "null";
    total = 0.00;
    items = 0;
    c_products[10];
    c_prices[10];
}

string manager::FindLatestID()
{
    id = 1000;
    
    //set up temp for file name
    string temp = "";
    stringstream ss;
    ss << id;
    temp = ss.str();
    temp += ".txt";
    
    ifstream in;
    in.open (temp.c_str());
    
    while (in.is_open())
    {
        in.close();
        id += 1;
        stringstream ss2;
        ss2 << id;
        temp = ss2.str();
        temp += ".txt";
        in.open(temp.c_str());
    }
    
    return temp;
}

//Set up basic information
void manager::Initialize()
{
    SignIn();
    cout << endl;
    cout << "Welcome " << employee << "!" << endl;
    // cout << "Date(m/d/yr): ";
    // cin >> date;
    // cout << "Customer Name" << endl;
    // cout << "First: ";
    // cin >> c_name;
    // cout << "Last: ";
    // string temp = "";
    // cin >> temp;
    // c_name += " " + temp;
    cout << endl;
    ListItems();
}

//Signs employee into system to for recipt info/records
void manager::SignIn()
{
    cout << "Enter employee ID" << endl;
    cout << "(0 for new employee)" << endl;
    cin >> id;
    if (id == 0)
    {
        NewEmployee();
    }
    else
    {
        //set up file string
        stringstream ss;
        ss << id;
        string temp = ss.str();
        temp += ".txt";
        ifstream inFS(temp.c_str());
        
        while (!inFS.is_open())
        {
            inFS.close();
            cout << "Didn't find employee.\nTry again: ";
            cin >> id;
            cout << id << endl;
            stringstream a;
            a << id;
            temp = a.str();
            temp += ".txt";
            inFS.open (temp.c_str());
        }
        //Get Employee information
        inFS >> employee;
        inFS >> temp;
        employee += " " + temp;
    }
}

void manager::NewEmployee()
{
    //Get employee information
    cout << "Enter your information..." << endl;
    cout << "First name: ";
    cin >> employee;
    cout << "Last name: ";
    string temp = " ";
    cin >> temp;
    employee += " " + temp;
    
    //set up employee id
    temp = FindLatestID();
    
    //Create file for employee
    ofstream off;
    off.open(temp.c_str());
    
    
    //Check if file was created successfully
    if (!off.is_open())
    {
        cout << "Error creating employee file..." << endl;
    }
    else
    {
        off << employee << endl;
        off << id << endl;
        cout << "Employee ID: " << id << endl;
    }
}

//Lists purchasing options for customer
void manager::ListItems()
{
    //list items
    cout << endl;
    cout << "********************" << endl;
    int i = 0;
    for (i = 0; i < num_products; i++)
    {
        cout << i+1 << ": " << products[i];
        cout << " $" << prices[i];
        cout << endl;
    }
    cout << 'p' << ": Print Recipt" << endl;
    cout << 'q' << ": Quit" << endl;
    cout << "********************" << endl;
    cout << endl;
    
    //Enter Item to purchase
    char choice = '0';
    cin >> choice;
    
    if (choice != 'q' && choice != 'p')
    {
        //passes the index of the choice to use for arrays
        BuyItem (choice - '0');
    }
    else if (choice == 'p')
    {
        PrintRecipt();
        CreateRecipt();
    }
    else if (choice == 'q')
    {
        cout << "Goodbye..." << endl;
    }
    else
    {
        ListItems();
    }
}

//Purchase an item
void manager::BuyItem(int p)
{
    //sets p to be used as index
    p--;
    //adds to items
    c_products[items] = products[p];
    c_prices[items] = prices[p];
    items++;
    
    cout << products[p] <<" option selected." << endl;
    
    total += prices[p];
    
    cout << "Total: $" << total << endl;
    ListItems();
    // cout << "Will that be all..?(y/n) ";
    // char c = 'a';
    // cin >> c;
    
    // switch(c)
    // {
    //     case 'y':
    //     recipt_num++;
    //     PrintRecipt();
    //     CreateRecipt();
    //     break;
        
    //     case 'n':
    //     ListItems();
    //     break;
        
    //     default:
    //     cout << "Try again..." << endl;
    //     cin >> c;
    //     break;
    // }
}

//Print Recipt
void manager::PrintRecipt()
{
    cout << endl;
    cout << fixed << setprecision(2) << "RECIPT" << endl;
    cout << c_name << endl;
    cout << date << endl;
    cout << recipt_num << endl << endl;
    
    for (int i = 0; i < items; i++)
    {
        cout << c_products[i] << '-' << setw(24 - strlen(c_products[i].c_str())) << "$" << c_prices[i] << endl;
        total += c_prices[i];
    }
    
    cout << endl << "Subtotal: " << setw(16) << "$" << total << endl;
    cout << "Tax:" << setw(22) << "$" << total * 0.0725 << endl;
    cout << "Total:" << setw(20) << "$" << total + total * 0.0725 << endl;
    cout << endl;
    cout << "Cashier: " << employee << endl;
    cout << "ID: " << id << endl;
}

//Recipt HTML
void manager::CreateRecipt()
{
    //html file
    string f_name = "Recipt" + recipt_num;
    f_name += ".html";
    ofstream ofFS(f_name.c_str());
    
    if (!ofFS.is_open())
    {
        cout << "Error creating recipt" << endl;
    }
    else
    {
        //Set up html page
        string p = "<p>";
        string pp = "</p>";
        string h = "<h1>";
        string hh = "</h1>";
    
        //write variable information
        ofFS << "<!DOCTYPE HTML>\n<html>\n<title>";
        ofFS << "Recipt";
        ofFS << "</title></title>\n</head>\n<body>\n\n";
        ofFS << h << "SALE" << hh << endl;
        ofFS << p << c_name << pp << endl;
        ofFS << p << date << pp << endl;
        ofFS << p << recipt_num << pp << endl;
        for (int i = 0; i < items; i++)
        {
            ofFS << p << c_products[i] << '-' << setw(24 - strlen(c_products[i].c_str())) << "$" << c_prices[i] << pp << endl;
        }
        ofFS << p << pp << endl;
        ofFS << p << "Subtotal: $" << total << pp << endl;
        ofFS << p << 
        //close html file
        ofFS << "</body>\n</html>";
        ofFS.close();
    }
}