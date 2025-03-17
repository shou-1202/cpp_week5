#include <iostream>
#include <string>
using namespace std;
class Employee{// a class is a user defined data type which works as a blue print for an object
	private:
	string empId, name, designation;
	double salary;
	
	public:
	Employee(string id, string empName, double empSalary, string empDesignation){
		empId = id;
		name = empName;
		salary = empSalary;
		designation = empDesignation;
	}
	Employee(const Employee &emp){
		name = emp.name;
		empId = emp.empId;
		designation = emp.designation;
		salary = emp.salary;
	}
	void displayInfo(){
		cout<<"\n Name: "<<name;
		cout<<"\n ID: "<<empId;
		cout<<"\n Salary: "<<salary;
		cout<<"\n Designation: "<<designation;
	}
};
int main(){// demonstrating how the object can used of this class
	Employee e1("RA456", "SHOURYA", 100000, "MANAGER");
	e1.displayInfo();
	Employee e2(e1);
	e2.displayInfo();
}