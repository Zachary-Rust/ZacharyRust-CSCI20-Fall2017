#include <iostream>
#include <iomanip>
#include "EventClass.cpp"
#include "DayClass.cpp"

using namespace std;

int main ()
{
    
    const string defaultDays [7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    day days[7];
    event events[5];
    
    //loop control
    char choice = 'a';
    int day = 0;
    string eventTitle = "empty";
    string eventDescription = "empty";
    
    for (int i = 0 ; i < 7; i++)
        {
            days[i] = defaultDays[i];
        }
    
    while (choice != '-')
    {
        cout << "Would you like to add an event?(y/n) ";
        cin >> choice;
        
        switch (choice)
        {
            case 'y':
            cout << "Which day?\nm/t/w/T/f/s/S... (Caps matter) ";
            cin >> choice;
            cout << "Enter event title: ";
            cin >> eventTitle;
            cout << "Enter event description: ";
            cin >> eventDescription;
            
                switch (choice)
                {
                    case 'm':
                    day = 0;
                    events[0].AddEvent(eventTitle, eventDescription, days[day].GetEvents());
                    days[0].AddEvent();
                    break;
                    
                    case 't':
                    day = 1;
                    events[1].AddEvent(eventTitle, eventDescription, days[day].GetEvents());
                    days[1].AddEvent();
                    break;
                    
                    case 'w':
                    day = 2;
                    events[2].AddEvent(eventTitle, eventDescription, days[day].GetEvents());
                    days[2].AddEvent();
                    break;
                    
                    case 'T':
                    day = 3;
                    events[3].AddEvent(eventTitle, eventDescription, days[day].GetEvents());
                    days[3].AddEvent();
                    break;
                    
                    case 'f':
                    day = 4;
                    events[4].AddEvent(eventTitle, eventDescription, days[day].GetEvents());
                    days[4].AddEvent();
                    break;
                    
                    case 's':
                    day = 5;
                    events[5].AddEvent(eventTitle, eventDescription, days[day].GetEvents());
                    days[5].AddEvent();
                    break;
                    
                    case 'S':
                    day = 6;
                    events[6].AddEvent(eventTitle, eventDescription, days[day].GetEvents());
                    days[6].AddEvent();
                    break;
                    
                    default:
                    break;
                }
            break;
        
            case 'n':   
            for (int i = 0 ; i < 7; i++)
            {
                days[i].Print();
                for (int c = 0; c < days[i].GetEvents(); c++)
                {
                    events[day].Print(c);
                }
            }
            break;
            
            default:
            break;
        }
    }
}