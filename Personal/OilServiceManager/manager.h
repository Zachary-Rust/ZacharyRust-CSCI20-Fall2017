#include <string>
using namespace std;

class manager {
    private:
    //store end
    int recipt_num;
    int latest_id;
    string company;
    string employee;
    int id;
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
    string FindLatestID();
    void Initialize();
    void SignIn();
    void NewEmployee();
    void ListItems();
    void BuyItem(int p);
    void PrintRecipt();
    void CreateRecipt();
};