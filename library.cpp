#include <iostream>
#include <string>
using namespace std;
class Book{// a class is a user defined data type which works as a blue print for an object
	private:
	string bookId, title, author;
	double price;
	
	public:
	Book(){
		title = "Harry Potter";
	}
	Book(string id, double bookprice, string bookAuthor): Book(){
		bookId = id;
		price = bookprice;
		author = bookAuthor;
	}
	void displayinfo(){
		cout<<"\nBook Name: "<<title;
		cout<<"\nBook ID: "<<bookId;
		cout<<"\nBook author: "<<author;
		cout<<"\nBook Price: "<<price;
	}
		
};
int main(){// demonstrating how the object can used of this class
	Book b1("A123", 850, "J. K. Rowling");
	b1.displayinfo();
}