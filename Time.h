#ifndef TIME_H
#define TIME_H

// defines Time class
class Time{
	protected:
		int hours;
		int minutes;
		int seconds;
	public:
		// default constructor
		Time()
		{
			hours = 0;
			minutes = 0;
			seconds = 0;
		}
		
		// constructor 2
		Time(int hour, int minute, int second)
		{
			hours = hour;
			minutes = minute;
			seconds = second;
		}
		
		// get hours, minutes and seconds
		int getHours() const
		{
			return hours;
		}
		int getMinutes() const
		{
			return minutes;
		}
		int getSeconds() const
		{
			return seconds;
		}
};

#endif
