#include <iostream>

using namespace std;

void ApproachHall();
void ApproachWell();
void HideInCorner();

int main ()
{
    cout << "You step into a dark, cold room.  The air is humid and wet." << endl;
    cout <<"There is a well in the middle of the room.  Emmiting from the well is what seems to be the sound a woman humming." << endl;
    cout <<"You see a hallway across the room with light coming from it." << endl;
    cout <<"Do you?" << endl;
    cout <<"1. Approach the well. \n2. Go Down the hallway.\n3. Wait in the corner of the room." << endl;
    
    int a = 0;
    cin >> a;
    
    switch (a)
    {
        case 1:
        ApproachWell();
        break;
        
        case 2:
        ApproachHall();
        break;
        
        case 3:
        HideInCorner();
        break;
    }
}

void ApproachWell ()
{
    cout << "             __        " << endl;
    cout << "            .  ,       " << endl;
    cout << "           /  (        " << endl;
    cout << "          /   \\       " << endl;
    cout << "         /     \\      " << endl;
    cout << "        / O    O\\     " << endl;
    cout << "((()   |    ()   |   ()))" << endl;
    cout << "\\ ()   (  .____. )   ()  /  " << endl;
    cout << "" << endl;
}

void ApproachHall()
{
    
}

void HideInCorner()
{
    
}