#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
    int size = 0;
    
    cout << "Enter the number of items you want to add: ";
    cin >> size;
    
    string name[size];
    int price[size];
    int inventory[size];
    
    string n;
    int p = 0;
    int in = 0;
    
    for (int i = 0; i < size; i++)
    {
        
        cout << "Input item " << i + 1 << " name: ";
        cin >> n;
        
        name[i] = n;
        
        cout << "Input item " << i + 1 << " price: ";
        cin >> p;
        
        price[i] = p;
        
        cout <<"Input item " << i + 1 << "inventory: ";
        cin >> in;
        
        inventory[i] = in;
        cout << endl;
    }
    
    cout << "Name" << setw (20) << " Price" << setw(24) << "Inventory" << endl;
    
    //This sets the underline under the headings
    for (int i = 0; i < 63; i++)
    {
        cout << "~";
    }
    cout << endl;
    
     
    for (int a = 0; a < size; a++)
    {
        int temp = 0;
        string result;
        
        stringstream convert;
        
        convert << price[a];
        result = convert.str();
        
        string r;
        
        convert << inventory[a];
        r = convert.str();
        
        int space = 0;
        if (result.length() > r.length())
        {
            space = result.length();
        }
        else
        {
            space = 0;
        }
        
        cout << name[a] << setw(20 - name[a].length() + result.length() - 1) << price[a] << setw(20 - result.length() + (r.length() - result.length())) << inventory[a] << endl;
    }
}