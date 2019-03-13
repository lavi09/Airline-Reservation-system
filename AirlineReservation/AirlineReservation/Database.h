#pragma once
#include "Airline.h"
#include <iostream>
#include <vector>


namespace AirlineReservation {
	const int kFirstSeatNumber = 1;

	class Database
	{
	public:
		Airline& reserveseat(const std::string& Type, const std::string& From, const std::string& Destination, const std::string& DepartureDate, const std::string& ReturnDate);
		Airline& getSeats(int seatNumber);

		void displayAll() const;
		

	private:
		std::vector<Airline> mSeats;
		int mNextSeatNumber = kFirstSeatNumber;
	};
}