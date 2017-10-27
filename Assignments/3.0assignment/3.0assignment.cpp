//Zachary Rust
//10/25/17
//3.0 Assignment
//This project was a colaboration between Carter Dishman and Zachary Rust

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int Roll();

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

//Global Varables
int player_points = 0;

int PlayGame (int t_score = 0)
{
    //If the player is already playing, this stores their turn score.
    int turn_score = t_score;
    
        char YN;
        
        cout << "Would you like to roll the die? (Y/N)" << endl;
        cin >> YN;
        cout << endl;
        
        //bool for while loop
    bool deciding = false;
    
    //This while loop keeps asking the player if they want 
    //to roll the die until the player gives a valid answer.
    while (deciding == false)
    {
        switch (YN)
    {
        case 'y':
        //This variable holds player score before turn starts
        int player_base_score = player_points;
        Roll(player_base_score);
        deciding = true;
        break;
        
        case 'n':
        AI.CompRoll();
        break;
        
        case ('c'):
            cout << endl;
            cout << "Scores:" << endl;
            cout << "Your points for this turn:" << turn_score << endl;
            cout << "Your total points: " << player_points << endl;
            cout << "Computers total points: " << AI.GetPoints() << endl;
            cout << endl;
        
        
        default:
        cout << "Would you like to roll the die? (Y/N)";
        cin >> YN;
    }
}
}

int Roll(int p_b_score = 0) //This function will act as a dice roll, 1 through 6.
{
        int turn_score = 0;

        int rand_roll = (rand()%6)+1;                          
        turn_score = (turn_score + rand_roll);
        
        if (rand_roll == 1)
        {
            turn_score = 0;
            player_points = p_b_score;
            cout << "You rolled a 1! Your points for this turn have been set to 0 and your total score is now: "<< player_points << endl;
            cout << endl;
            AI.CompRoll();
        }
        
        cout << "You rolled a: " << rand_roll << endl;
        cout << "You're current turn score: " << turn_score << endl;
        PlayGame(turn_score);
    }

comp::comp()
{
    comp_points = 0;
}

void comp::AddPoints (int p)
{
    comp_points += p;
}

void comp::ResetPoints ()
{
    comp_points = 0;
}

int comp::GetPoints()
{
    return comp_points;
}

void comp::CompRoll()
{
    //Point variable
    int comp_turn_points = 0;
    
    //is playing?
    bool comp_playing = true;
    while (comp_turn_points < 30 && comp_playing)
    {
        int rand_roll = (rand()%6)+1;
        if (rand_roll == 1)
        {
            comp_turn_points = 0;
            cout << "Computer rolled a 1. The computer's points for this turn have been set to 0 and the computer's total score is now: " << comp_points << endl;
            cout << endl;
            comp_playing = false;
            PlayGame();
        }
        if (comp_playing)
        {
            comp_turn_points += rand_roll;
        }
    }
    comp_points += comp_turn_points;
}

int main ()
{
    srand(time(0));
    
    //Creates opponent so that it can be accessed anywhere
    comp AI;

    //player points
    char play_game = 'p';
    
    //bool for while loop
    bool deciding = false;
    
    //This while loop keeps asking the player if they want to play
    //until the player gives a valid answer.
    while (deciding == false)
    {
        switch (play_game)
        {
            case 'y':
            PlayGame();
            deciding = true;
            break;
        
            case 'n':
            return 0;
            break;
        
            default:
            {
                cout << "Do you want to play a game of Pig? (Y/N)" << endl;
                cin >> play_game;
            }
        }
    }
}
/*
cout << "Roll again? (Y/N) Check score? (C)" << endl;
        cin >> input;
        cout << endl;
        
        switch (input)
        {
            case ('y'):
            keep_rolling = true;
            break;
            
            case ('n'):
            keep_rolling = false;
            
            player_points += turn_score;
            cout << "Your turn Points: " << turn_score << endl;
            cout << "Your total Points: " << player_points << endl;
            AI.CompRoll();
            //AI Turn
            break;
            
            
            
            default:
            cout << "Keep rolling? y/n" << endl;
            cin >> input;
            cout << endl;
            break;
        }
    }
    */