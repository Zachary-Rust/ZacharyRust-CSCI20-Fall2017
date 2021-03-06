 // This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.
#include <iostream> 
using namespace std; 
int main() {
        // Read a character in
        char ch;
        cout << "Please enter a character: ";
        cin  >> ch;
         
// check -- is it a letter??
    while (ch != '-')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
               cout << "Yes, that is a uppercase letter." << endl;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
               cout << "Yes, that is a lowercase letter" << endl;
        }
        else 
        {
            cout << "Not a letter" << endl;
        }
        
        cout << "Enter -1 to end program." << endl;
        cin >> ch;
    }

return 0;
    
}

/*
Output:

Please enter a character: G6AS-1
Yes, that is a uppercase letter.
Enter -1 to end program.
Not a letter
Enter -1 to end program.
Yes, that is a uppercase letter.
Enter -1 to end program.
Yes, that is a uppercase letter.
Enter -1 to end program.
*/