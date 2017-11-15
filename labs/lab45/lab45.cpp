#include <iostream>
#include <string>
//Zachary Rust
//11-14-17
//Lab 4.5
//This program gets a users first and last names and provides example usernames

using namespace std;

int main ()
{
    string f_name;
    string l_name;
    
    //Get User Info
    cout << "Enter first name: ";
    cin >> f_name;
    //Check length
    while (f_name.length() > 10)
    {
        cout << "ERROR: First name cannot be longer than 10 characters...\n";
        cout << "Enter first name: ";
        cin >> f_name;
    }
    
    cout << "Enter last name: ";
    cin >> l_name;
    //Check length
    while (l_name.length() > 20)
    {
        cout << "ERROR: Last name cannot be longer than 20 characters...\n";
        cout << "Enter last name: ";
        cin >> l_name;
    }
    
    //Check if same
    if (f_name == l_name)
    {
        cout << "WARNING: Names are matching...\n";
    }
    //variable to hold suggested username
    string temp;
    
    //Three different username options...
    cout << "Three suggested usernames: " << endl;
    
    //1
    temp = tolower(f_name.at(0));
    temp += l_name;
    
    cout << "1. " << temp << endl;
    
    //2
    temp = l_name + "_" + f_name;
    
    cout << "2. " << temp << endl;
    
    //3
    temp = toupper(l_name.at(0));
    temp += "_";
    for (int i = 0; i < f_name.length(); i ++)
    {
        temp += tolower(f_name.at(i));
    }
    
    cout << "3. " << temp << endl;
    
    return 0;
}
/*
OUTPUT

Enter first name: Zachary
Enter last name: Rust
Three suggested usernames: 
1. zRust
2. Rust_Zachary
3. R_zachary

Enter first name: April
Enter last name: Browne
Three suggested usernames: 
1. aBrowne
2. Browne_April
3. B_april

Enter first name: AnaElizabeth
ERROR: First name cannot be longer than 10 characters...
Enter first name: AnaElizabe
Enter last name: Hazeltine-Smith
Three suggested usernames: 
1. aHazeltine-Smith
2. Hazeltine-Smith_AnaElizabe
3. H_anaelizabe

Enter first name: James
Enter last name: James
WARNING: Names are matching...
Three suggested usernames: 
1. jJames
2. James_James
3. J_james
*/