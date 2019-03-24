#pragma
#include <string>
#include <vector>


namespace AirlineReservation {

	const std::vector<std::string> HEADING = { "FlightNumber  Airline   DepartureDate   DeparureTime    From        To       ReturningDate   ReturningTime" };
	const std::vector<int> AIRLINE_NUMBER = { 1, 2, 3, 4, 5, 6 };
	const std::vector<std::string> AIRLINE_DETAILS = {
	"     Alaska     04/20/2019       9.00 A.M       Seattle(SEA)     LosAngeles(LAX)      04/21/2019    4.00 P.M ",
	"     Delta      04/20/2019       11.00 A.M      Seattle (SEA)    Portland(PDX)        04/23/2019    1.00 P.M ",
	"     American   04/25/2019       6.00 A.M       Seattle (SEA)    SanFrancisco(SFO)    04/30/2019    10.00 A.M " ,
	"     JetAirways 04/22/2019       3.00 P.M       Seattle (SEA)    Washington D.C(BWI)  05/01/2019    5.00 P.M " ,
	"     SouthWest  04/28/2019       12.00 P.M      Seattle (SEA)    Las Vegas(LAS)       05/10/2019    4.00 P.M ",
	};


	class Airline {
	public:
		Airline() = default; 
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