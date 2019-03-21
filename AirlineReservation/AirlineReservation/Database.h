#pragma once
#include "Passenger.h"
#include "Airline.h"
#include <iostream>
#include <vector>


namespace AirlineReservation {
	const int kFirstbookingNumber = 100;

	class Database
	{
	public:
		Passenger& addpassenger(const std::string& firstname, const std::string& lastname, const std::string& dob, const std::string& phone, const std::string& passport,
			const std::string& country);
		
		Airline& addairline(const std::int16_t flightnumber, const std::string& airCarrier, const std::string& departureLocation, const std::string& departureDate,
			const std::string& departureTime, const std::string&  arrivalLocation, const std::string& arrivalDate, const std::string& arrivalTime, const std::string& seatnumber, const std::string& departureTerminal, const std::string& arrivalTerminal);


		void displayPassengerDetails() const;
		void displayFlightDetails() const;
		void displayTicketDetails() const;

		

	private:
		std::vector< Passenger> mPassengers;
		int mNextBookingNumber = kFirstbookingNumber;
		std::vector<Airline> mAirlines;
		std::vector<Airline> mTickets;

	};
}