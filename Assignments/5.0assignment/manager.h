#include <string>
using namespace std;

class manager{
    private:
    //store end
    int recipt_num_;
    string company_;
    string employee_;
    int num_products_;
    string products_[10];
    double prices_[10];
    bool has_ran;
    
    //customer end
    string c_name_;
    string date_;
    double total_;
    int items_;
    string c_products_[10];
    double c_prices_[10];
    
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