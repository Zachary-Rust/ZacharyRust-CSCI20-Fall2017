#include <iostream>
using namespace std;

int main()
{
    int alpha = 5;     //sets alpha to 5
    int beta = 20;     //sets beta to 20
    
    int * alphaPtr = &alpha;     //creates and initializes a pointer named alphaPtr to the memory location of alpha
    int * betaPtr = &beta;     //creates and initializes a pointer named betaPtr to the memory location of beta
    
    cout<<*alphaPtr<<endl;     //outputs alpha by going through the pointer 5
    cout<<*betaPtr<<endl;     //outputs beta by going throught the pointer 20
    
    *alphaPtr += 5;     //adds 5 to the value in the memory location of alpha
    betaPtr = alphaPtr;     //sets betaPtr memory location to alphaPrt memory location
    
    cout<<*alphaPtr<<endl;     //outputs the value in alphaPtr 10
    cout<<*betaPtr<<endl;     //outputs the value in betaPtr (which was set to alphaPtr, so will output the same value) 10
}

//Comment each line of code.  Explain what it is doing.  What value is held there.
//Why is it doing what it is doing?
//This program sets two variables and sets two pointers to point to them.
//It then adds 5 to alpha through the pointer and then sets the pointers to go to the same location.