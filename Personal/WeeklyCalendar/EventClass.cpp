#include <iostream>
#include <string>

using namespace std;

class event{
    private:
    const int maxEvents = 10;
    string title[];
    string description[];
    
    public:
    event();
    
    void AddEvent(string t, string d, int numEvents);
    
    void Print();
};

event::event()
{
    for (int i = 0; i < maxEvents; i++)
    {
        title[i] = "EMPTY";
        description[i] = "EMPTY";
    }
}

void event::AddEvent(string t, string d, int numEvents)
{
    title[numEvents] = t;
    description[numEvents] = d;
}

void event::Print(int n)
{
    cout << endl;
    cout << title[n] << endl;
    cout << "- " << descrisption[n] << endl;
}