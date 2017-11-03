#include <iostream>
#include <string>

using namespace std;
/*
Zachary Rust
11/2/17
4.2 Lab - Parallel Arrays
This program will keep track of an online shopping cart and an online stores inventory using parallel arrays
*/

int main()
{
    //Initialize store strings: Names, Stock number, Prices
    string names[10] = {"apples", "carrots", "peaches", "lettuce", "peppers", "avacados", "potatoes", "chocolate", "oreos", "cheese"};
    int stock[10] = {10, 12, 5, 22, 18, 6, 25, 8, 17, 11};
    int prices[10] = {5, 3, 6, 10, 5, 8, 10, 5, 2, 3};
    
    //Variables for loop
    bool buy = true;
    
    char choice = 'q';
    int n_choice = 0;
    int number_items = 0;
    
    int i = 0;
    
    int total = 0;
    
    //Loops until done buying
    while (buy)
    {
        cout << "Would you like to buy an item? (y/n)" << endl;
        cin >> choice;
        
        //Handles input
        switch (choice)
        {
            case 'Y':
            case 'y':
            cout << "Which item would you like to buy?" << endl;
            
            //Creates a list of all items, prices, and stock numbers
            for (i = 0; i < 10; i++)
            {
                cout << i + 1 << ": " << names[i] << " $" << prices[i] << "     Inventory: " << stock[i] << endl;
            }
            cin >> n_choice;
            
            //subtract 1 for ease of use with arrays
            n_choice -= 1;
            if (stock[n_choice] == 0)
            {
                cout << "There aren't any left!" << endl;
                break;
            }
            cout << "You chose: " << names[n_choice] << "." << endl;
            cout << "How many do you want?" << endl;
            cin >> number_items;
            
            //Checks to see they didn't ask for too many
            if (stock[n_choice] - number_items < 0)
            {
                cout << "Not enough in stock!" << endl;
                break;
            }
            
            //subtracts the number from the store stock
            stock[n_choice] -= number_items;
            total += prices[n_choice] * number_items;
            cout << "Total: " << total << "." << endl;
            break;
            
            case 'N':
            case 'n':
            cout << "Total price: $" << total << endl;
            cout << "Have a good day!" << endl;
            buy = false;
            break;
            
            default:
            break;
        }
    }
    return 0;
}