#include <iostream>
#include <string>
using namespace std;
class MovieTicket{// a class is a user defined data type which works as a blue print for an object
	private:
	string movieName, seatNumber;
	double price;
	bool isBooked = false;
	
	public:
	MovieTicket(){
		movieName = "The Lion King";
		seatNumber = "36A";
		price = 1200.0;
	}
	void bookTicket(){
		if(isBooked==false){
			isBooked = true;
			cout<<"\nYour ticket is booked";
		}
		else{
			cout<<"\nticket is already booked";
		}
	}
	void cancelTicket(){
		if(isBooked==true){
			isBooked = false;
			cout<<"\nticket is cancelled";
		}
		else{
			cout<<"\nThe tickets are not booked yet!";
		}
	}
	void displayTicketDetails(){
		cout<<"\nMovie name: "<<movieName;
		cout<<"\nSeat number: "<<seatNumber;
		cout<<"\nTicket Price: "<<price;
		if(isBooked==true){
		    cout<<"\nStatus of ticket: Booked";
		}
		else{
			cout<<"\nStatus of ticket: not Booked";
		}
	}
		
};
int main(){// demonstrating how the object can used of this class
	MovieTicket t1;
	t1.bookTicket();
	t1.displayTicketDetails();
}