//Zachary Rust
//Date: 11/7/17
//Lab 4.3

#include <iostream>
#include <string>

using namespace std;

//class that holds each item for the store
class item{
    private:
    //shopping cart items
    string name;
    int price;
    int inventory;
    
    public:
    //constructor
    item();
    
    //used to check availability
    int GetNumLeft();
    
    //add/remove items
    void SetItems(string n, int p, int i);
    void BuyItems(int n);
    
    //display item
    void Print();
};

//This class holds the users cart
class cart{
    private:
    string name;
    int price;
    int num_bought;
    
    public:
    //Constructor
    cart();
    
    //used for recipt
    int GetNumBought();
    
    void BuyItem (string n, int p, int num);
    
    //Prints this items line in the recipt
    void Print();
};

//constructor
cart::cart()
{
    name = "EMPTY";
    price = 0;
    num_bought = 0;
}

int cart::GetNumBought()
{
    return num_bought;
}

void cart::BuyItem(string n, int p, int num)
{
    name = n;
    price = p;
    num_bought += num;
}

void cart::Print()
{
    cout << "Item: " << name << " - " << num_bought <<  "     Price: " << price * num_bought << endl;
}

//constructor
item::item()
{
    name = "empty";
    price = 0;
    inventory = 0;
}

int item::GetNumLeft()
{
    return inventory;
}

void item::SetItems(string n, int p, int i)
{
    name = n;
    price = p;
    inventory = i;
}

void item::BuyItems (int n)
{
    inventory -= n;
}

void item::Print()
{
    cout << name << " - " << "$" << price << " Inventory: " << inventory << "." << endl;
}

int main()
{
    //number of items in shop
    const int size = 10;
    
    //while loop variable
    int decision = 0;
    
    //Initialize store strings: Names, Stock number, Prices
    string names[size] = {"apples", "carrots", "peaches", "lettuce", "peppers", "avacados", "potatoes", "chocolate", "oreos", "cheese"};
    int stock[size] = {10, 12, 5, 22, 18, 6, 25, 8, 17, 11};
    int prices[size] = {5, 3, 6, 10, 5, 8, 10, 5, 2, 3};
    
    //variables for classes
    item goods[size];
    cart cart_goods[size];
    int how_many = 0;
    
    //sets up shop
    for (int i = 0; i < size; i++)
        {
            goods[i].SetItems(names[i], prices[i], stock[i]);
        }
        
    cout << "Welcome!\n";
    
    //This while loop runs until the user is done buying items
    while (decision != -1)
    {
        //Asks question and displays shop
        cout << "What would you like to buy?\nWhen done, enter -1.\n" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << i + 1 << ". ";
            goods[i].Print();
        }
        
        cin >> decision;
        
        //Purchases the item and checks if the input is within parameters
        if (decision > 0 && decision < 11 && decision != -1)
        {
            //sets to be used as index
            decision -= 1;
        
            cout << "How many?\n";
            cin >> how_many;
            
            //Checks to see if there are enough of the item left
            if (goods[decision].GetNumLeft() >= how_many)
            {
                cart_goods[decision].BuyItem(names[decision], prices[decision], how_many);
                goods[decision].BuyItems(how_many);
            }
            else
            {
                cout << "There aren't that many left.\n\n";
            }
        }
        
    }
    
    //Print final recipt when done buying
    cout << "RECIPT" << endl;
    for (int i = 0; i < size; i++)
    {
        if (cart_goods[i].GetNumBought() != 0)
        cart_goods[i].Print();
    }
}

/*
OUTPUT

Welcome!
What would you like to buy?
When done, enter -1.

1. apples - $5 Inventory: 10.
2. carrots - $3 Inventory: 12.
3. peaches - $6 Inventory: 5.
4. lettuce - $10 Inventory: 22.
5. peppers - $5 Inventory: 18.
6. avacados - $8 Inventory: 6.
7. potatoes - $10 Inventory: 25.
8. chocolate - $5 Inventory: 8.
9. oreos - $2 Inventory: 17.
10. cheese - $3 Inventory: 11.
1
How many?
7
What would you like to buy?
When done, enter -1.

1. apples - $5 Inventory: 3.
2. carrots - $3 Inventory: 12.
3. peaches - $6 Inventory: 5.
4. lettuce - $10 Inventory: 22.
5. peppers - $5 Inventory: 18.
6. avacados - $8 Inventory: 6.
7. potatoes - $10 Inventory: 25.
8. chocolate - $5 Inventory: 8.
9. oreos - $2 Inventory: 17.
10. cheese - $3 Inventory: 11.
1
How many?
4
There aren't that many left.

What would you like to buy?
When done, enter -1.

1. apples - $5 Inventory: 3.
2. carrots - $3 Inventory: 12.
3. peaches - $6 Inventory: 5.
4. lettuce - $10 Inventory: 22.
5. peppers - $5 Inventory: 18.
6. avacados - $8 Inventory: 6.
7. potatoes - $10 Inventory: 25.
8. chocolate - $5 Inventory: 8.
9. oreos - $2 Inventory: 17.
10. cheese - $3 Inventory: 11.
3
How many?
6
There aren't that many left.

What would you like to buy?
When done, enter -1.

1. apples - $5 Inventory: 3.
2. carrots - $3 Inventory: 12.
3. peaches - $6 Inventory: 5.
4. lettuce - $10 Inventory: 22.
5. peppers - $5 Inventory: 18.
6. avacados - $8 Inventory: 6.
7. potatoes - $10 Inventory: 25.
8. chocolate - $5 Inventory: 8.
9. oreos - $2 Inventory: 17.
10. cheese - $3 Inventory: 11.
3
How many?
4
What would you like to buy?
When done, enter -1.

1. apples - $5 Inventory: 3.
2. carrots - $3 Inventory: 12.
3. peaches - $6 Inventory: 1.
4. lettuce - $10 Inventory: 22.
5. peppers - $5 Inventory: 18.
6. avacados - $8 Inventory: 6.
7. potatoes - $10 Inventory: 25.
8. chocolate - $5 Inventory: 8.
9. oreos - $2 Inventory: 17.
10. cheese - $3 Inventory: 11.
6
How many?
3
What would you like to buy?
When done, enter -1.

1. apples - $5 Inventory: 3.
2. carrots - $3 Inventory: 12.
3. peaches - $6 Inventory: 1.
4. lettuce - $10 Inventory: 22.
5. peppers - $5 Inventory: 18.
6. avacados - $8 Inventory: 3.
7. potatoes - $10 Inventory: 25.
8. chocolate - $5 Inventory: 8.
9. oreos - $2 Inventory: 17.
10. cheese - $3 Inventory: 11.
-1
RECIPT
Item: apples - 7     Price: 35
Item: peaches - 4     Price: 24
Item: avacados - 3     Price: 24
*/