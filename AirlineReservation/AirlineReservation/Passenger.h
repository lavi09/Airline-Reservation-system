#pragma
#include <string>

namespace AirlineReservation {
	class Passenger {
	public:
		Passenger() = default; //default constructor
		Passenger(const std::string& firstname, const std::string& lastname, const std::string& dob, const std::string& phone, const std::string& passport,
			const std::string& country);

		void Reserve();
		void PassengerDetails() const;		

		void setFirstName(const std::string& firstname);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastname);
		const std::string& getLastName() const;

		void setDOB(const std::string& dob);
		const std::string& getDOB() const;

		void setContact(const std::string& phone );
		const std::string& getContact() const ;

		void setPassport(const std::string& passport);
		const std::string& getPassport() const ;

		void setCountry(const std::string& country);
		const std::string& getCountry() const;
		
		void setBookingNumber(int bookingnumber );
		int getBookingNumber() const;

		bool isReserved() const;

	private:
		
		std::string mFirstName;
		std::string mLastName;
		std::string mDOB;
		std::string mContact;
		std::string mPassport;
		std::string mCountry;		
		int mBookingNumber = -1;		
		bool mReserved = false;


	};
}