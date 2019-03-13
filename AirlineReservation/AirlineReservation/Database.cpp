#include "pch.h"
#include <iostream>
#include <stdexcept>
#include "Database.h"


using namespace std;

namespace AirlineReservation {

	Airline& Database::reserveseat(const std::string& Type, const std::string& From, const std::string& Destination, const std::string& DepartureDate,
		const std::string& ReturnDate)
	{
		Airline theSeat(Type, From, Destination, DepartureDate, ReturnDate);
		theSeat.setSeatNumber(mNextSeatNumber++);
		theSeat.Reserve();
		mSeats.push_back(theSeat);

		return mSeats[mSeats.size() - 1];
	}

	Airline& Database::getSeats(int seatNumber)
	{
		for (auto& seat : mSeats) 
		{
			if (seat.getSeatNumber() == seatNumber) 
			{
				return seat;
			}
		}
		throw logic_error("No seat found.");
	}
	void Database::displayAll() const
	{
		for (const auto& seat : mSeats) 
		{
			seat.display();
		}
	}

}