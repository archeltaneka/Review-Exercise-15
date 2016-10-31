#include <iostream>
#include <string>
using namespace std;

// declares Ship class
class Ship{
	protected:
		string name; // ship's name
		string yearBuilt; // year the ship was built
	public:
		// default constructor
		Ship()
		{
			name = "";
			yearBuilt = "";
		}
		
		// constructor 2
		Ship(string name, string yearBuilt)
		{
			this->name = name;
			this->yearBuilt = yearBuilt;
		}
		
		// set the name and yearBuilt
		void setName(string n)
		{
			name = n;
		}
		void setYear(string year)
		{
			yearBuilt = year;
		}
		
		// get the name and yearBuilt
		string getName() const
		{
			return name;
		}
		string getYear() const
		{
			return yearBuilt;
		}
		
		// virtual print function
		virtual void print() = 0;
};

// declares CruiseShip derived from Ship class
class CruiseShip : public Ship
{
	protected:
		int maxPassengers;
	public:
		// default constructor
		CruiseShip() : Ship()
		{
			maxPassengers = 0;
		}
		
		// constructor 2
		CruiseShip(string name, string yearBuilt, int passengers) : Ship(name, yearBuilt)
		{
			maxPassengers = passengers;
		}
		
		// set and get the maxPassengers
		void setMaxPassengers(int maxPassengers)
		{
			this->maxPassengers = maxPassengers;
		}
		int getMaxPassengers() const
		{
			return maxPassengers;
		}
		
		// print function
		void print()
		{
			cout << "Ship name: " << name << endl;
			cout << "Max Passengers: " << maxPassengers << endl;
		}
};

// declares CargoShip class derived from Ship class
class CargoShip : public Ship
{
	protected:
		int capacity;
	public:
		// default constructor
		CargoShip() : Ship()
		{
			capacity = 0;
		}
		
		// constructor 2
		CargoShip(string name, string yearBuilt, int capacity) : Ship(name, yearBuilt)
		{
			this->capacity = capacity;
		}
		
		// set and get for ship's capacity
		void setCapacity(int capacity)
		{
			this->capacity = capacity;
		}
		int getCapacity() const
		{
			return capacity;
		}
		
		// print function
		void print()
		{
			cout << "Ship's name: " << name << endl;
			cout << "Capacity(kg): " << capacity;
		}
};

// main function
int main(){
	
	// constant array size
	const int NUM_SHIPS = 2;
	
	Ship *ships[NUM_SHIPS] = {new CruiseShip("S.S Kunkka", "1745", 1000),
							  new CargoShip("Dig Bick", "1994", 7500)};

	
	// print ships info
		ships[0]->print();
		ships[1]->print();
		
	return 0;
}


