#include <iostream>
#include <string>

using namespace std;

class item{
    private:
    int SIZE;
    
    string name[];
    int price[];
    int inventory[];
    
    public:
    item();
    
    InputItem(string n, int p, int i);
    
    PrintItems();
}

item::item(){
    int size = 1;
    name[0] = LIST_EMPTY
    price[0] = 0;
    inventory[0] = 0;
    
}

