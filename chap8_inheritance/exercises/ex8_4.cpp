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

class education{
	protected:
		string gen_edu;
		string prof_edu;
	public:
		education(string gen_edu, string prof_edu){
			this->gen_edu = gen_edu;
			this->prof_edu = prof_edu;
		}

		void put_genedu(void){
			cout << "General Education Qualification" << gen_edu << endl;
		}

		void put_profedu(void){
			cout << "Professional Education Qualification" << prof_edu << endl;
		}
};

class teacher : public staff, public education{
	protected:
		string subject;
		string publication;
	public:
		teacher(string name, string publication, int code, string subject, string gen_edu, string prof_edu):staff(name, code), education(gen_edu, prof_edu){
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

class officer : public staff, public education{
	protected:
		char grade;
	public:
		officer(string name, int code, char grade, string gen_edu, string prof_edu) : staff(name, code), education(gen_edu, prof_edu){
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
