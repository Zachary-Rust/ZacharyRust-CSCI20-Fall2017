#include <iostream>

using namespace std;

int main()
{
   char word1[10];
   char word2[10];
   
   cin >> word1;
   cin >> word2;
   
   cout << "First Word: ";
   for (int i = 0; i < 10; i++)
   {
      cout << word1[i];
   }
   cout << endl;
   
   cout << "Second Word: ";
   for (int i = 0; i < 10; i++)
   {
      cout << word2[i];
   }
   cout << endl;
   
   word1[10] = word2[10];
   
   cout << "First Word: ";
   for (int i = 0; i < 10; i++)
   {
      cout << word1[i];
   }
   cout << endl;
}