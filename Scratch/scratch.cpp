#include <iostream>
using namespace std;

int main(){

string mystring = "my test string";
string mystring2 = mystring;
 
string myString3 = "my test string";
if (myString3 == "my test string")
{
   cout<<"The same"<<endl;
}

string myString4 = "my test string";
int i = 0, spaceCount = 0;
while (i < 20)
{
   if (myString4[i] == ' ')
   {
        spaceCount++;
   }
   i++;
}

string myString5 = "my test string";
i = 0;
while (myString5[i] != '\0')
{
   cout<<myString5[i];
   i++;
}

string myString6 = "my test string";
myString6[14] = '!';
cout<<myString6<<endl;
}

//run the code
//what should each of these do?  Do they do them?\
//1. mystring2 gets set to mystring
//2. myString3 is checked to match a text
//3. myString4 has its spaces counted
//4. myString5 is output character by character
//5. myString6 has an ! inserted and then was printed