#pragma
#include <string>

namespace AirlineReservation {
	class Airline {
	public:
		Airline() = default; //default constructor
		Airline(const std::int16_t flightnumber, const std::string& airCarrier, const std::string& departureLocation, const std::string& departureDate,
			const std::string& departureTime, const std::string&  arrivalLocation, const std::string& arrivalDate, const std::string& arrivalTime, const std::string& seatnumber, const std::string& departureTerminal, const std::string& arrivalTerminal);


		void FlightDetails() const;
		void TicketDetails() const;
		bool isBooked() const;

		void book();

		void setFlightNumber(const std::int16_t flightnumber);
		const std::int16_t getFlightNumber() const;
		
		void setAirline(const std::string& airCarrier);
		const std::string& getAirline() const;
				
		void setDepartureLocation(const std::string& departureLocation);
		const std::string& getDepartureLocation() const;

		void setDepartureDate(const std::string& departureDate);
		const std::string& getDepartureDate() const;
		
		void setDepartureTime(const std::string& departureTime);
		const std::string& getDepartureTime() const;
		
		void setArrivalLocation(const std::string& arrivalLocation);
		const std::string& getArrivalLocation() const;
		
		void setArrivalDate(const std::string& arrivalDate);
		const std::string& getArrivalDate() const;
		
		void setArrivalTime(const std::string& arrivalTime);
		const std::string& getArrivalTime() const;
		
		void setArrivalTerminal(const std::string& arrivalTerminal);
		const std::string& getArrivalTerminal() const;
		
		void setDepartureTerminal(const std::string& departureTerminal);
		const std::string& getDepartureTerminal() const;
		
		void setSeatNumber(const std::string& seatnumber);
		const std::string& getSeatNumber() const;


	private:
		std::int16_t mFlightNumber;
		std::string mCarrier;
		std::string mDepartureLocation;
		std::string mDepartureDate;
		std::string mDepartureTime;
		std::string mArrivalLocation;
		std::string mArrivalDate;
		std::string mArrivalTime;
		std::string mDepartureTerminal;
		std::string mArrivalTerminal;
		std::string mSeatNumber;
		bool mBooked = false;
	};
}