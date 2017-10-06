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

Input item price: $500

California State Tax: $30.00
Butte County Tax: $1.25
Chico City Tax: $0.00
Chico Special Tax: $5.00


California State Tax: $30.00
Butte County Tax: $1.25
Paradise City Tax: $2.50
Paradise Special Tax: $ 5.00

California State Tax: $30.00
Sacramento County Tax: $1.25
Sacramento City Tax: $2.50
Sacramento Special Tax: $7.50

Nevada State Tax: $23.00
Clark County Tax: $18.25
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $28.00
Maricopa County Tax: $3.50
Phoenix City Tax: $11.50
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $23

California State Tax: $1.38
Butte County Tax: $0.06
Chico City Tax: $0.00
Chico Special Tax: $0.23


California State Tax: $1.38
Butte County Tax: $0.06
Paradise City Tax: $0.12
Paradise Special Tax: $ 0.23

California State Tax: $1.38
Sacramento County Tax: $0.06
Sacramento City Tax: $0.12
Sacramento Special Tax: $0.34

Nevada State Tax: $1.06
Clark County Tax: $0.84
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $1.29
Maricopa County Tax: $0.16
Phoenix City Tax: $0.53
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $64

California State Tax: $3.84
Butte County Tax: $0.16
Chico City Tax: $0.00
Chico Special Tax: $0.64


California State Tax: $3.84
Butte County Tax: $0.16
Paradise City Tax: $0.32
Paradise Special Tax: $ 0.64

California State Tax: $3.84
Sacramento County Tax: $0.16
Sacramento City Tax: $0.32
Sacramento Special Tax: $0.96

Nevada State Tax: $2.94
Clark County Tax: $2.34
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $3.58
Maricopa County Tax: $0.45
Phoenix City Tax: $1.47
Phoenix Special Tax: $0.00
----------------------------------------------------------------

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

Input item price: $766

California State Tax: $45.96
Butte County Tax: $1.92
Chico City Tax: $0.00
Chico Special Tax: $7.66


California State Tax: $45.96
Butte County Tax: $1.92
Paradise City Tax: $3.83
Paradise Special Tax: $ 7.66

California State Tax: $45.96
Sacramento County Tax: $1.92
Sacramento City Tax: $3.83
Sacramento Special Tax: $11.49

Nevada State Tax: $35.24
Clark County Tax: $27.96
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $42.90
Maricopa County Tax: $5.36
Phoenix City Tax: $17.62
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $1745

California State Tax: $104.70
Butte County Tax: $4.36
Chico City Tax: $0.00
Chico Special Tax: $17.45


California State Tax: $104.70
Butte County Tax: $4.36
Paradise City Tax: $8.72
Paradise Special Tax: $ 17.45

California State Tax: $104.70
Sacramento County Tax: $4.36
Sacramento City Tax: $8.72
Sacramento Special Tax: $26.18

Nevada State Tax: $80.27
Clark County Tax: $63.69
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $97.72
Maricopa County Tax: $12.21
Phoenix City Tax: $40.13
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $20877

California State Tax: $1252.62
Butte County Tax: $52.19
Chico City Tax: $0.00
Chico Special Tax: $208.77


California State Tax: $1252.62
Butte County Tax: $52.19
Paradise City Tax: $104.39
Paradise Special Tax: $ 208.77

California State Tax: $1252.62
Sacramento County Tax: $52.19
Sacramento City Tax: $104.39
Sacramento Special Tax: $313.15

Nevada State Tax: $960.34
Clark County Tax: $762.01
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $1169.11
Maricopa County Tax: $146.14
Phoenix City Tax: $480.17
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $233

California State Tax: $13.98
Butte County Tax: $0.58
Chico City Tax: $0.00
Chico Special Tax: $2.33


California State Tax: $13.98
Butte County Tax: $0.58
Paradise City Tax: $1.17
Paradise Special Tax: $ 2.33

California State Tax: $13.98
Sacramento County Tax: $0.58
Sacramento City Tax: $1.17
Sacramento Special Tax: $3.49

Nevada State Tax: $10.72
Clark County Tax: $8.50
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $13.05
Maricopa County Tax: $1.63
Phoenix City Tax: $5.36
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $736

California State Tax: $44.16
Butte County Tax: $1.84
Chico City Tax: $0.00
Chico Special Tax: $7.36


California State Tax: $44.16
Butte County Tax: $1.84
Paradise City Tax: $3.68
Paradise Special Tax: $ 7.36

California State Tax: $44.16
Sacramento County Tax: $1.84
Sacramento City Tax: $3.68
Sacramento Special Tax: $11.04

Nevada State Tax: $33.86
Clark County Tax: $26.86
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $41.22
Maricopa County Tax: $5.15
Phoenix City Tax: $16.93
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $2346

California State Tax: $140.76
Butte County Tax: $5.87
Chico City Tax: $0.00
Chico Special Tax: $23.46


California State Tax: $140.76
Butte County Tax: $5.87
Paradise City Tax: $11.73
Paradise Special Tax: $ 23.46

California State Tax: $140.76
Sacramento County Tax: $5.87
Sacramento City Tax: $11.73
Sacramento Special Tax: $35.19

Nevada State Tax: $107.92
Clark County Tax: $85.63
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $131.38
Maricopa County Tax: $16.42
Phoenix City Tax: $53.96
Phoenix Special Tax: $0.00
----------------------------------------------------------------

*/