#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;
int main ()
{
	double a, Sbox;
	cout << "TICKET TYPE    TICKET PRICE " << endl;
	cout << "Box               $250" << endl;
	cout << " " << endl;
	cout << "NUMBER OF TICKETS SOLD: " << endl;
	cin >> a;
	Sbox = a * 250;
	cout << setw(10) << setprecision(2) << fixed << "TOTAL SALES FOR BOX TICKETS IS $" << Sbox << endl;
	cout << " " << endl; 
	cout << " " << endl; 

	double b, Ssideline;
	cout << "TICKET TYPE    TICKET PRICE " << endl;
	cout << "Sideline           $100" << endl;
	cout << " " << endl; 
	cout << "NUMBER OF TICKETS SOLD: " << endl;
	cin >> b;
	Sbox = b * 100;
	cout << setw(10) << setprecision(2) << fixed << "TOTAL SALES FOR SIDELINE TICKETS IS $" << Sbox << endl;
	cout << " " << endl; 
	cout << " " << endl; 

	double c, Spremium;
	cout << "TICKET TYPE    TICKET PRICE " << endl;
	cout << "Premium           $50" << endl;
	cout << " " << endl;
	cout << "NUMBER OF TICKETS SOLD: " << endl;
	cin >> c;
	Sbox = c * 50;
	cout << setw(10) << setprecision(2) << fixed << "TOTAL SALES FOR PREMIUM TICKETS IS $" << Sbox << endl;
	cout << " " << endl;
	cout << " " << endl;

	double d, Sgeneraladmission;
	cout << "TICKET TYPE         TICKET PRICE " << endl;
	cout << "General Admission       $25" << endl;
	cout << " " << endl;
	cout << "NUMBER OF TICKETS SOLD: " << endl;
	cin >> d;
	Sbox = d * 25;
	cout << setw(10) << setprecision(2) << fixed << "TOTAL SALES FOR GENERAL ADMISSION5 TICKETS IS $" << Sbox << endl;
	cout << " " << endl;
	cout << " " << endl;




	_getch();
	return 0;

}