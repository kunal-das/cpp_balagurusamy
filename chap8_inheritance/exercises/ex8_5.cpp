#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class person{
	protected:
		string name;
		int code;
	public:
		person(){

		}
		person(string name, int code){
			this->name = name;
			this->code = code;
		}

		void put_name(void){
			cout << "Name : " << name << endl;
		}

		void put_code(void){
			cout << "Code : " << code << endl;
		}
};

class account : protected virtual person{
	protected:
		float pay;
	public:
		account(string name, int code, float pay) : person(name, code){
			this->pay = pay;
		}

		void update_pay(float pay){
			this->pay = pay;
		}

		void put_pay(void){
			cout << "Salary : " << pay << endl;
		}
};

class admin : protected virtual person{
	protected:
		float exp;
	public:
		admin(string name, int code, float exp) : person(name, code){
			this->exp = exp;
		}

		void update_exp(float exp){
			this->exp = exp;
		}

		void put_exp(void){
			cout << "Experience : " << exp << endl;
		}
};

class master : protected account, protected admin{

	public:
	master(string name, int code, float pay, float exp) : person(name, code), account(name, code, pay), admin(name, code, exp){
		cout << "Object of master created" << endl;
	}
};

/*----------Method Declaration--------*/
int main(void){
	//TODO
	return 0;
}
