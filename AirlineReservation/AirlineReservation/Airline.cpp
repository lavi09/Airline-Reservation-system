#include "pch.h"
#include <iostream>
#include "Airline.h"

using namespace std;

namespace AirlineReservation
{

	Airline::Airline(const std::string& Type,const std::string& From, const std::string& Destination, const std::string& DepartureDate, const std::string& ReturnDate)
		: mType(Type),mFrom(From),mDestination(Destination),mDepartureDate(DepartureDate),mReturnDate(ReturnDate)		
	{
	}
	void Airline::Reserve()
	{
		mReserved = true;
	}

	void Airline::setType(const string& Type)
	{
		mType = Type;
	}

	const string& Airline::getType() const
	{
		return mType;
	}

	void Airline::setFrom(const string& From)
	{
		mFrom = From;
	}

	const string& Airline::getFrom() const
	{
		return mFrom;
	}

	void Airline::setDestination(const string& Destination)
	{
		mDestination = Destination;
	}

	const string& Airline::getDestination() const
	{
		return mDestination;
	}
	void Airline::setDepartureDate(const string& DepartureDate)
	{
		mDepartureDate = DepartureDate;
	}
	const string& Airline::getDepartureDate() const
	{
		return mDepartureDate;
	}
	void Airline::setReturnDate(const string& ReturnDate)
	{
		mReturnDate = ReturnDate;
	}
	const string& Airline::getReturnDate() const
	{
		return mReturnDate;
	}
	void Airline::setSeatNumber(int seatNumber) {
		mSeatNumber = seatNumber;
	}

	int Airline::getSeatNumber() const {
		return mSeatNumber;
	}

	bool Airline::isReserved() const {
		return mReserved;
	}

	void Airline::display() const
	{
		cout << "Ticket Details: " << getType() <<endl;
		cout << "-------------------------" << endl;
		cout << "From: " << getFrom() << endl;
		cout << "Destination: " << getDestination() << endl;
		cout << "Departure Date: " << getDepartureDate() << endl;
		cout << "Return Date: " << getReturnDate() << endl;
		cout << (isReserved() ? "Seat Reserved" : "No seat") << endl;
		cout << "Ticket Number: " << getSeatNumber() << endl;


		cout << endl;
	}
}
