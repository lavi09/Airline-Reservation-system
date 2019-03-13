// AirlineReservation.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include "Database.h"

using namespace std;
using namespace AirlineReservation;

int displayMenu();
void doReserve(Database& db);

int main()
{
	Database reserveDB;
	while (true)
	{
		int selection = displayMenu();
		switch (selection) 
		{
		case 0:
			return 0;
		case 1:
			doReserve(reserveDB);
			break;
		case 2:
			reserveDB.displayAll();
			break;
		
		default:
			cerr << "Unknown command." << endl;
			break;
		}
	}

	return 0;
}

    

int displayMenu()
{
	int selection;

	cout << endl;
	cout << "Airline Reservation System" << endl;
	cout << "***************************" << endl;
	cout << "1) Reserve seat" << endl;		
	cout << "2) Ticket Details" << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "*************************** "<<endl;
	cout << "Select your choice :";
	cin >> selection;

	return selection;
}

void doReserve(Database& db)
{
	string Type;
	string From;
	string Destination;
	string DepartureDate;
	string ReturnDate;
    /*int  NumPassengers;
	string TravelClass;
*/

	cout << "Travel Type : "<<endl;
	cout << "1.Oneway 2.RoundTrip 3.Multi-city"<<endl;
	cin >> Type;
	cout << "From :";
	cin >> From;
	cout << "Destination :";
	cin >> Destination;
	cout << "Departure Date :";
	cin >> DepartureDate;
	cout << "Return Date :";
	cin >> ReturnDate;
	
	
	db.reserveseat(Type,From,Destination,DepartureDate,ReturnDate);
}
