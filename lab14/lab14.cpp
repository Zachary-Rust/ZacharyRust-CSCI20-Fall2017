#include <iostream>
using namespace std;

int main ()
{
    int totalMoney = 0;
    int moneyLeft  = 0;
    int endTotal   = 0;
    
    int pennies  = 0;
    int nickles  = 0;
    int dimes    = 0;
    int quarters = 0;
    
    double fee = 10.9e-2;
    
    cout << "Enter money: $0.";
    cin >> totalMoney;
    cout << endl;
    
    quarters = totalMoney / 25;
    moneyLeft = totalMoney % 25;
    
    dimes = moneyLeft / 10;
    moneyLeft = moneyLeft % 10;
    
    nickles = moneyLeft / 5;
    moneyLeft %= 5;
    
    pennies = moneyLeft / 1;
    
    cout << "Total Money: " << totalMoney << "." << endl;
    cout << "You will recieve: " << endl;
    cout << quarters << " quarters." << endl;
    cout << dimes << " dimes." << endl;
    cout << nickles << " nickles." << endl;
    cout << pennies << " pennies." << endl;
    
    cout << "After the fee, you will recieve: ";
    endTotal = totalMoney - (totalMoney * fee);
    cout << "$0." << endTotal << " cents." << endl;
    
    return 0;
}