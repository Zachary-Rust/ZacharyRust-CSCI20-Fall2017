//Classes with arrays
#include <iostream>
#include <string>

using namespace std;

class student {
    private:
    
    string name;
    int avg_grade;
    
    public:
    student(string n = "default", int g = 0);
    void setName(string s);
    
    void Print();
    
    
};

student::student(string n = "default", int g = 0)
{
    name = n;
    avg_grade = g;
}

void student::setName(string s)
{
    name = s;
}

void student::Print()
{
    cout << "Name: " << name << " Grade: " << avg_grade << "." << endl;
}

int main ()
{
    student Students[10];
    
    Students[0].setName("John");
    
    for (int i = 0; i < 10; i++)
    {
        Students[i].Print;
    }
}