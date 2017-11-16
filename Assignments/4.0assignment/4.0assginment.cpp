//Zachary Rust
//11/16/17
//Assignment 4.0
//This program compares students' text answers to an answer key via fstream
//and give them 1 point for correct answers, 0 points for blank answers,   
//and -1/4 point for wrong answers.  It then outputs the information.
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//This class holds the information for each studet and is used for grading
//multiple students' tests
class student
{
    private:
    string f_name;
    string l_name;
    
    double grade;
    int missed_questions[21];
    
    public:
    student();
    
    void SetName(string f, string l);
    void SetScore(double s);
    void WrongAnswer(int problem, int num_missed);
    
    void PrintReport();
};

//student class constructor
student::student()
{
    f_name = "blank";
    l_name = "blank";
    grade = 0;
    for (int i = 0; i < 21; i++)
    {
        missed_questions[i] = 0;
    }
}

//sets student variables when file is read
void student::SetName(string f, string l)
{
    f_name = f;
    l_name = l;
}

void student::SetScore(double s)
{
    grade = s;
}

void student::WrongAnswer(int problem, int num_missed)
{
    missed_questions[num_missed - 1] = problem;
    missed_questions[num_missed] = 0;
}

void student::PrintReport()
{
    cout << "REPORT" << endl;
    cout << f_name << " " << l_name << endl;
    cout << "Score: " << grade << endl;
    if (missed_questions[0] != 0)
    {
        cout << "Missed questions:" << endl;
        for (int i = 0; missed_questions[i] != 0 && i < 21; i++)
        {
            if (missed_questions[i + 1] != 0)
            {
                cout << missed_questions[i] << ", ";
            }
            else
            {
                cout << missed_questions[i] << endl;
            }
        }
    }
    else
    {
        cout << "Perfect score!" << endl;
    }
}

int main ()
{
    //Used for arrays
    const int num_kids = 6;
    const int num_answers = 21;
    
    //Student variables
    student kids[num_kids];
    string names[2];
    
    //arrays for answers
    string s_answers[num_answers];
    string answers[num_answers];
    
    //sets up in file stream
    ifstream inFS;
    
    //Test answers load
    cout << "Loading answer key..." << endl;
    inFS.open("answerkey.txt");
    
    if (!inFS.is_open())
    {
        cout << "Failed to load answer key." << endl;
        return 1;
    }
    else
    {
        cout << "Successfully loaded answer key!" << endl << endl;
    }
    
    for (int i = 0; i < num_answers; i++)
    {
        inFS >> answers[i];
    }
    
    inFS.close();
    
    //Student answers load
    double points = 0;
    
    cout << "Loading student answers..." << endl;
    inFS.open("studentanswers.txt");
    
    if (!inFS.is_open())
    {
        cout << "Student answers failed to load!" << endl;
        return 1;
    }
    else
    {
        cout << "Successfully loaded student answers!" << endl << endl;
    }
    for (int a = 0; a < num_kids; a++)
    {
        for (int i = 0; i < num_answers + 1; i++)
        {
            if (i < 1)
            {
                inFS >> names[0];
                inFS >> names[1];
            }
            else
            {
                inFS >> s_answers[i - 1];
            }
        }
        
        //Checks students answers
        int missed = 0;
        for (int i = 0; i < num_answers; i++)
        {
            if (s_answers[i] == answers[i])
            {
                points += 1;
            }
            else if (s_answers[i] == "?")
            {
                missed++;
                kids[a].WrongAnswer(i + 1, missed);
            }
            else
            {
                points -= 0.25;
                missed++;
                kids[a].WrongAnswer(i + 1, missed);
            }
        }
        //Sets up class
        kids[a].SetName (names[0], names[1]);
        kids[a].SetScore (points);
        kids[a].PrintReport();
        cout << "\n\n";
        
        //Sets points to - for next kid
        points = 0;
    }
    inFS.close();
}
/*
OUPTUT

Loading answer key...
Successfully loaded answer key!

Loading student answers...
Successfully loaded student answers!

REPORT
Christian Smith
Score: 1.75
Missed questions:
1, 2, 3, 4, 6, 7, 8, 10, 11, 12, 13, 14, 17, 18, 19, 20, 21


REPORT
Paxton Jones
Score: 3.5
Missed questions:
1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15, 17, 20, 21


REPORT
Abby Sciuto
Score: 5
Missed questions:
1, 2, 3, 4, 5, 7, 8, 9, 10, 12, 13, 16, 20, 21


REPORT
Audrey Smithson
Score: -0.75
Missed questions:
1, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21


REPORT
Katie Holmes
Score: 2.5
Missed questions:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 15, 17, 18, 19, 20


REPORT
Carrie Grant
Score: 8
Missed questions:
1, 2, 3, 6, 7, 8, 11, 12, 16, 17, 18




Process exited with code: 0

*/