 #include <iostream>
 #include <string> //this was missing
 using namespace std;
 
 //must be declared before main function
 struct monster{
  string head;
  string eyes;
  string ears;
  string mouth;
  string nose;
  //can you use other variables in the same struct?
 };
 
 int main()
 {
   monster monsterA;
   monsterA.head = "Zombus";
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   //Important: The dot operator is used to assign variables in a struct
   
   cout<<"Head:"<<monsterA.head<<endl;
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl;
   
   monster monsterB;
   
   monsterB.head = "Vegitas";
   monsterB.eyes = "Zombus";
   monsterB.ears = "Vegitas";
   monsterB.mouth = "Zombus";
   
   monsterB.nose = "Wackus";
   cout << endl << "Monster B:" << endl;
   cout<<"Head:"<<monsterB.head<<endl;
   cout<<"Eyes:"<<monsterB.eyes<<endl;
   cout<<"Ears:"<<monsterB.ears<<endl;
   cout<<"Nose:"<<monsterB.nose<<endl;
   cout<<"Mouth:"<<monsterB.mouth<<endl;
   
   //return 0; should be here
 }