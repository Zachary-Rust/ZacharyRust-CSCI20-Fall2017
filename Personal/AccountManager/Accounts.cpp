#include <iostream>
#include <cstring>

using namespace std;

class account
{
    private:
    
    char userName[11];
    char password[11];
    
    public:
    account();
    account(char name[], char word[]);
    
    void GetName(char name[]);
    
    void AddUser(char name[], char word[]);
    void Print();
};
account::account()
{
    strcpy(userName, "EMPTY");
}


account::account (char name[], char word[])
{
    strcpy(userName, name);
    strcpy(password, word);
}

void account::GetName(char name[])
{
     for (int i = 0; name[i] != '\0'; i++)
     {
         name[i] = userName[i];
         name[i+1] = '\0';
     }
}

void account::AddUser (char name[], char word[])
{
    strcpy(userName, name);
    strcpy(password, word);
}

void account::Print()
{
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Account successfully created!" << endl;
    cout << "Username: " << userName << endl;
    cout << "Password: " << password << endl;
    cout << "IMPORTANT: If you forget these you will not be able to access your accout!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
}