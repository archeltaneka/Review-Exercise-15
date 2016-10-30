#include <iostream>
#include <string>
using namespace std;

// declares PersonData class
class PersonData{
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
		PersonData()
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
		PersonData(string last, string first, string add, string city, string state, string zip, string phone)
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

// declares CustomerData class derived from PersonData class
class CustomerData : public PersonData
{
	protected:
		int customerNumber;
		bool mailingList;
	public:
		// default constructor
		CustomerData()
		{
			customerNumber = 0;
			mailingList = false;
		}
		
		// constructor 2
		CustomerData(string, string, string, string, string, string, string, int, bool);
		
		// set customerNumber
		void setCustNum(int custNum)
		{
			customerNumber = custNum;
		}
		
		// set mailingList
		void setMailingList(bool mail)
		{
			mailingList = mail;
		}
		
		// get customerNumber
		int getCustNum() const
		{
			return customerNumber;
		}
		
		// get mailingList
		bool getMailingList() const
		{
			return mailingList;
		}
};
CustomerData::CustomerData(string LN, string FN, string addr, string cit, string stat, string zips, string phoneNum, int customerN, bool mailing) : PersonData(LN, FN, addr, cit, stat, zips, phoneNum)
{
	customerNumber = customerN;
	mailingList = mailing;
}

// main function
int main(){
	
	// declares variables for user input
	string inputLastName;
	string inputFirstName;
	string inputAddress;
	string inputCity;
	string inputState;
	string inputZip;
	string inputPhone;
	char inputMailing;
	int uniqueInt;
	bool mailBool;
	
	// get prompt from the user
	cout << "PERSONAL DATA \n";
	cout << "--------------- \n";
	
	cout << "Last Name: ";
	cin >> inputLastName;
	
	cout << "First Name: ";
	cin >> inputFirstName;
	
	cout << "Address: ";
	cin >> inputAddress;
	
	cout << "City: ";
	cin >> inputCity;
	
	cout << "State: ";
	cin >> inputState;
	
	cout << "Zip: ";
	cin >> inputZip;
	
	cout << "Phone: ";
	cin >> inputPhone;
	
	cout << "Do you want to be on our mailing list?(Y/N): ";
	cin >> inputMailing;
	// check for user input
	if(inputMailing == 'Y' || inputMailing == 'y')
	{
		mailBool = true;
	} else if(inputMailing == 'N' || inputMailing == 'n')
	{
		mailBool = false;
	}
	
	cout << "Enter a unique integer number: ";
	cin >> uniqueInt;
	
	// creates CustomerData object
	CustomerData customer(inputLastName, inputFirstName, inputAddress, inputCity, inputState, inputZip, inputPhone, inputMailing, uniqueInt);
	
	// print info
	cout << "CUSTOMER PERSONAL DATA \n";
	cout << "---------------------- \n";
	cout << "Last Name: " << customer.getLastName() << endl;
	cout << "First Name: " << customer.getFirstName() << endl;
	cout << "Address: " << customer.getAddress() << endl;
	cout << "City: " << customer.getCity() << endl;
	cout << "State: " << customer.getState() << endl;
	cout << "Zip: " << customer.getZip() << endl;
	cout << "Phone: " << customer.getPhone() << endl;
	cout << "Mailing status: " << customer.getMailingList() << endl;
	cout << "Customer Number: " << customer.getCustNum() << endl;
	
	return 0;
}

