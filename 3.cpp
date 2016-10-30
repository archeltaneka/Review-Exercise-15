#include <iostream>
using namespace std;

// declares ProductionWorker class
class ProductionWorker{
	private:
		int hours;
		double hourlyPayRate;
	public:
		// default constructor
		ProductionWorker()
		{
			hours = 0;
			hourlyPayRate = 0.0;
		}
		
		// constructor 2
		ProductionWorker(int hour, double hourPay, double bonusP)
		{
			hours = hour;
			hourlyPayRate = hourPay;
		}
		
		// set hours, hourlyPayRate and bonusPay
		void setHours(int h)
		{
			hours = h;
		} 
		void setHourlyPayRate(double hourPayRate)
		{
			hourlyPayRate = hourPayRate;
		}
		
		// get hours, hourlyPayRate and bonusPay
		int getHours() const
		{
			return hours;
		}
		int getHourlyPayRate() const
		{
			return hourlyPayRate;
		}
};

// declares TeamLeader class derived from ProductionWorker class
class TeamLeader : public ProductionWorker
{
	protected:
		int hoursWorked;
		double bonusPay;
	public:
		// default constructor
		TeamLeader()
		{
			hoursWorked = 0;
			bonusPay = 0.0;
		}
		
		// constructor 2
		TeamLeader(int, double, int, double);
		
		// set hoursWorked
		void setHoursWorked(int hoursW)
		{
			hoursWorked = hoursW;
		}
		
		// set bonusPay
		void setBonusPay(double bonus)
		{
			bonusPay = bonus;
		}
		
		// get hoursWorked
		int getHoursWorked() const
		{
			return hoursWorked;
		}
		
		// get bonusPay
		double getBonusPay() const
		{
			return bonusPay;
		}	
};
TeamLeader::TeamLeader(int h, double hp, int hw, double bp) : ProductionWorker(h, hp, bp)
{
	hoursWorked = hw;
	bonusPay = bp;
}

// main function
int main(){
	
	// creates variables for user input
	int inputHour;
	int bonusHour;
	const int MIN_HOUR = 40;
	const double HOURLY_PAY_RATE = 34.5;
	double bonusAmount;
	double totalAmount;
	
	// get prompt from the user
	cout << "How many hours has the team leader worked? ";
	cin >> inputHour;
	if(inputHour > 40)
	{
		bonusHour = inputHour - MIN_HOUR;
		bonusAmount = bonusHour * HOURLY_PAY_RATE;
		cout << "The team leader has worked over: " << bonusHour << " hours" << endl;
		cout << "Bonus Pay Rate: $" << bonusAmount << endl;
		totalAmount = HOURLY_PAY_RATE + bonusAmount;
		cout << "Total Pay: $" << totalAmount << endl;
	} else {
		bonusHour = 0;
		bonusAmount = 0;
		cout << "The team leader has worked over: " << bonusHour << " hours" << endl;
		cout << "Bonus Pay Rate: $" << bonusAmount << endl;
		totalAmount = HOURLY_PAY_RATE + bonusAmount;
		cout << "Total Pay: $" << totalAmount << endl;
	}
	return 0;
}
