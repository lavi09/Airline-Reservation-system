#include "pch.h"
#include <iostream>
#include <iomanip>
#include "Airline.h"

using namespace std;

namespace AirlineReservation
{

	Airline::Airline(const std::int16_t flightnumber, const std::string& airCarrier, const std::string& departureLocation, const std::string& departureDate,
		const std::string& departureTime, const std::string&  arrivalLocation, const std::string& arrivalDate, const std::string& arrivalTime,
		const std::string& seatnumber, const std::string& departureTerminal, const std::string& arrivalTerminal)

		: mFlightNumber(flightnumber), mCarrier(airCarrier), mDepartureLocation(departureLocation), mDepartureDate(departureDate),
		mDepartureTime(departureTime), mArrivalLocation(arrivalLocation), mArrivalDate(arrivalDate), mArrivalTime(arrivalTime),
		mSeatNumber(seatnumber), mDepartureTerminal(departureTerminal), mArrivalTerminal(arrivalTerminal)
	{
	}

	void Airline::setFlightNumber(const std::int16_t flightnumber)
	{
		mFlightNumber = flightnumber;
	}
	const std::int16_t Airline::getFlightNumber() const
	{
		return mFlightNumber;
	}
	void Airline::setAirline(const std::string& airCarrier)
	{
		mCarrier = airCarrier;
	}
	const std::string& Airline::getAirline() const
	{
		return mCarrier;
	}
	void Airline::setDepartureLocation(const std::string& departureLocation)
	{
		mDepartureLocation = departureLocation;
	}
	const std::string& Airline::getDepartureLocation() const
	{
		return mDepartureLocation;
	}
	void Airline::setDepartureDate(const std::string& departureDate)
	{
		mDepartureDate = departureDate;
	}
	const std::string&  Airline::getDepartureDate() const
	{
		return mDepartureDate;
	}
	void Airline::setDepartureTime(const std::string&  departureTime)
	{
		mDepartureTime = departureTime;
	}
	const std::string&  Airline::getDepartureTime() const
	{
		return mDepartureTime;
	}
	void Airline::setArrivalLocation(const std::string&  arrivalLocation)
	{
		mArrivalLocation = arrivalLocation;
	}
	const std::string&  Airline::getArrivalLocation() const
	{
		return mArrivalLocation;
	}
	void Airline::setArrivalDate(const std::string&  arrivalDate)
	{
		mArrivalDate = arrivalDate;
	}
	const std::string& Airline::getArrivalDate() const
	{
		return mArrivalDate;
	}
	void Airline::setArrivalTime(const std::string& arrivalTime)
	{
		mArrivalTime = arrivalTime;
	}
	const std::string&  Airline::getArrivalTime() const
	{
		return mArrivalTime;
	}
	void Airline::setArrivalTerminal(const std::string&  arrivalTerminal)
	{
		mArrivalTerminal = arrivalTerminal;
	}
	const std::string&  Airline::getArrivalTerminal() const
	{
		return mArrivalTerminal;
	}
	void Airline::setDepartureTerminal(const std::string&  departureTerminal)
	{
		mDepartureTerminal = departureTerminal;
	}
	const std::string&  Airline::getDepartureTerminal() const
	{
		return mDepartureTerminal;
	}
	void Airline::setSeatNumber(const std::string&  seatnumber)
	{
		mSeatNumber = seatnumber;
	}
	const std::string&  Airline::getSeatNumber() const
	{
		return mSeatNumber;
	}
	bool Airline::isBooked() const 
	{
		return mBooked;

	}
	void Airline::book() 
	{
		mBooked = true;
	}



	void Airline::FlightDetails() const
	{
		cout << "===================================================================================" << endl << endl;
		cout << "Flight Details" << endl;
		cout << "===================================================================================" << endl << endl;
		cout << (isBooked() ? "Booked Airline " : "Not Booked Airline ");		
		cout << " Carrier: " << getAirline() << endl << endl;
		cout << " Flight Number : " << getFlightNumber() << endl << endl;
		cout << " From " << getDepartureLocation() << " to " << getArrivalLocation() << endl << endl;
		cout << "====================================================================================" << endl << endl;
		cout << " Departure Terminal " << setw(16) << getDepartureTerminal() << setw(24) << "Arrival Terminal " << setw(16) << getArrivalTerminal() << endl << endl;
		cout << " Departure Time " << setw(20) << getDepartureTime() << setw(20) << "Arrival Time " << setw(20) << getArrivalTime() << endl << endl;
		cout << " Departure Date " << setw(20) << getDepartureDate() << setw(20) << "Arrival Date " << setw(20) << getArrivalDate() << endl << endl;
		cout << "====================================================================================" << endl << endl;
	}

	void Airline::TicketDetails() const {
		cout << endl;
		cout << " |*******************************************************************************************************************" << endl;
		cout << " |       Ticket Details" << endl;		
		cout << " |*******************************************************************************************************************" << endl;
		cout << " |" << endl;
		cout << " |FLIGHT " << setw(39) << "DESTINATION " << endl;
		cout << " |" << getAirline() << setw(35) << getDepartureLocation() << "  To  " << getArrivalLocation() << endl;
		cout << " |" << endl;
		cout << " |DEPARTURE " << setw(39) << "DEPARTURE TERMINAL " << endl;
		cout << " |" << getDepartureTime() << "  " << getDepartureDate() << setw(20) << getDepartureTerminal() << endl;
		cout << " |" << endl;
		cout << " |SEAT " << endl;
		cout << " |" << getSeatNumber() << endl;
		cout << " |" << endl;

	}
}