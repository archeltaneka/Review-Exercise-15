#include "MilTime.h"
using namespace std;

int main(){
	
	// creates MilTime object
	MilTime time(1000, 30);
	
	// display output
	cout << time.getStandhr() << endl;
	cout << time.getHour() << endl;
	
	// creates TimeClock object
	TimeClock clockDiff;
	clockDiff.diff(300, 900);
	
	// display output
	cout << clockDiff.getStandhr() << endl;
	cout << clockDiff.getHour() << endl;
	
}
