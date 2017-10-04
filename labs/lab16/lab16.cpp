#include <iostream>
#include <string>
using namespace std;

//struct to hold portfolio information
struct portfolio {
    string stockName;
    char sectorName;
    double currentSharePrice = 0.0;
    int numSharesOwned = 0;
};

int main()
{
    //portfolio information obtained
    
    //portfolio 1
    portfolio portfolio1;
    
    cout << "Enter first stock name: ";
    cin >> portfolio1.stockName;
    
    cout << "Enter the sector: ";
    cin >> portfolio1.sectorName;
    
    cout << "Enter the current share price: ";
    cin >> portfolio1.currentSharePrice;
    
    cout << "Enter the number of shares owned: ";
    cin >> portfolio1.numSharesOwned;
    
    //portfoliio 2
    portfolio portfolio2;
    
    cout << "Enter second stock name: ";
    cin >> portfolio2.stockName;
    
    cout << "Enter the sector: ";
    cin >> portfolio2.sectorName;
    
    cout << "Enter the current share price: ";
    cin >> portfolio2.currentSharePrice;
    
    cout << "Enter the number of shares owned: ";
    cin >> portfolio2.numSharesOwned;
    
    //portfolio 3
     portfolio portfolio3;
    
    cout << "Enter third stock name: ";
    cin >> portfolio3.stockName;
    
    cout << "Enter the sector: ";
    cin >> portfolio3.sectorName;
    
    cout << "Enter the current share price: ";
    cin >> portfolio3.currentSharePrice;
    
    cout << "Enter the number of shares owned: ";
    cin >> portfolio3.numSharesOwned;
    
    //portfolio 4
     portfolio portfolio4;
    
    cout << "Enter fourth stock name: ";
    cin >> portfolio4.stockName;
    
    cout << "Enter the sector: ";
    cin >> portfolio4.sectorName;
    
    cout << "Enter the current share price: ";
    cin >> portfolio4.currentSharePrice;
    
    cout << "Enter the number of shares owned: ";
    cin >> portfolio4.numSharesOwned;
    
    //Layour Table for Values
    cout << endl;
    cout << "Stock Name" << "    " << "No of Shares" << "    " << "Current Value" << "    " << "Total Value" << endl;
    cout << endl;
    cout << endl;
    
    //Table information
    cout << portfolio1.stockName << "    " << portfolio1.numSharesOwned << "    " << portfolio1.currentSharePrice << "    $" << static_cast <double> (portfolio1.currentSharePrice * portfolio1.numSharesOwned) << endl;
    cout << endl;
    cout << portfolio2.stockName << "    " << portfolio2.numSharesOwned << "    " << portfolio2.currentSharePrice << "    $" << static_cast <double> (portfolio2.currentSharePrice * portfolio2.numSharesOwned) << endl;
    cout << endl;
    cout << portfolio3.stockName << "    " << portfolio3.numSharesOwned << "    " << portfolio3.currentSharePrice << "    $" << static_cast <double> (portfolio3.currentSharePrice * portfolio3.numSharesOwned) << endl;
    cout << endl;
    cout << portfolio4.stockName << "    " << portfolio4.numSharesOwned << "    " << portfolio4.currentSharePrice << "    $" << static_cast <double> (portfolio4.currentSharePrice * portfolio4.numSharesOwned) << endl;
    
}

/*Results:

Test 1:

Stock Name    No of Shares    Current Value    Total Value


FordM    87    18.76    $1632.12

Albertsn    542    34.39    $18639.4

TSLA    50    375.64    $18782

AAPL    5    145.91    $729.55

Test 2:

Stock Name    No of Shares    Current Value    Total Value


TSLA    50    375.64    $18782

WFC    1368    53.02    $72531.4

Albertsn    542    34.39    $18639.4

ACN    22    136.22    $2996.84
*/