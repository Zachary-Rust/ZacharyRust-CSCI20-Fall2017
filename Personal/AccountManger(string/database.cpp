#include <iostream>
#include <string>

using namespace std;

class account
{
    private:
    string fName;
    string lName;
    string pWord;
    
    public:
    void SetUp(string f, string l, string p);
    
    void Print();
}

account::account