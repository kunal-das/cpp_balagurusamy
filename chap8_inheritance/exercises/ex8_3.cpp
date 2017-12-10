#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class staff{
	protected:
		int code;
		string name;
	public:
		staff(string name, int code){
			this->name = name;
			this->code = code;
		}

		void put_name(void){
			cout << "Staff name : " << name << endl;
		}

		void put_code(void){
			cout << "Staff code : " << code << endl;
		}
};

class teacher : public staff{
	protected:
		string subject;
		string publication;
	public:
		teacher(string name, string publication, int code, string subject):staff(name, code){
			this->subject = subject;
			this->publication = publication;
		}

		void put_subject(void){
			cout << "Teacher's Subject : " << subject << endl;
		}

		void put_publication(void){
			cout << "Publication : " << publication << endl;
		}
};

class typist : public staff{
	protected:
		float type_speed;
	public:
		typist(string name, int code, float type_speed):staff(name, code){
			this->type_speed = type_speed;
		}

		void put_speed(void){
			cout << "Typing Speed : " << type_speed << endl;
		}
};

class officer : public staff{
	protected:
		char grade;
	public:
		officer(string name, int code, char grade) : staff(name, code){
			this->grade = grade;
		}

		void put_grade(void){
			cout << "Officer grade : " << grade << endl;
		}
};

class regular : public typist{
	public:
		regular(string name, int code, float speed) : typist(name, code, speed){

		}
};

class casual : public typist{
	protected:
		float daily_wage;
	public:
		casual(string name, int code, float speed, float daily_wage) : typist(name, code, speed){
			this->daily_wage = daily_wage;
		}

		void put_dailywage(void){
			cout << "Daily Wage : " << daily_wage << endl;
		}
};

/*----------Main Program--------*/
int main(void){
	//TODO
	return 0;
}
