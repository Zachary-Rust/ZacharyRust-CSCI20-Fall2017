#include <iostream>

using namespace std;

//dont do this
class Student
{
    private:
    int grade1;
    int grade2;
    int grade3;
};

//or do this

int main()
{
    //do this
    double grades[3];
    
    grades[0] = 100;
    grades[1] = 200;
    
    //Or do this
    
    double the_grades[3] = { 100, 200, 300 };
    
    for (int i = 0; i < 3; i++)
    {
        cin >> the_grades[i];
    }
    
    int avg = 0;
    
    for (int i = 0; i < 3; i++)
    {
        avg += the_grades[i];
    }
    
    avg = avg/3;
    
    cout << avg;
}