// AirlineReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include "Database.h"




using namespace std;
using namespace AirlineReservation;

int displayMenu();
void doReserve(Database& db);
void flightschedule();
void displayHeader();
void displayFooter();
void pauseAndClear();

int main()
{
	Database passengerDB;
	
	while (1)
	{
		int selection = displayMenu();
		switch (selection) 
		{
		
		case 1:
			system("CLS");
			cout << flush;
			displayHeader();
			flightschedule();
			pauseAndClear();
			break;
		case 2:
			doReserve(passengerDB);
			pauseAndClear();
			break;	
		case 3:
			system("CLS");
			cout << flush;
			displayHeader();
			passengerDB.displayPassengerDetails();
			pauseAndClear();
			break;
		case 4:
			system("CLS");
			cout << flush;
			displayHeader();
			passengerDB.displayFlightDetails();
			pauseAndClear();
			break;
		case 5:
			system("CLS");
			cout << flush;
			displayHeader();
			passengerDB.displayTicketDetails();
			pauseAndClear();
			break;
		case 6:
			return 0;
		default:
			cerr << "Invalid Choice ! Try Again." << endl;
			break;
		}
	}

	return 0;
}
void displayHeader()
{
	
	cout << "      ***********************************************************************" << endl<<endl;
	cout << "                               Welcome to LA Airlines                        " << endl;
	cout << "      ***********************************************************************" << endl<<endl;
}
    

int displayMenu()
{
	int selection=-1;

	cout << endl;
	displayHeader();
	cout << "                              1) Flights Schedule                  " << endl;		
	cout << "                              2) Booking " << endl;
	cout << "                              3) Passenger Details " << endl;
	cout << "                              4) Flight Details " << endl;
	cout << "                              5) Ticket Details " << endl;
	cout << "                              6) Exit" << endl;
	cout << endl;
	displayFooter();
	cin >> selection;
	return selection;
}

void displayFooter()
{
	cout << "     ************************************************************************" << endl<<endl;
	cout << "Select your choice :";
	

}
void doReserve(Database& db)
{
	system("CLS");
	cout << flush;
	displayHeader();
	flightschedule();
	
	string firstname;
	string lastname;
	string dob;
	string phone;	
	string seatnumber;
	string country;
    string  passport;
	int flightnumber = 0;

	cout << "These are the Available Flights ,Select One" << endl << endl;
	cout << "Enter the flight number :";
	cin  >> flightnumber;
	cout << endl;

	try
	{
		if (flightnumber > 5)
		{
			cout << "Invalid flightnumber ,Try Again !!"<<endl;
			throw(flightnumber);
		}
	}
	catch(int flightnumber)
	{
		cout << "Enter the flight number :";
		cin >> flightnumber;
	}
	cout << "Enter your First Name :";
    cin >> firstname;
	cout << endl;
	cout << "Enter your Last Name :";
	cin >> lastname;
	cout << endl;
	cout << "Enter your Date of Birth (mm/dd/yyyy):";
	cin >> dob;	
	cout << endl;
	cout << "Enter your contact number:";
	cin >> phone;
	cout << endl;
	try {
		if (phone.length() != 10)
		{
			cout << "Number is invalid ,Enter 10 digits"<<endl;
			throw(phone);
		}
	}
	catch (string phone)
	{
		cout << "Enter your contact number:";
		cin >> phone;
	}
	/*cout << "Enter your passport number:";
	cin >> passport;*/
	cout << endl;
	try
	{
		cout << "Enter your passport number:";
		cin >> passport;

		if (passport.length() != 9)
		{
			cout << "Number is invalid ,Enter 9 digits"<<endl;
			throw(passport);

		}
	}
	catch(string passport)
	{
		cout << "Enter your passport number:";
		cin >> passport;
	}
	cout << "Enter your Country :";
	cin >> country;
	cout << endl;
	cout << "Select your Seat : "<<endl;
	cout << "1A 2B 3C 4D 5E 6F 7G 8H 9I 10J " << endl;
	cin >> seatnumber;
	cout<< endl<<endl;
	cout << " !!  YOUR SEAT " << seatnumber << " IS RESERVED IN ";

	db.addpassenger(firstname, lastname, dob, phone, passport, country);
	

	string airCarrier;
	string departureLocation;
	string departureDate;
	string departureTime;
	string arrivalLocation;
	string arrivalDate;
	string arrivalTime;
	string departureTerminal;
	string arrivalTerminal;

	string carrier[] = { "Alaska", "Delta", "American", "JetAirways", "SouthWest"};
	string dcity[] = { "Seattle", "Seattle", "Seattle", "Seattle", "Seattle" };
	string ddate[] = { "03/20/2019", "03/20/2019", "03/25/2019", "03/22/2019", "03/28/2019"};
	string dtime[] = { "9AM", "11AM", " 6AM", "3PM", "12PM"};
	string acity[] = { "LosAngeles", "Portland", "SanFrancisco", "Washington", "LasVegas"};
	string adate[] = { "03/21/2019", "03/23/2019", "03/20/2019", "04/01/2019", "04/10/2019"};
	string atime[] = { " 4PM", " 1PM", " 10AM", " 5PM", " 4PM"};
	string dterminal[] = { "1", "2", "3", "4", "5", "6" };
	string aterminal[] = { "7", "8", "9", "10", "11", "12" };

	airCarrier = carrier[flightnumber - 1];

	std::cout << airCarrier << " Airlines" <<endl << endl << endl;

	departureLocation = dcity[flightnumber - 1];

	departureDate = ddate[flightnumber - 1];

	departureTime = dtime[flightnumber - 1];

	arrivalLocation = acity[flightnumber - 1];

	arrivalDate = adate[flightnumber - 1];

	arrivalTime = atime[flightnumber - 1];

	departureTerminal = dterminal[flightnumber - 1];

	arrivalTerminal = aterminal[flightnumber - 1];

	db.addairline(flightnumber,airCarrier, departureLocation, departureDate, departureTime, arrivalLocation, arrivalDate, arrivalTime, seatnumber, departureTerminal, arrivalTerminal);
	
}
void flightschedule()
{
	
	cout << "FlightNumber  Airline   DepartureDate   DeparureTime    From             To              ReturningDate   ReturningTime " << endl;
	cout << "    1        Alaska     03/20/2019       9.00 A.M       Seattle(SEA)     LosAngeles(LAX)      03/21/2019    4.00 P.M " << endl;
	cout << "    2        Delta      03/20/2019       11.00 A.M      Seattle (SEA)    Portland(PDX)        03/23/2019    1.00 P.M " << endl;
	cout << "    3        American   03/25/2019       6.00 A.M       Seattle (SEA)    SanFrancisco(SFO)    03/30/2019    10.00 A.M " << endl;
	cout << "    4        JetAirways 03/22/2019       3.00 P.M       Seattle (SEA)    Washington D.C(BWI)  04/01/2019    5.00 P.M " << endl;
	cout << "    5        SouthWest  03/28/2019       12.00 P.M      Seattle (SEA)    Las Vegas(LAS)       04/10/2019    4.00 P.M " << endl;
	cout << endl<<endl;
	
}
void pauseAndClear() {
	cin.clear();
	system("PAUSE");
	cout << endl << endl << "    Press any key to continue...";
	cout << flush;
	system("CLS");
}