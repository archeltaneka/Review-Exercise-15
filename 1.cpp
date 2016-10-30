#include <iostream>
#include <string>
using namespace std;

// creates Employee class
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
		// set the employee name
		void setName(string employeeName)
		{
			this->employeeName = employeeName;
		}
		// set the number
		void setNumber(int employeeNumber)
		{
			this->employeeNumber = employeeNumber;
		}
		// set hireDate
		void setDate(int hireDate)
		{
			this->hireDate = hireDate;
		}
		// get the employee name
		string getName() const
		{
			return employeeName;
		}
		// get employee's number
		int getNumber() const
		{
			return employeeNumber;
		}
		// get hire date
		int getDate() const
		{
			return hireDate;
		}
};

// declares derived class
class ProductionWorker : public Employee
{
	protected:
		int shift;
		double hourlyPayRate;
		string shiftString;
	public:
		// default constructor
		ProductionWorker() : Employee()
		{
			shift = 0;
			hourlyPayRate = 0.0;
			shiftString = "";
		}
		// constructor 2
		ProductionWorker(string, int, int, int, double);
		// get shift
		int getShift() const
		{
			return shift;
		}
		// get hourlyPayRate
		double getHourlyPayRate() const
		{
			return hourlyPayRate;
		}
};
ProductionWorker::ProductionWorker(string name, int ID, int date, int s, double pay) : Employee(name, ID, date)
{
	shift = s;
	hourlyPayRate = pay;
}

// main function
int main(){
	
	// defines variables for user input
	string workerName;
	int workerNumber;
	int workerHireDate;
	int shiftDay;
	string shiftString;
	double hourlyPay;
	
	// get prompt from the user
	cout << "Enter employee's name: ";
	cin >> workerName;
	
	cout << "Enter employee's ID number: ";
	cin >> workerNumber;
	
	cout << "Enter date hired: ";
	cin >> workerHireDate;
	
	cout << "Shift(1 - Day || 2 - Night): ";
	cin >> shiftDay;
	
	cout << "Hourly Pay Rate: ";
	cin >> hourlyPay;
		
	// creates ProductionWorker object
	ProductionWorker worker(workerName, workerNumber, workerHireDate, shiftDay, hourlyPay);
	
	// display message
	cout << "Name: " << worker.getName() << endl;
	cout << "ID Number: " << worker.getNumber() << endl;
	cout << "Hire Date: " << worker.getDate() << endl;
	if(worker.getShift() == 1)
	{
		cout << "Shift: Day" << endl;
	} else if(worker.getShift() == 2)
	{
		cout << "Shift Night" << endl;
	}
	cout << "Hourly Pay Rate: " << worker.getHourlyPayRate() << endl;
	
	return 0;
	
}
