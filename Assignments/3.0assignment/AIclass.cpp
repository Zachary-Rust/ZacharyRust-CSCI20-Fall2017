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
    void ResetPoints();
    int GetPoints ();
};

//Class Functions
comp::comp()
{
    comp_points = 0;
}

void comp::CompRoll()
{
    int comp_r_num = rand()%6 + 1;
    cout << "The computer rolled a: " << comp_r_num << endl;
    
    if (comp_r_num != 1)
    {
        comp_turn_points += comp_r_num;
        
        if (comp_turn_points > 30)
        {
            main();
        }
        
    }

}