//Zachary Rust
//11/05/2017
//3.0 Assignment
//This project was a colaboration between Carter Dishman and Zachary Rust.

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int PlayerRoll();


class comp //Class initialization for the CPU
{
    private:
    int comp_points;
    
    public:
    comp();
    int CompRoll();
    void AddPoints (int p);
    void ResetPoints();
    int GetPoints ();
};

class player //Class initialization for the player
{
    private:
    int player_points;
    
    public:
    //constructor
    player();
    int PlayerRoll();
    void AddPoints (int p);
    int GetPoints ();
};

player::player () //Default constructor; sets player's points to 0 at the start of the game
{
    player_points = 0;
}

void player::AddPoints (int p) //Adds the turn poitns to the total points 
{
    player_points += p;
}

int player::GetPoints () //Accessor function; allows us to call the total points for the player
{
    return player_points;
}


comp::comp() //Default constructor; sets player's points to 0 at the start of the game
{
    comp_points = 0;
}


int comp::CompRoll() //This function is the "dice rolling" aspect of the CPU's turn
{
    int comp_r_num = rand()%6 + 1;
    return comp_r_num;
}

int player::PlayerRoll() //This function is the "dice rolling" aspect of the CPU's turn
{
    int r_num = rand()%6 + 1;
    return r_num;
}

int comp::GetPoints() //Accessor function; allows us to call the total points for the CPU
{
    return comp_points;
}

void comp::AddPoints(int p) //Adds the turn poitns to the total points 
{
    comp_points += p;
}

//Main Runs the game loop and initializes the classes at the beginning
int main()
{
    //Class initialization
    player p;
    comp AI;
    
    //Sets randoness
    srand(time(0));
    
    //Variables to check if game has ended and keep track of score
    bool playing = true;
    int player_turn_score =0;
    int roll_dice_score = 0;
    int comp_turn_points = 0;
    int comp_r_num = 0;
    
    //Decision player makes at the beginning of each turn
    char decision = 'a';
    
    //Game Loop
    while (playing)
    {
        cout << "Would you like to roll the dice? (Y/N) Or press (C) to check your score." << endl;
        cin >> decision;
        
        //Switch statement
        switch (decision)
        {
            case 'y':
            cout << endl;
            
            //Sets random dice roll
            roll_dice_score = p.PlayerRoll();
            
            //Checks to see if player rolled a one or not
            if (roll_dice_score != 1)
            {
                player_turn_score += roll_dice_score;
                
                //Checks to see if the player has won so that the player doesn't accidentally go over 100
                if (player_turn_score + p.GetPoints() >= 100)
                {
                    cout << "You won!" << endl;
                    playing = false;
                    break;
                }
            
            //Lets player know stats
            cout << "You rolled a: " << roll_dice_score << "\nYour points from this turn: " << player_turn_score << endl;
            
            //Lets player decide to roll or not again
            break;
        }
        //If player rolls a one: resets turn score, let's player know, transfers to computer turn
        else
        {
            player_turn_score = 0;
            cout << "You rolled a 1. Points from this turn reset to 0. Total score: " << p.GetPoints() << endl;
            decision = 'n';
        }
        
        case 'n':
        //Adds the player points if the player is done taking turn
        p.AddPoints(player_turn_score);
        
        //Computer turn loop plays until computer has a score above 30
        while (comp_turn_points <= 30)
        {
            //Checks to see if the computer has won before rolling again
            if (comp_turn_points + AI.GetPoints() >= 100)
            {
                cout << "The computer won!" << endl;
                playing = false;
                break;
            }
            
            //Creates random dice roll
            comp_r_num = AI.CompRoll();
            
            //Keeps player up to date with computer turn
            cout << "The computer rolled a: " << comp_r_num << "." << endl;
            
            //Checks to see if computer rolled a one or not
            if (comp_r_num != 1)
            {
                comp_turn_points += comp_r_num;
            }
            //If computer rolls a one, resets turn points and ends turn
            else
            {
                comp_turn_points = 0;
                cout << "Computer rolled a one and got it's turn points reset." << endl << endl;
                break;
            }
        }
        
        //If computer gets a turn score over 30, adds the points and lets the user know the stats, then resets the turn points and ends the turn.
        AI.AddPoints(comp_turn_points);
        cout << "Computer got " << comp_turn_points << " points during that turn." << endl;
        cout << "The computer has " << AI.GetPoints() << " points total." << endl;
        comp_turn_points = 0;
        break;
        
        //Check score
        case 'c':
        cout << "Your total score is: " << p.GetPoints() << endl;
        cout << "Computer's total score is:" << AI.GetPoints() << endl;
        break;
        
        //If invalid input
        default:
        cout << "Would you like to roll the dice? (Y/N)";
        break;
        }
    }
}

