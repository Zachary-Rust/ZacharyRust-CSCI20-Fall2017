#include <string>
using namespace std;

class manager{
    private:
    //store end
    int recipt_num;
    string company;
    string employee;
    int num_products;
    string products[10];
    double prices[10];
    bool has_ran;
    
    //customer end
    string c_name;
    string date;
    double total;
    int items;
    string c_products[10];
    double c_prices[10];
    
    public:
    manager();
    void Initialize();
    void ListItems();
    void BuyItem(int p);
    void DisplayRecipt();
    void PrintRecipt();
    void ChangeCashier();
    void Quit();
    
};