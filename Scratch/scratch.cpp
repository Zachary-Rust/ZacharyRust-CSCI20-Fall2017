#include <iostream>
using namespace std;

//This class handles someones annual salary and has a print function to output it
class Salary
{
    private: 
        double annual_;
    public:
        //Constructor
        Salary()
        {
                annual_ = 0;
        }
        
        Salary(int s)
        {
            if (s > 0)
            {
                annual_ = s;
            }
            else
            {
                annual_ = 0;
            }
        }
        //Set Function
        void SetAnnualSalary(double salary)
        {
            if (salary > 0){
                annual_ = salary;
            }
            else
                annual_ = 0;
        }
        //Get Function
        double GetAnnualSalary()
        {
            return annual_;
        }
        //Print Function
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

int main ()
{
    Salary Zach;
    Salary Neg (-340);
    Salary Ryan (58600);
    
    Zach.Print();
    Neg.Print();
    Ryan.Print();
}
/*
Output:

$0
$0
$58600
*/