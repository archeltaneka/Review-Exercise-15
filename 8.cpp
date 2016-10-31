#include <iostream>
#include <string>
using namespace std;

// creates CustomerData class
class CustomerData{
	private:
		string lastName;
		string firstName;
		string address;
		string city;
		string state;
		string zip;
		string phone;
	public:
		// default constructor
		CustomerData()
		{
			lastName = "";
			firstName = "";
			address = "";
			city = "";
			state = "";
			zip = "";
			phone = "";
		}
		
		// constructor 2
		CustomerData(string last, string first, string add, string city, string state, string zip, string phone)
		{
			lastName = last;
			firstName = first;
			address = add;
			this->city = city;
			this->state = state;
			this->zip = zip;
			this->phone = phone;
		}
		
		// set lastName, firstName, address, city, state, zip and phone
		void setLastName(string lastN)
		{
			lastName = lastN;
		}
		void setFirstName(string firstN)
		{
			firstName = firstN;
		}
		void setAddress(string a)
		{
			address = a;
		}
		void setCity(string c)
		{
			city = c;
		}
		void setState(string s)
		{
			state = s;
		}
		void setZip(string z)
		{
			zip = z;
		}
		void setPhone(string p)
		{
			phone = p;
		}
		
		// get lastName, firstName, address, city, state, zip and phone
		string getLastName() const
		{
			return lastName;
		}
		string getFirstName() const
		{
			return firstName;
		}
		string getAddress() const
		{
			return address;
		}
		string getCity() const
		{
			return city;
		}
		string getState() const
		{
			return state;
		}
		string getZip() const
		{
			return zip;
		}
		string getPhone() const
		{
			return phone;
		}
};

// declares PreferredCustomer class derived from CustomerData class
class PreferredCustomer : public CustomerData
{
	private:
		double purchaseAmount;
		double discountLevel;
	public:
		// default constructor
		PreferredCustomer()
		{
			purchaseAmount = 0.0;
			discountLevel = 0.0;
		}
		
		// constructor 2
		PreferredCustomer(string, string, string, string, string, string, string, double, double);
		
		// get the purchaseAmount and discountLevel
		double getPurchaseAmount()
		{
			return purchaseAmount;
		}
		double getDiscountLevel()
		{
			return discountLevel;
		}
};
PreferredCustomer::PreferredCustomer(string ln, string fn, string a, string c, string s, string z, string p, double amount, double discount) : CustomerData(ln, fn, a, c, s, z, p)
{
	purchaseAmount = amount;
	discountLevel = discount;
}

// main function
int main(){
	
	// declares variables
	string inputLN, inputFN, inputAddress, inputCity, inputState, inputZip, inputPhone;
	double inputAmount, discount;
	
	// get prompt from the user
	cout << "Input last name: ";
	cin >> inputLN;
	cout << "Input first name: ";
	cin >> inputFN;
	cout << "Input address: ";
	cin >> inputAddress;
	cout << "Input city: ";
	cin >> inputCity;
	cout << "Input state: ";
	cin >> inputState;
	cout << "Input zip: ";
	cin >> inputZip;
	cout << "Input phone: ";
	cin >> inputPhone;
	cout << "Amount spent: ";
	cin >> inputAmount;
	// check for user amount spent
	if(inputAmount == 500)
	{
		discount = 5;
		cout << discount << "%";
	} else if(inputAmount == 1000)
	{
		discount = 6;
		cout << discount << "%";
	} else if(inputAmount == 1500)
	{
		discount = 7;
		cout << discount << "%";
	} else if(inputAmount == 2000)
	{
		discount = 10;
	} else {
		cout << "invalid amount!";
	}
	
	
	// creates PreferredCustomer object
	PreferredCustomer customer(inputLN, inputFN, inputAddress, inputCity, inputState, inputZip, inputPhone, inputAmount, discount);
	
	// print info
	cout << "Last name: " << customer.getLastName() << endl;
	cout << "First name: " << customer.getFirstName() << endl;
	cout << "Address: " << customer.getAddress() << endl;
	cout << "City: " << customer.getCity() << endl;
	cout << "State: " << customer.getState() << endl;
	cout << "Zip: " << customer.getZip() << endl;
	cout << "Phone: " << customer.getPhone() << endl;
	cout << endl;
	cout << "Amount spent: $" << customer.getPurchaseAmount() << endl;
	cout << "Discount: " << customer.getDiscountLevel() << "%";
	
	return 0;
	
}

