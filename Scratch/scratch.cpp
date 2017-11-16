#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   ifstream fin;
   ofstream fout;
   
   fin.open("Output.txt");
   while (!fin.eof)
   {
      cout << endl;
   }
   fout << "Test" << endl;
   fout << "TEST LINE THISIEWP:IOJHD{FSOIJ" << endl;
   
   fin.close();
   fout.close();
}