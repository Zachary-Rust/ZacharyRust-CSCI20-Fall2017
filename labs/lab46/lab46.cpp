#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    string students[3][3];
    
    int classCount = 0;
    int grade[7];
    char letter[7];
    
    int rows = 0;  //rows
    int cols = 0;  //columns
    
    ifstream inFS("input.txt");
    
    if (!inFS.is_open())
    {
        cout << "Error loading file." << endl;
        return 1;
    }
    
    
    inFS >>students[0][0];
    inFS >>students[0][1];
    
    inFS >>classCount;
    
    for(int i = 0; i<classCount; i++)
    {
        inFS >>grade[i];
        inFS >>letter[i];
        
    }
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