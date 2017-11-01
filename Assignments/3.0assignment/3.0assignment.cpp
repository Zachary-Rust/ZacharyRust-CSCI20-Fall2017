//Zachary Rust
//10/25/17
//3.0 Assignment
//This project was a colaboration between Carter Dishman and Zachary Rust.

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;


//This class holds all information for the computer player
class comp
{
    private:
    int comp_points;
    int comp_turn_points;
    
    public:
    comp();
    
    void CompRoll();
    
    void AddPoints (int p);
    //void ResetPoints();
    void ResetCompTurnPoints();
    int GetPoints ();
};

class player
{
    private:
    int player_points;
    bool started;
    
    public:
    //constructor
    player();
    
    void GameLoop();
    void Started ();
    bool IsStarted ();
    void AddPoints (int p);
    int GetPoints ();
};

player::player ()
{
    player_points = 0;
    started = false;
}

void player::Started ()
{
    started = true;
}

bool player::IsStarted ()
{
    return started;
}

void player::AddPoints (int p)
{
    player_points += p;
}

int player::GetPoints ()
{
    return player_points;
}

//Class Functions
comp::comp()
{
    comp_points = 0;
    comp_turn_points = 0;
}

void comp::ResetCompTurnPoints()
{
    comp_turn_points = 0;
}

void comp::CompRoll()
{
    while (comp_turn_points < 30)
    {
        int comp_r_num = rand()%6 + 1;
        cout << "The computer rolled a: " << comp_r_num << endl;
    
        if (comp_r_num != 1)
        {
            comp_turn_points += comp_r_num;
        
            if (comp_turn_points > 30)
            {
                AddPoints(comp_turn_points);
                cout << "Computer got " << comp_turn_points << " points during that turn." << endl;
                cout << "The computer has " << comp_points << " points total." << endl;
                GameLoop();
            }
        
        }
        
        else if (comp_points + comp_turn_points >= 100)
        {
            cout << "CPU Wins!";
        }
        else
        {
            ResetCompTurnPoints();
            cout << "Computer rolled a one and got it's turn points reset." << endl << endl;
            GameLoop();
        }
    }
}

void comp::AddPoints(int p)
{
    comp_points += p;
}

int main()
{
    player a;
    comp b;
    srand(time(0));
    
    GameLoop();
    return 0;
}

int PlayerRoll()
{
    int r_num = rand()%6 + 1;
    return r_num;
}

void GameLoop (player &p, comp &AI)
{
    bool player_taking_turn = true;
    char decision = 'a';
    int player_turn_score =0;
    
    while (player_taking_turn)
    {
        //This variable keeps track of turn points
        int roll_dice_score = 0;
        
        cout << " Would you like to roll the dice? (Y/N) Or press (C) to check your score." << endl;
        cin >> decision;
        
        switch (decision)
        {
        case 'y':
        cout << endl;
        roll_dice_score = PlayerRoll();
        if (roll_dice_score != 1)
        {
            player_turn_score += roll_dice_score;
            if (player_turn_score + p.GetPoints() >= 100)
            {
                cout << "You won!" << endl;
                //return 0;
            }
            
            cout << "You rolled a: " << roll_dice_score << " Your points from this turn: " << player_turn_score << " Your total Points: " << p.GetPoints() << endl;
        }
        else
        {
            player_turn_score = 0;
            cout << "You rolled a 1. Points from this turn reset to 0. Total score: " << p.GetPoints() << endl;
            AI.CompRoll();
        }
        break;
        
        case 'n':
        cout << "Player turn score before adding points: " << player_turn_score << endl;
        p.AddPoints(player_turn_score);
        cout << "Player total score after adding turn points: " << p.GetPoints() << endl;
        AI.CompRoll();
        player_turn_score = 0;
        break;
        
        case 'c':
        cout << "Your total score is: " << p.GetPoints() << endl;
        
        
        default:
        cout << "Would you like to roll the dice? (Y/N)";
        }
    }
}
/*
Running /home/ubuntu/workspace/Assignments/3.0assignment/3.0assignment.cpp
/home/ubuntu/workspace/Assignments/3.0assignment/3.0assignment.cpp: In member function ‘void comp::CompRoll()’:
/home/ubuntu/workspace/Assignments/3.0assignment/3.0assignment.cpp:116:22: error: ‘GameLoop’ was not declared in this scope
             GameLoop();
                      ^
/home/ubuntu/workspace/Assignments/3.0assignment/3.0assignment.cpp: In function ‘int main()’:
/home/ubuntu/workspace/Assignments/3.0assignment/3.0assignment.cpp:132:14: error: ‘GameLoop’ was not declared in this scope
     GameLoop();
              ^
*/

/*
SOLUTION:
Use returns in the functions to go back to the game loop in main
*/