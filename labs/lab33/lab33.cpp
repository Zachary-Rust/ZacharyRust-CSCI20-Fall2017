#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

//This function finds out if the user is too high, or too low when the guess a number.
void SpacesAway (int u_num, int c_num)
{
    if (u_num > c_num)
    {
        cout << "you are too high." << endl;
    }
    else
    {
        cout << "you are too low." << endl;
    }
}

//This function creates a random number between 1 and 50.
int RNG ()
{
    int num = 0;
    num = (rand() % 50 + 1);
    return num;
}

int main()
{
    //Creates seed for random number generator
    srand(time(0));
    
    //user input and random number
    int user_num = 0;
    int comp_num = 0;
    comp_num = RNG();
    
    cout << "Pick a number between 1 and 50 to see if you gan guess the right one." << endl;
    cin >> user_num;
    
    //Checks that user input is within parameters.
    while (user_num < 1 || user_num > 50)
    {
        cout << "That number is not between 1 and 50." << endl;
        cout << "Try again." << endl;
        cin >> user_num;
    }
    
    while (user_num != comp_num)
    {
        
        cout << "Thats not the number, ";
        SpacesAway(user_num, comp_num);
        cout << "Try again: ";
        cin >> user_num;
        
        //Checks that user input is within parameters.
        while (user_num < 1 || user_num > 50)
            {
                cout << "That number is not between 1 and 50." << endl;
                cout << "Try again." << endl;
                cin >> user_num;
            }
    }
    
    //Countdown Timer
        for (int i = 0; i < 5; i++)
        {
            cout << 5 - i << endl;
        }
        
    cout << "You did it!" << endl;
    cout << "Goodbye." << endl;
}

/*
Attempts:
Pick a number between 1 and 50 to see if you gan guess the right one.
7
Thats not the number, you are too low.
Try again: 56
That number is not between 1 and 50.
Try again.
40
Thats not the number, you are too high.
Try again: 30
Thats not the number, you are too low.
Try again: 35
Thats not the number, you are too high.
Try again: 33
Thats not the number, you are too low.
Try again: 34
5
4
3
2
1
You did it!
Goodbye.


*/