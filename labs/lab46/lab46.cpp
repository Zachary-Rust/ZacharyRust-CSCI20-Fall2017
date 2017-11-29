#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    string students[3][3];
    string grades[5][2];
    
    int rows = 0;  //rows
    int cols = 0;  //columns
    
    ifstream inFS;
    
    inFS.open("input.txt");
    
    if (!inFS.is_open())
    {
        cout << "Error loading file." << endl;
        return 1;
    }
    
    for (rows = 0; rows < 3; rows++)
    {
        for (cols = 0; cols < 3; cols++)
        {
            inFS >> students[rows][cols];
            cout << students[rows][cols] << " ";
        }
        for (int r = 0; r < static_cast<int>(students[rows][2].at(0)) - 1; r++)
        {
            for (int c = 0; c < 2; c++)
            {
                inFS >> grades[r][c];
            }
            cout << endl << grades[r][0] << " " << grades[r][1] << endl;
        }
        cout << endl;
        /*
        int num = 0;
        for (int r = 0; r < 4; r++)
        {
            num += static_cast<int>(students[1][4].at(0));
            cout << num;
        }
        */
    }
    
    inFS.close();
}