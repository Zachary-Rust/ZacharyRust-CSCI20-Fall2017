#include <iostream>
using namespace std;

//This class is used to keep track of someones annual salary, the only vairable is the annual salary
class Salary
{
    private: 
        //Data field
        double annual_;
    public:
        //Mutator Function
        void SetAnnualSalary(double salary)
        {
            annual_ = salary;
        }
        //Accessor Function
        double GetAnnualSalary()
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

int main ()
{
    Salary Zach;
    
    Zach.SetAnnualSalary(100000000000.00);
    Zach.GetAnnualSalary();
    Zach.Print();
}