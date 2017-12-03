//user class
#include <string>
using namespace std;

class user {
    private:
    string fName;
    string lName;
    
    string table[10][4];
    
    double totalProduct;
    int numProducts;
    
    public:
    user();
    void SetName();
    string GetName();
    void AddItem();
    void SimpleInv();
    void PrintInv();
    void PrintRec();
    void SaveConfig();
    void SaveTable();
    void QuickInfo();
};