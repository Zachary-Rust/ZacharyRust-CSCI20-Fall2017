//CONSTRUCTORS
#include <iostream>

using namespace std;

class ClassCraft {
    
    private:
    int health_;
    int ap_;
    int xp_;
    
    public:
    
    ClassCraft()
    {
        health_ = 100;
        ap_     = 30;
        xp_     = 10;
    }
    
    ClassCraft (int health)
    {
        if (health_ > 0)
        {
            health_ = health;
            ap_     = 30;
            xp_     = 10;
        }
    }
};

int main ()
{
    ClassCraft Zach;
    ClassCraft Mage (200);
    cout << "No Errors" << endl;
    return 0;
}