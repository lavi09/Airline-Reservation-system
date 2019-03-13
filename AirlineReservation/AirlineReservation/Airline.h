#pragma 
#include <string>
namespace AirlineReservation {
	class Airline {
	public:
		Airline() = default; //default constructor
		Airline (const std::string& Type,const std::string& From, const std::string& Destination, const std::string& DepartureDate,
			const std::string& ReturnDate);

		void Reserve();
		void display() const;
		/*void flightdetails();
		void passengerdetails();
		void ticketdetails();
*/
		void setType(const std::string& Type);
		const std::string& getType() const;

		void setFrom(const std::string& From);
		const std::string& getFrom() const;

		void setDestination(const std::string& Destination);
		const std::string& getDestination() const;

		void setDepartureDate(const std::string& DepartureDate);
		const std::string& getDepartureDate() const;

		void setReturnDate(const std::string& ReturnDate);
		const std::string& getReturnDate() const;

		void setSeatNumber(int flightNumber);
		int getSeatNumber() const;

		bool isReserved() const;

	private:
		
		std::string mType;
		std::string mFrom;
		std::string mDestination;
		std::string mDepartureDate;
		std::string mReturnDate;
		int mSeatNumber = -1;		
		bool mReserved = false;


	};
}