#include <iostream>
#include <string>

using namespace std;

class Monster {
    private:
    string ears;
    
    public:
    //Getter
    string GetEars();
    //Setter
    void SetEars(string);
};

string Monster:: GetEars() {
    return ears;
}

void Monster:: SetEars(string e) {
    ears = e;
}

int main () {
    Monster Schmeagle;
    
    Schmeagle.SetEars("Vegitas");
    
    cout << Schmeagle.GetEars();
}