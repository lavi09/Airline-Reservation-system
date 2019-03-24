#include "pch.h"
#include <iostream>
#include "Passenger.h"

using namespace std;

namespace AirlineReservation
{

	Passenger::Passenger(const std::string& firstname, const std::string& lastname, const std::string& dob, const std::string& phone, const std::string& passport,
		const std::string& country)
		: mFirstName(firstname), mLastName(lastname), mDOB(dob), mContact(phone), mPassport(passport), mCountry(country)
	{
	}
	void Passenger::Reserve()
	{
		mReserved = true;
	}

	void Passenger::setFirstName(const string& firstname)
	{
		mFirstName = firstname;
	}

	const string&  Passenger::getFirstName() const
	{
		return mFirstName;
	}

	void  Passenger::setLastName(const string& lastname)
	{
		mLastName = lastname;
	}

	const string&  Passenger::getLastName() const
	{
		return mLastName;
	}

	void  Passenger::setDOB(const string& dob)
	{
		mDOB = dob;
	}

	const string&  Passenger::getDOB() const
	{
		return mDOB;
	}
	void  Passenger::setContact(const std::string& phone)
	{
		mContact = phone;
	}
	const std::string&  Passenger::getContact() const
	{
		return mContact;

	}
	void  Passenger::setPassport(const std::string& passport)
	{
		mPassport = passport;
	}
	const std::string&  Passenger::getPassport() const
	{
		return mPassport;
	}
	void  Passenger::setCountry(const std::string& country)
	{
		mCountry = country;
	}
	const std::string&  Passenger::getCountry() const
	{
		return mCountry;
	}
	void  Passenger::setBookingNumber(int bookingnumber) {
		mBookingNumber = bookingnumber;
	}

	int  Passenger::getBookingNumber() const {
		return mBookingNumber;
	}

	bool  Passenger::isReserved() const {
		return mReserved;
	}

	void  Passenger::PassengerDetails() const
	{
		cout << "        PASSENGER DETAILS"  <<endl;
		cout << "| ****************************************" << endl << endl;
		cout << "| Booking Number: " << getBookingNumber() << endl << endl;
		cout << "| First Name: " << getFirstName() << endl << endl;
		cout << "| Last Name: " << getLastName() << endl << endl;
		cout << "| Date of Birth: " << getDOB() << endl << endl;
		cout << "| Contact: " << getContact() << endl << endl;
		cout << "| Passport Number: " << getPassport() << endl << endl;
		cout << "| Country: " << getCountry() << endl << endl;
		
		cout << endl;
	}

	void Passenger::TicketDetails() const 
	{
		cout << " |PASSENGER " << endl;
		cout << " |" << getFirstName() << "  " << getLastName() << endl;
		cout << " |" << endl;
		cout << " |*******************************************************************************************************************" << endl;
		cout << " |                                                                                              |||||||||||||||||||||" << endl;
		cout << " |                                                                                              |||||||||||||||||||||" << endl;
		cout << " |                                                                                              |||||||||||||||||||||" << endl;
		cout << " |*******************************************************************************************************************" << endl;
	}


}
