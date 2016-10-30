#include <iostream>
#include <string>
using namespace std;

// declares Employee class
class Employee{
	private:
		string employeeName;
		int employeeNumber;
		int hireDate;
	public:
		// default constructor
		Employee()
		{
			employeeName = "";
			employeeNumber = 0;
			hireDate = 0;
		}
		// constructor 2
		Employee(string name, int number, int date)
		{
			employeeName = name;
			employeeNumber = number;
			hireDate = date;
		}
		// set employee's name
		void setName(string employeeName)
		{
			this->employeeName = employeeName;
		}
		// set employee's number
		void setNumber(int employeeNumber)
		{
			this->employeeNumber = employeeNumber;
		}
		// set hire date
		void setDate(int hireDate)
		{
			this->hireDate = hireDate;
		}
		// get name
		string getName() const
		{
			return employeeName;
		}
		// get number
		int getNumber() const
		{
			return employeeNumber;
		}
		// get date
		int getDate() const
		{
			return hireDate;
		}
};

// creates ShiftSupervisor derived class
class ShiftSupervisor : public Employee
{
	protected:
		double annualSalary;
		double annualProductionBonus;
		int productsSold;
	public:
		// default constructor
		ShiftSupervisor() : Employee()
		{
			annualSalary = 0.0;
			annualProductionBonus = 0.0;
		}
		// constructor 2
		ShiftSupervisor(string, int, int, double, double, int);
		
		// get the annualSalary
		double getAnnualSalary() const
		{
			return annualSalary;
		}
		
		// get the annualProductionBonus
		double getAnnualProductionBonus() const
		{
			return annualProductionBonus;
		}
		
		// get productsSold
		int getProductsSold() const
		{
			return productsSold;
		}
};
ShiftSupervisor::ShiftSupervisor(string name, int ID, int date, double as, double apb, int pSold) : Employee(name, ID, date)
{
	annualSalary = as;
	annualProductionBonus = apb;
	productsSold = pSold;
}

// main function
int main(){
	
	// declare variables for user input
	string supervisorName;
	const int YEAR_BONUS = 20;
	int supervisorID;
	int supervisorHireDate;
	int soldProducts;
	double supervisorAnnualSalary;
	double supervisorAnnualProductionBonus;
	
	// get prompt from the user
	cout << "Supervisor's name: ";
	cin >> supervisorName;
	
	cout << "Supervisor's ID number: ";
	cin >> supervisorID;
	
	cout << "Date hired: ";
	cin >> supervisorHireDate;
	
	cout << "Annual Salary: ";
	cin >> supervisorAnnualSalary;
	
	cout << "Products Sold: ";
	cin >> soldProducts;
	//check for bonus if shift meets production goals
	if(soldProducts > 100)
	{
		supervisorAnnualProductionBonus = (soldProducts - 100) * YEAR_BONUS;
	} else {
		supervisorAnnualProductionBonus = 0;
	}
	
	// creates ShiftSupervisor object
	ShiftSupervisor supervisor(supervisorName, supervisorID, supervisorHireDate, supervisorAnnualSalary, supervisorAnnualProductionBonus, soldProducts);
	
	// print supervisor info
	cout << "Supervisor Name: $" << supervisor.getName() << endl;
	cout << "ID Number: $" << supervisor.getNumber() << endl;
	cout << "Hired on date: $" << supervisor.getDate() << endl;
	cout << "Annual Salary: $" << supervisor.getAnnualSalary() << endl;
	cout << "Annual Production Bonus: $" << supervisor.getAnnualProductionBonus() << endl;
	
}
