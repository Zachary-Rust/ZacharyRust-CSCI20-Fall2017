#include <iostream>
using namespace std;

//  Zachary Rust
//  08/31/2017

/*
    References for 2017
    current population: 325,779,167
    births per second: 0.125
    deaths per second: 0.08333333
    immigrants per second: 0.03030303
    
    325779167 0.125 0.08333333 0.03030303
*/
int main ()
{
    int currentPopulation = 0;
    
    //components of population change
    
    float birthsPerSecond = 0;
    float deathsPerSecond = 0;
    float immigrantPerSecond = 0;
    
    float birthsPerYear = 0;
    float deathsPerYear = 0;
    float immigrantPerYear = 0;
    
    int numberOfYears = 0;
    int futurePopulation = 0;
    
    cout << "Welcome to population predictor." << endl;
    cout << "Please enter the current population: ";
    cin >> currentPopulation;
    cout << "Please enter the current births per second: ";
    cin >> birthsPerSecond;
    cout << "Please enter the current deaths per second: ";
    cin >> deathsPerSecond;
    cout << "Please enter the number of immigrants that enter the country per second: ";
    cin >> immigrantPerSecond;
    
    //convert perSeconds to perYears
    birthsPerYear = birthsPerSecond * 60 * 60 * 24 * 365;
    deathsPerYear = deathsPerSecond * 60 * 60 * 24 * 365;
    immigrantPerYear = immigrantPerSecond * 60 * 60 * 24 * 365;
    
    cout << "births per year: " <<  birthsPerYear << endl;
    cout << "deaths per year: " << deathsPerYear << endl;
    cout << "immigrants Per year: " << immigrantPerYear << endl;
    cout << "Enter number of years to predict aheah: ";
    cin >> numberOfYears;
    cout << "The total population in " << numberOfYears << " will be: ";
    
    //Calculate the future population
    int totalBirths = numberOfYears * birthsPerYear;
    int totalDeaths = numberOfYears * deathsPerYear;
    int totalImmigrants = numberOfYears * immigrantPerYear;
    
    cout << "total births: " <<  totalBirths << endl;
    cout << "total deaths: " << totalDeaths << endl;
    cout << "total immigrants: " << totalImmigrants << endl;
    cout << "current population : " << currentPopulation << endl;
    
    futurePopulation = currentPopulation + totalBirths + totalImmigrants - totalDeaths;
    
    //spits out answer
    cout << futurePopulation;
}