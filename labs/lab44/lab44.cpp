/*
Zachary Rust
11/9/17
Lab 4.4
*/
#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
    char first_name[10];
    char last_name[20];
    
    cout << "Enter first name: ";
    cin >> first_name;
    
    //Check if input name is too long
    int count = 10;
    
    while (strlen(first_name) > count)
    {
        cout << "ERROR: first name too long\n\n";
        cout << "Enter first name: ";
        cin >> first_name;
    }
    
    cout << "Enter last name: ";
    cin >> last_name;
    
    //Check if input name is too long
    count = 20;
    
    while (strlen(last_name) > count)
    {
        cout << "ERROR: last name too long\n\n";
        cout << "Enter last name: ";
        cin >> last_name;
    }
    
    //Checks if names are the same
    count = strlen(first_name);
    
    bool names_same = true;
    
    for (int i = 0; i < count; i++)
    {
        if (first_name[i] != last_name[i])
        {
            names_same = false;
        }
    }
    
    if (names_same == true)
    {
        cout << "WARNING: Entered same last and first name.\n";
    }
    
    //Create 3 different user name options
    
    cout << "Username options...\n\n";
    
    //first letter of first name, last name
    char name1[30];
    //first name, last name
    char name2[30];
    //last name, _, first name
    char name3[30];
    
    //name1
    name1[0] = first_name[0];
    strcat(name1, last_name);
    cout << name1 << endl;
    
    //name2
    strcpy(name2, first_name);
    strncat(name2, last_name, strlen(last_name));
    cout << name2 << endl;
    
    //name3
    strcpy(name3, last_name);
    name3[strlen(last_name)] = '_';
    strncat(name3, first_name, strlen(first_name));
    cout << name3 << endl;
    
}
/*
OUTPUT

Enter first name: Zachary
Enter last name: Rust
Username options...

ZRust
ZacharyRust
Rust_Zachary

Enter first name: April
Enter last name: Browne
Username options...

ABrowne
AprilBrowne
Browne_April

Enter first name: AnaElizabe
Enter last name: Hazeltine-Smith
Username options...

AHazeltine-Smith
AnaElizabeHazeltine-Smith
Hazeltine-Smith_AnaElizabe

Enter first name: James
Enter last name: James
WARNING: Entered same last and first name.
Username options...

JJames
JamesJames
James_James

*/