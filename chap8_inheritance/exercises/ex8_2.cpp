#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*----------Class Declaration--------*/
class Account{
	protected:
		string name;
		int acc_no;
		char acc_type;
		float balance;
	public:
		Account(string name, int acc_no, char acc_type, float balance){
			this->name = name;
			this->acc_no = acc_no;
			this->acc_type = acc_type;
			this->balance = balance;
		}

		void put_name(void){
			cout << "Account Holder Name : " << name << endl;
		}

		void put_acctype(void){
			cout << "Account Type : " << acc_type << endl;
		}
		
		float put_balance(void){
			return balance;
		}

		void show_balance(void){
			cout << "Balance : " << balance << endl;
		}
		void deposit(float d){
			balance += d;
			cout << "New Balance : " << put_balance() <<endl;
		}

		void withdraw(float d){
			if(balance >= d){
				balance -= d;
				cout << "Amount withdrawn : " << d << endl;
			}			
			else
				cout << "Insufficient Balance" << endl;
		}

		void put_accnum(void){
			cout << "Account number : " << acc_no << endl;
		}

};

class Savings : public Account{
	float interest_rate;
	public:
		Savings(string name, int acc_no, char acc_type, float balance, float interest_rate = 5.0):Account(name, acc_no, acc_type, balance){
			this->interest_rate = interest_rate;
		}
		float calc_comp_int(void){
			float new_principal = balance*pow((1+(interest_rate/100)), 1);
			float interest = new_principal - balance;
			return interest;
		}

		void deposit(float amount){
			float itr = calc_comp_int();
			balance += itr + amount;
			cout << "New balance : " << put_balance() << endl;
		}
};

class Current : public Account{
	float min_balance;
	public:
		Current(string name, int acc_no, char acc_type, float balance, float min_balance = 500): Account(name, acc_no, acc_type, balance){
			this->min_balance = min_balance;
		}
		void chck_min_balance(void){
			if(balance < min_balance){
				balance -= 10;
				cout << "Current balance is less than minimum balance. Deducting 10 rupees." << endl;
				show_balance();
			}
		}
};

/*----------Method Declaration--------*/
int main(void){

	Savings acc1("Kunal Das", 101, 'S', 10000);
	Current acc2("KD", 103, 'C', 10000, 1000);

	acc1.show_balance();
	acc1.deposit(5000);
	acc1.calc_comp_int();

	acc2.withdraw(9600);
	acc2.put_balance();
	acc2.chck_min_balance();
	return 0;
}
