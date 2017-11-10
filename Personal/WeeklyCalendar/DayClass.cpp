#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class day{
    private:
    string s;
    int numEvents;
    
    public:
    day ();
    
    day(string n);
    
    void AddEvent();
    void DeleteEvent();
    int GetEvents();
    
    void Print();
};

day::day()
{
    s = "BLANK";
    numEvents = 0;
}

day::day(string n)
{
    s = n;
    numEvents = 0;
}

void day::AddEvent()
{
    numEvents = numEvents + 1;
}

void day::DeleteEvent()
{
    numEvents--;
}

int day::GetEvents()
{
    return numEvents;
}

void day::Print ()
{
    cout << s << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "~";
    }
    cout << endl;
}