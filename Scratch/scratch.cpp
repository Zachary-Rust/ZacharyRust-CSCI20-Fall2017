#include <iostream>

using namespace std;

int main()
{
   int num = 23;
   int* numPtr = nullptr;
   
   cout << num << endl;
   
   numPtr = &num;
   
   cout << numPtr << endl;
   
   cout << *numPtr << endl;
}