//Zachary Rust
//11/30/17
//lab 4.6 - This lab reads an input file of students grades and classes and outputs an html page to display the data
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//This function claculates gpa
int gpa(char score[], int size);

int main ()
{
    //first/last name
    string students[2];
    
    int class_count = 0;
    int grade[7];
    char letter[7];
    
    //Set up file streams
    ifstream inFS("input.txt");
    ofstream off("GradeReport.html");
    
    //Set up html page
    off << "<!DOCTYPE html>" << endl;
    off << "<html>" << endl;
    off << "<head>" << endl;
    off << "<title>Progress Report</title></title>" << endl;
    off << "</head>" << endl;
    off << "<body>" << endl << endl;
    
    //Check if input file is open
    if (!inFS.is_open())
    {
        cout << "Error loading file." << endl;
        return 1;
    }
    
    //Checks if created file is open
    if (!off.is_open())
    {
        cout << "Error creating file" << endl;
        return 1;
    }
    
    //loops through each student until none left
    while (!inFS.eof())
    {
    //first/last names
    inFS >>students[0];
    inFS >>students[1];
    
    //used for loop
    inFS >>class_count;
    
    //takes in grades for each class
    for (int i = 0; i<class_count; i++)
    {
        inFS >>grade[i];
        inFS >>letter[i];
    }
    
    //cin does not read the newline character, so this checks if it hit it to avoid double reading the last student
    if (!inFS.eof())
    {
    // cout << students[0] << " " << students[1] << endl;
    // cout << "Number of classes: " << class_count << endl;
    // cout << "Gpa: " << gpa(letter, class_count) << endl;
    // cout << "Saving info..." << endl << endl;
    
    off << "<h1>" << students[0] << " " << students[1] << "</h1>" << endl;
    off << "<p>" << "Number of classes: " << class_count << "</p>" << endl;
    off << "<p>" << "Gpa: " << gpa(letter, class_count) << "</p>" << endl;
    off << endl;
    }
}
    inFS.close();
    
    //Finish html page
    off << endl << "</body>" << endl;
    off << "</html>";
    off.close();
}

int gpa (char score[], int size)
{
    int gpa = 0;
    
    for (int i = 0; i < size; i++)
    {
        switch (score[i])
        {
            case 'A':
            gpa += 5;
            break;
            
            case 'B':
            gpa += 4;
            break;
            
            case 'C':
            gpa += 3;
            break;
            
            case 'D':
            gpa += 2;
            break;
            
            case 'F':
            gpa += 1;
            break;
        }
    }
    
    gpa = gpa/size;
    return gpa;
}