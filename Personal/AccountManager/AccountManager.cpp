#include <iostream>
#include <cstring>
#include "Accounts.cpp"

using namespace std;
char LogIn(account s[], int num);
int CreateAccount(account s[], int num);

int main()
{
    bool app = true;
    
    while (app)
    {
        cout << "[1] - Log In\n[2] - Create Account\n[3] - Exit\n";
        
        account users[50];
        int id = 0;
        
        char choice;
        cin >> choice;
        
        switch (choice)
        {
            case '1':
            LogIn(users, id);
            break;
            
            case '2':
            id = CreateAccount(users, id);
            users[id].Print();
            break;
            
            case '3':
            app = false;
            break;
            
            default:
            main();
            break;
        }
    }
}

char LogIn(account s[], int num)
{
    char uName[11];
    char pWord[11];
    
    char compare[11];
    
    cout << "Enter username: ";
    cin >> uName;
    
    for (int i = 0; i < num; i++)
    {
        s[i].GetName(compare);
        cout << compare << endl;
        if (compare == uName)
        {
            cout << "Found You!";
        }
    }
}

int CreateAccount(account s[], int num)
{
    char uName[11];
    char pWord[11];
    
    cout << "Enter username: ";
    cin >> uName;
    
    cout << "Enter password: ";
    cin >> pWord;
    
    s[num].AddUser(uName, pWord);
    
    return num;
}