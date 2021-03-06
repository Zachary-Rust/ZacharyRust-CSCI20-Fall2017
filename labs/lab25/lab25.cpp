//Created By: Zachary Rust   
//Created On: 10/4/2017      
//This program takes a price of an item and gives all the taxes for multiple states, counties, and cities.
 
 #include <iostream> 
 #include <iomanip>                         //this PPD will be used to set decimal percision to 2 places.
 using namespace std;
 
 class Tax {       
    private:                                //All of the vars that will be used in this programs
    const double chico_state   = 6.00e-2;   //e-2 moves the decimal two places to the left(personal pref)
    const double chico_county  = 0.25e-2;
    const double chico_city    = 0.0;
    const double chico_special = 1.0e-2;
    
    const double paradise_state   = 6.00e-2;
    const double paradise_county  = 0.25e-2;
    const double paradise_city    = 0.50e-2;
    const double paradise_special = 1.00e-2;
    
    const double sac_state   = 6.00e-2;
    const double sac_county  = 0.25e-2;
    const double sac_city    = 0.50e-2;
    const double sac_special = 1.50e-2;
   
    const double vegas_state   = 4.60e-2;
    const double vegas_county  = 3.65e-2;
    const double vegas_city    = 0.0;
    const double vegas_special = 0.0;
    
    const double phx_state   = 5.60e-2; 
    const double phx_county  = 0.70e-2;
    const double phx_city    = 2.30e-2;
    const double phx_special = 0.0;
    
    double item_price = 0.0;
    
    public:   
    
    void SetPrice(double P);
    double GetPrice();
    
    void Print();
    
    
    double GetChicoState();
    double GetChicoCounty();
    double GetChicoCity();
    double GetChicoSpecial();
    
    double GetParadiseState();
    double GetParadiseCounty();
    double GetParadiseCity();
    double GetParadiseSpecial();
    
    double GetSacState();
    double GetSacCounty();
    double GetSacCity();
    double GetSacSpecial();
    
    double GetVegasState();
    double GetVegasCounty();
    double GetVegasCity();
    double GetVegasSpecial();
    
    double GetPhxState();
    double GetPhxCounty();
    double GetPhxCity();
    double GetPhxSpecial();
    
    
    
    double GetItemPrice ();
     
 };
 
//Prints all taxes for a certain item
void Tax::Print()
{
 cout.setf(ios::fixed); 
 
 cout << setprecision(2) << "California State Tax: $" << GetChicoState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Butte County Tax: $" << GetChicoCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Chico City Tax: $" << GetChicoCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Chico Special Tax: $" << GetChicoSpecial() * GetItemPrice() << endl << endl;
 cout << endl;
 
 cout << setprecision(2) << "California State Tax: $" << GetParadiseState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Butte County Tax: $" << GetParadiseCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Paradise City Tax: $" << GetParadiseCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Paradise Special Tax: $ " << GetParadiseSpecial() * GetItemPrice() << endl;
 cout << endl;
 
 cout << setprecision(2) << "California State Tax: $" << GetSacState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Sacramento County Tax: $" << GetSacCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Sacramento City Tax: $" << GetSacCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Sacramento Special Tax: $" << GetSacSpecial() * GetItemPrice() << endl;
 cout << endl;
 
 cout << setprecision(2) << "Nevada State Tax: $" << GetVegasState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Clark County Tax: $" << GetVegasCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Las Vegas City Tax: $" << GetVegasCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Las Vegas Special Tax: $" << GetVegasSpecial() * GetItemPrice() << endl;
 cout << endl;
 
 cout << setprecision(2) << "Arizona State Tax: $" << GetPhxState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Maricopa County Tax: $" << GetPhxCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Phoenix City Tax: $" << GetPhxCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Phoenix Special Tax: $" << GetPhxSpecial() * GetItemPrice() << endl;
 cout << "----------------------------------------------------------------" << endl;
 cout << endl;
}


int main(){
 
 
 cout.setf(ios::fixed); //Sets decimal percicion to 2 places
 
 
 double price;
 
 Tax tax1, tax2, tax3, tax4, tax5, tax6, tax7, tax8, tax9, tax10;
 
 //first item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax1.SetPrice(price);
 tax1.Print();
 
 //second item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax2.SetPrice(price);
 tax2.Print();
 
 //third item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax3.SetPrice(price);
 tax3.Print();
 
 //fourth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax4.SetPrice(price);
 tax4.Print();
 
 //fifth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax5.SetPrice(price);
 tax5.Print();
 
 //sixth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax6.SetPrice(price);
 tax6.Print();
 
 //seventh item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax7.SetPrice(price);
 tax7.Print();
 
 //eigth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax8.SetPrice(price);
 tax8.Print();
 
 //ninth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax9.SetPrice(price);
 tax9.Print();
 
 //tenth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax10.SetPrice(price);
 tax10.Print();
}





//______________________________Get Functions_______________________________

//__Chico__
double Tax::GetChicoState()
{
 return chico_state;
}

double Tax::GetChicoCounty()
{
 return chico_county;
}

double Tax::GetChicoCity()
{
 return chico_city;
}


double Tax::GetChicoSpecial()
{
 return chico_special;
}


//__Paradise__
double Tax::GetParadiseState()
{
 return paradise_state;
}

double Tax::GetParadiseCounty()
{
 return paradise_county;
}

double Tax::GetParadiseCity()
{
 return paradise_city;
}

double Tax::GetParadiseSpecial()
{
 return paradise_special;
}


//__Sac__
double Tax::GetSacState()
{
 return sac_state;
}

double Tax::GetSacCounty()
{
 return sac_county;
}

double Tax::GetSacCity()
{
 return sac_city;
}

double Tax::GetSacSpecial()
{
 return sac_special;
}

//__Vegas__
double Tax::GetVegasState()
{
 return vegas_state;
}

double Tax::GetVegasCounty()
{
 return vegas_county;
}

double Tax::GetVegasCity()
{
 return vegas_city;
}

double Tax::GetVegasSpecial()
{
 return vegas_special;
}


//__Phx__
double Tax::GetPhxState()
{
 return phx_state;
}

double Tax::GetPhxCounty()
{
 return phx_county;
}

double Tax::GetPhxCity()
{
 return phx_city;
}

double Tax::GetPhxSpecial()
{
 return phx_special;
}


//____
double Tax::GetItemPrice ()
{
 return item_price;
}


//_______________________Set Functions____________________________

void Tax::SetPrice(double P)
{
 item_price = P;
}





//Output after running the program.

/*
Input item price: $50

California State Tax: $3.00
Butte County Tax: $0.12
Chico City Tax: $0.00
Chico Special Tax: $0.50


California State Tax: $3.00
Butte County Tax: $0.12
Paradise City Tax: $0.25
Paradise Special Tax: $ 0.50

California State Tax: $3.00
Sacramento County Tax: $0.12
Sacramento City Tax: $0.25
Sacramento Special Tax: $0.75

Nevada State Tax: $2.30
Clark County Tax: $1.82
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $2.80
Maricopa County Tax: $0.35
Phoenix City Tax: $1.15
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $456

California State Tax: $27.36
Butte County Tax: $1.14
Chico City Tax: $0.00
Chico Special Tax: $4.56


California State Tax: $27.36
Butte County Tax: $1.14
Paradise City Tax: $2.28
Paradise Special Tax: $ 4.56

California State Tax: $27.36
Sacramento County Tax: $1.14
Sacramento City Tax: $2.28
Sacramento Special Tax: $6.84

Nevada State Tax: $20.98
Clark County Tax: $16.64
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $25.54
Maricopa County Tax: $3.19
Phoenix City Tax: $10.49
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $232

California State Tax: $13.92
Butte County Tax: $0.58
Chico City Tax: $0.00
Chico Special Tax: $2.32


California State Tax: $13.92
Butte County Tax: $0.58
Paradise City Tax: $1.16
Paradise Special Tax: $ 2.32

California State Tax: $13.92
Sacramento County Tax: $0.58
Sacramento City Tax: $1.16
Sacramento Special Tax: $3.48

Nevada State Tax: $10.67
Clark County Tax: $8.47
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $12.99
Maricopa County Tax: $1.62
Phoenix City Tax: $5.34
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $678

California State Tax: $40.68
Butte County Tax: $1.70
Chico City Tax: $0.00
Chico Special Tax: $6.78


California State Tax: $40.68
Butte County Tax: $1.70
Paradise City Tax: $3.39
Paradise Special Tax: $ 6.78

California State Tax: $40.68
Sacramento County Tax: $1.70
Sacramento City Tax: $3.39
Sacramento Special Tax: $10.17

Nevada State Tax: $31.19
Clark County Tax: $24.75
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $37.97
Maricopa County Tax: $4.75
Phoenix City Tax: $15.59
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $999

California State Tax: $59.94
Butte County Tax: $2.50
Chico City Tax: $0.00
Chico Special Tax: $9.99


California State Tax: $59.94
Butte County Tax: $2.50
Paradise City Tax: $5.00
Paradise Special Tax: $ 9.99

California State Tax: $59.94
Sacramento County Tax: $2.50
Sacramento City Tax: $5.00
Sacramento Special Tax: $14.98

Nevada State Tax: $45.95
Clark County Tax: $36.46
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $55.94
Maricopa County Tax: $6.99
Phoenix City Tax: $22.98
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $1000

California State Tax: $60.00
Butte County Tax: $2.50
Chico City Tax: $0.00
Chico Special Tax: $10.00


California State Tax: $60.00
Butte County Tax: $2.50
Paradise City Tax: $5.00
Paradise Special Tax: $ 10.00

California State Tax: $60.00
Sacramento County Tax: $2.50
Sacramento City Tax: $5.00
Sacramento Special Tax: $15.00

Nevada State Tax: $46.00
Clark County Tax: $36.50
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $56.00
Maricopa County Tax: $7.00
Phoenix City Tax: $23.00
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $34

California State Tax: $2.04
Butte County Tax: $0.09
Chico City Tax: $0.00
Chico Special Tax: $0.34


California State Tax: $2.04
Butte County Tax: $0.09
Paradise City Tax: $0.17
Paradise Special Tax: $ 0.34

California State Tax: $2.04
Sacramento County Tax: $0.09
Sacramento City Tax: $0.17
Sacramento Special Tax: $0.51

Nevada State Tax: $1.56
Clark County Tax: $1.24
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $1.90
Maricopa County Tax: $0.24
Phoenix City Tax: $0.78
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $123

California State Tax: $7.38
Butte County Tax: $0.31
Chico City Tax: $0.00
Chico Special Tax: $1.23


California State Tax: $7.38
Butte County Tax: $0.31
Paradise City Tax: $0.61
Paradise Special Tax: $ 1.23

California State Tax: $7.38
Sacramento County Tax: $0.31
Sacramento City Tax: $0.61
Sacramento Special Tax: $1.84

Nevada State Tax: $5.66
Clark County Tax: $4.49
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $6.89
Maricopa County Tax: $0.86
Phoenix City Tax: $2.83
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $554

California State Tax: $33.24
Butte County Tax: $1.39
Chico City Tax: $0.00
Chico Special Tax: $5.54


California State Tax: $33.24
Butte County Tax: $1.39
Paradise City Tax: $2.77
Paradise Special Tax: $ 5.54

California State Tax: $33.24
Sacramento County Tax: $1.39
Sacramento City Tax: $2.77
Sacramento Special Tax: $8.31

Nevada State Tax: $25.48
Clark County Tax: $20.22
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $31.02
Maricopa County Tax: $3.88
Phoenix City Tax: $12.74
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $342

California State Tax: $20.52
Butte County Tax: $0.85
Chico City Tax: $0.00
Chico Special Tax: $3.42


California State Tax: $20.52
Butte County Tax: $0.85
Paradise City Tax: $1.71
Paradise Special Tax: $ 3.42

California State Tax: $20.52
Sacramento County Tax: $0.85
Sacramento City Tax: $1.71
Sacramento Special Tax: $5.13

Nevada State Tax: $15.73
Clark County Tax: $12.48
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $19.15
Maricopa County Tax: $2.39
Phoenix City Tax: $7.87
Phoenix Special Tax: $0.00
----------------------------------------------------------------
*/