//Zachary Rust
//10/25/17
//3.0 Assignment
//This project was a colaboration between Carter Dishman and Zachary Rust

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int PlayerRoll();

//This class holds all information for the computer player
class comp
{
    private:
    int comp_points;
    
    public:
    comp();
    
    void CompRoll();
    
    void AddPoints (int p);
    void ResetPoints();
    int GetPoints ();
};

//Class Functions
comp::comp()
{
    comp_points = 0;
}

int main()
{
    comp AI;
    srand(time(0));
    
    //"Global Variables"
    int player_points = 0;
    
    bool player_taking_turn = true;
    char decision = 'a';
    int player_turn_score =0;
    
    while (player_taking_turn)
    {
        //This variable keeps track of turn points
        int roll_dice_score = 0;
        
        cout << "Would you like to roll the dice? (Y/N)" << endl;
        cin >> decision;
        
        switch (decision)
        
        case 'y':
        roll_dice_score = PlayerRoll();
        if (player_turn_score != 1)
        {
            player_turn_score += roll_dice_score;
            cout << "You rolled: " << roll_dice_score << " Turn points: " << player_turn_score;
        }
        else
        {
            player_turn_score = 0;
            cout << "You rolled a 1.  Current turn points reset.  Total score: " << player_points;
            //AI.CompRoll();
        }
        break;
    }
}

int PlayerRoll()
{
    int r_num = rand()%6 + 1;
    cout << "##########" << endl;
    cout << "PLAYERROLL(): " << r_num << endl;
    cout << "##########" << endl;
    return r_num;
}

