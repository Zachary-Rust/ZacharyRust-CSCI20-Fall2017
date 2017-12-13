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
    employee_ = "null";
    has_ran = false;
    
    //load data
    ifstream in;
    
    in.open("config.txt");
    
    in >> company_;
    recipt_num_ = 1000;
    in >> num_products_;
    
    //gets all products & prices_
    for (int i = 0; i < num_products_ && !in.eof(); i++)
    {
        in >> products_  [i];
        in >> prices_[i];
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
    in >> recipt_num_;
    cout << "RECIPT NUMBER---  " << recipt_num_ << endl;
    }
    
    in.close();
    
    //customer end
    c_name_ = "";
    date_ = "";
    items_ = 0;
    c_products_  [10];
    c_prices_[10];
}

void manager::Initialize()
{
    string temp = "";
    
    //Gets date_ only onece
    if (!has_ran)
    {
        cout << "Welcome!" << endl;
        
        //Get date_
        cout << "Enter date_ (mm/dd/yyyy): ";
        cin >> date_;
        
        has_ran = true;
        
        //Geta cashier information
        cout << "Enter name." << endl;
        cout << "First: ";
        cin >> employee_;
        cout << "Last: ";
        cin >> temp;
        employee_ += ' ' + temp;
        
        //Gets customer information
        cout << endl;
        cout << "Enter customer name." << endl;
        cout << "First: ";
        cin >> c_name_;
        cout << "Last: ";
        cin >> temp;
        c_name_ += " " + temp;
        ListItems();
    }
    else
    {
        //reset customer information
        total_ = 0.00;
        items_ = 0;
    
        //Gets customer information
        cout << endl;
        cout << "Enter customer name." << endl;
        cout << "Enter 'q' to quit." << endl;
        cout << "First: ";
        cin >> c_name_;
        if (c_name_ == "q")
        {
            Quit();
        }
        else
        {
        cout << "Last: ";
        cin >> temp;
        c_name_ += " " + temp;
        
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
    for (i = 0; i < num_products_; i++)
    {
        cout << i+1 << ": " << products_   [i];
        cout << " $" << prices_[i];
        cout << endl;
    }
    //special commands
    cout << "P : Print Recipt" << endl;
    cout << "Q : Quit" << endl;
    cout << "******************" << endl;
    cout << endl;
    char choice;
    cin >> choice;
    if (choice - '0' > 0 && choice - '0' <= num_products_)
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
    
    //adds customer items_
    c_products_  [items_] = products_  [p];
    c_prices_[items_] = prices_[p];
    
    items_++;

    total_ += prices_[p];
    
    for (int i = 0; i < items_; i++)
    {
        cout << i+1 << ". " << c_products_  [i] << " $" << c_prices_[i] << endl;
    }
    cout << "total_ $" << total_ << endl;
}

void manager::DisplayRecipt()
{
    //set recipt number
    recipt_num_++;
    
    //print recipt
    cout << endl;
    cout << "******************************" << endl;
    cout << fixed << setprecision(2) << "SALE" << endl;
    cout << c_name_ << endl;
    cout << date_ << endl;
    cout << '#' << recipt_num_ << endl << endl;
    
    //print all items_ purchased and prices_
    for (int i = 0; i < items_; i++)
    {
        cout << c_products_  [i] << '-' << setw(24 - strlen(c_products_  [i].c_str())) << "$" << c_prices_[i] << endl;
    }
    
    cout << endl << "Subtotal_: " << setw(16) << "$" << total_ << endl;
    cout << "Tax:" << setw(22) << "$" << total_ * 0.0725 << endl;
    cout << "total_:" << setw(20) << "$" << total_ + total_ * 0.0725 << endl;
    cout << endl;
    cout << "Cashier: " << employee_ << endl;
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
        ofFS << c_name_ << endl;
        ofFS << date_ << endl;
        ofFS << '#' << recipt_num_ << endl << endl;
        
        //print all items_ purchased and prices_
        for (int i = 0; i < items_; i++)
        {
            ofFS << c_products_  [i] << '-' << setw(24 - strlen(c_products_  [i].c_str())) << "$" << c_prices_[i] << endl;
        }
        
        ofFS << endl << "Subtotal_: " << setw(16) << "$" << total_ << endl;
        ofFS << "Tax:" << setw(22) << "$" << total_ * 0.0725 << endl;
        ofFS << "total_:" << setw(20) << "$" << total_ + total_ * 0.0725 << endl;
        ofFS << endl;
        ofFS << "Cashier: " << employee_ << endl;
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
    cin >> employee_;
    cout << "Last: ";
    cin >> temp;
    employee_ += ' ' + temp;
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
        off << recipt_num_ << endl;
    }
    
    off.close();
}