#include "pch.h"
#include <iostream>
#include <stdexcept>
#include "Database.h"


using namespace std;

namespace AirlineReservation {

	Passenger& Database::addpassenger(const std::string& firstname, const std::string& lastname, const std::string& dob, const std::string& phone, const std::string& passport,
		const std::string& country)
	{
		Passenger thePassenger( firstname, lastname,dob,phone,passport,country);
		thePassenger.setBookingNumber(mNextBookingNumber++);
		thePassenger.Reserve();
		mPassengers.push_back(thePassenger);

		return mPassengers[mPassengers.size() - 1];
	}


	void Database::displayPassengerDetails() const
	{
		for (const auto& Passenger : mPassengers) 
		{
			if (Passenger.isReserved())
			{
								
				Passenger.PassengerDetails();
			
			}
		}
	}

	Airline& Database::addairline(const std::int16_t flightnumber, const std::string& airCarrier, const std::string& departureLocation, const std::string& departureDate,
		const std::string& departureTime, const std::string&  arrivalLocation, const std::string& arrivalDate, const std::string& arrivalTime, const std::string& seatnumber, const std::string& departureTerminal, const std::string& arrivalTerminal)
	{
		Airline theAirline(flightnumber,airCarrier, departureLocation, departureDate, departureTime, arrivalLocation, arrivalDate, arrivalTime, seatnumber, arrivalTerminal, departureTerminal);
		theAirline.book();
		mAirlines.push_back(theAirline);
		return mAirlines[mAirlines.size() - 1];
	}


	void Database::displayFlightDetails() const
	{
		for (const auto& Airline : mAirlines)
		{
			if (Airline.isBooked()) 
			{
				Airline.FlightDetails();
			}
		}
	}

	void Database::displayTicketDetails() const
	{
		for (const auto& Airline : mAirlines)
		{
			if (Airline.isBooked())
			{
				Airline.TicketDetails();
				
			}
		}
		for (const auto& Passenger : mPassengers)
		{		
		    if (Passenger.isReserved())
			{
				Passenger.TicketDetails();
			}
			
		}
	}
}