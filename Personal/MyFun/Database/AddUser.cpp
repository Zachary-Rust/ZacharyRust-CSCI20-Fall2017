//This program is a base database for users' accounts

#include <iostream>
#include <fstream>
#include "PersonClass.cpp"
using namespace std;

void AddUser();
void FindUser();
void Quit();

int main ()
{
    int decision = 0;
    
    while (decision != 3)
    {
        cout << "1. Add User \n2. Find User \n3. Quit" << endl;
        cin >> decision;
    
        switch (decision)
        {
            case 1:
            AddUser();
            break;
            
            case 2:
            FindUser();
            break;
            
            case 3:
            Quit();
            return 0;
            break;
            
            default:
            cout << "1. ADD USER \n2. Find User \n3. Quit" << endl;
            break;
        }
    }
}

void AddUser ()
{
    string f;
    string m;
    string l;
    int age = 0;
    int weight = 0;
    char gender = '-';
    string pWord = "Password123";
    
    do
    {
        cout << "First name: ";
        cin >> f;
    }
    while (f.length() > 10);
    do
    {
        cout << "Middle name: ";
        cin >> m;
    }
    while (m.length() > 10);
    do
    {
        cout << "Last Name: ";
        cin >> l;
    }
    while (l.length() > 10);
    cout << "Age: ";
    cin >> age;
    cout << "Weight: ";
    cin >> weight;
    cout << "Gender(m/f): ";
    cin >> gender;
    cout << "Password: ";
    cin >> pWord;
    
    user myUser;
    myUser.SetInfo(f,m,l,age,weight,gender,pWord);
    myUser.OutInfo();
    cout << "Saved information:" << endl;
    myUser.Print();
}

void FindUser()
{
    string f;
    string l;
    
    cout << "Enter first name: ";
    cin >> f;
    cout << "Enter last name: ";
    cin >> l;
    
    ifstream inFS;
    inFS.open(f + l + ".txt");
    
    if (inFS.is_open() == false)
    {
        cout << endl << "Didn't find user" << endl << endl;
    }
    else
    {
        cout <<  endl << "Found user" << endl << endl;
    }
}

void Quit()
{
    cout << "Goodbye..." << endl;
}