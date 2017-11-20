# include <iostream>

using namespace std;

/*--------Class Declaration---------*/
class Time{
	int hours, minutes;
	public:
		void getTime(int hours, int minutes){
			this->hours = hours;
			this->minutes = minutes;
		}

		void putTime(void){
			cout << "Time is : " << hours << " hours and " << minutes << " minutes\n";
		}

		void sumTime(Time, Time);
};

/*----------Method Declaration-------------*/
void Time :: sumTime(Time t1, Time t2){
	int mins = t1.minutes + t2.minutes;
	this->hours = t1.hours + t2.hours;
	this->hours += mins/60;
	this->minutes = mins % 60;
}

/*-----------Main Program-----------*/
int main(void){
	Time t1, t2, t3;
	t1.getTime(2, 45);
	t2.getTime(3, 30);
	t3.sumTime(t1, t2);
	t3.putTime();
}
