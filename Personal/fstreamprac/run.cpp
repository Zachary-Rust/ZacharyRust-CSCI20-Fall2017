#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    string words[6];
    
    ifstream inFS;
    
    cout << "Opening file..." << endl;
    inFS.open("sample.txt");
    
    if (!inFS.is_open())
    {
        cout << "File failed to load!" << endl;
        return 1;
    }
    else
    {
        cout << "File loaded successfully." << endl;
    }
    
    for (int i = 0; i < 6; i++)
    {
        inFS >> words[i];
        cout << words[i] << " ";
    }
    
}