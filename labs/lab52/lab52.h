#include <iostream>
#include <cstdlib>
#include <ctime>

int randomNumber(){
   srand(time(0));
   return (rand()% 10 + 1);
}
