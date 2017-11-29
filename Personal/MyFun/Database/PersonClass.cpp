#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class user {
    private:
    string fName;
    string mName;
    string lName;
    
    int age;
    int weight;
    char gender;
    
    string pWord;
    
    public:
    user();
    void SetInfo(string f, string m, string l, int a, int w, char g, string p);
    void OutInfo();
    void Print();
};

user::user()
{
    fName = "null";
    mName = "null";
    lName = "null";
    
    age = -1;
    weight = -1;
    gender = '-';
    
    pWord = "Password123";
}

void user::SetInfo (string f, string m, string l, int a, int w, char g, string p)
{
    fName = f;
    mName = m;
    lName = l;
    
    age = a;
    weight = w;
    gender = g;
    
    pWord = p;
}

void user::OutInfo()
{
    ofstream ofFS;
    
    ofFS.open(fName + lName + ".txt");
    
    if (ofFS.is_open() == false)
    {
        cout << "error loading file..." << endl;
    }
    else
    {
        ofFS << fName << endl;
        ofFS << mName << endl;
        ofFS << lName << endl;
        ofFS << age << endl;
        ofFS << weight << endl;
        ofFS << gender << endl;
        ofFS << pWord << endl;
        
        cout << "\n******" << endl;
        cout << "Saved!" << endl;
        cout << "******\n" << endl;
    }
    ofFS.close();
}

void user::Print()
{
    cout << fName << " " << mName.at(0) << " " << lName << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Gender: " << gender << endl;
}