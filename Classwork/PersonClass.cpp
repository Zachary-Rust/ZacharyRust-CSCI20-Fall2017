#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
    string hair;
    string nose;
    string ears;
    string mouth;
    
    public:
    string GetHair ();
    void SetHair (string);
    
    string GetNose ();
    void SetNose (string);

    string GetEars ();
    void SetEars (string);
    
    string GetMouth ();
    void SetMouth (string);
};

string Person:: GetHair ()
{
    return hair;
}

void Person:: SetHair (string a)
{
    hair = a;
}

string Person:: GetNose ()
{
    return nose;
}

void Person:: SetNose (string a)
{
    nose = a;
}

void CreatePerson ()
{
    string name;
    
    cout << "Enter person's name." << endl;
    cin >> name;
    
    Person name;
    
    cout << "Created person."
}

int main ()
{
    Person Zach;
    
    Zach.SetHair("Brown");
    cout << "Hair Color: " << Zach.GetHair() << endl;
}