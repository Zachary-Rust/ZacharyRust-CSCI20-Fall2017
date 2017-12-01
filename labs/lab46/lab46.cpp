#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int gpa(char score[], int size);

int main ()
{
    string students[2];
    
    int class_count = 0;
    int grade[7];
    char letter[7];
    
    ifstream inFS("input.txt");
    
    if (!inFS.is_open())
    {
        cout << "Error loading file." << endl;
        return 1;
    }
    
    int a = 0;
    while (!inFS.eof())
    {
    inFS >>students[0];
    inFS >>students[1];
    
    inFS >>class_count;
    
    for (int i = 0; i<class_count; i++)
    {
        inFS >>grade[i];
        inFS >>letter[i];
    }
    
    cout << students[0] << " " << students[1] << endl;
    cout << "Number of classes: " << class_count << endl;
    cout << "Gpa: " << gpa(letter, class_count) << endl;
    cout << "Saving info..." << endl << endl;
    
    ofstream off("Grade Report.txt");
    
    if (off.is_open)
    {
        cout << "Error loading file" << endl;
    }
    else
    {
        off >> ""
    }
    }
    inFS.close();
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