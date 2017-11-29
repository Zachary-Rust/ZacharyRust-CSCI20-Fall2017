#include <iostream> //There shouldn't be two imported iostreams
#include <iostream> 
#include <cstring> 
using namespace std;
/*
Zachary Rust
11.28.17
Lab 5.1
In this lab I commented code and explained what it did and what was wrong
*/
int main() {
    int nameLength = 0;
    char * name = new char[];   //This is a pointer pointing to a new character array, but there needs to be an index(10).  It's causing an error

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;    //name is a pointer and needs to be dereferenced

    char * head  = name;    //creates a pointer called head that points to names location
    char * tail = name;     //creates a pointer calld tail that points to names location
    nameLength = strlen(*name); //Gets the length of the word in the character array using * (dereferencing)

    cout << "Your word is " << firststr << endl;    //This variable has not been declared

    if (nameLength<10)  //needs to be <=, not just <
    {
         while (*head != '\0')  //dereferences the head pointer and checks each letteer until the ending character
         {
                cout << *head;  //outputs each letter in the array, printing the word.
                head++;     //This is how you cycle through pointer locaitons
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];    //sets tail to the last letter of name.

     if (nameLength < 10)
     {
          while (tail != name)  //This compares the end letter tail to a letter of the name and outs the tail letter until they aren't equal
          {
                 cout << *tail;     
                 tail--;
          }
     }
     cout << endl;

     head = name;   //sets head to name
     tail = &name[strlen(name) - 1];    //sets tail to the last letter of name again

     head++;    //moves pointer locaiton
     tail--;    //moves pointer location

     if (*head == *tail)    //if the dereferenced words are equal...
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}