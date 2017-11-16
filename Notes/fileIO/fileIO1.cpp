#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
   string line;
   ifstream fin;//*
   ofstream fout;
   
   fin.open("read.txt");
   fout.open("output.txt");

   while(!fin.eof())//?
   {
      getline(fin, line);//*
      fout<<line<<endl;//?
   }

   fin.close();//*
   fout.close();//?

   return 0;
}

//I think that "fin,fout,ifstream, and ofstream" have to do with file writing in this program.

//Mark with a //* 3-5 items that are important
//Mark with a //? 3-5 items that are unclear, incorrect, or you have questions about.
//identify which parts you think are related to file input/output.  and what they do.  Guess.;