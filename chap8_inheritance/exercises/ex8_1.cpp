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
		void get_name(string str){
			name = str;
		}

		void put_name(void){
			cout << "Account Holder Name : " << name << endl;
		}

		void get_acctype(char c){
			acc_type = c;
		}

		void put_acctype(void){
			cout << "Account Type : " << acc_type << endl;
		}
		
		void get_balance(float b){
			balance = b;
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

		void get_accnum(int num){
			acc_no = num;
		}

		void put_accnum(void){
			cout << "Account number : " << acc_no << endl;
		}

		void get_account(string name, int acc_no, char acc_type, float balance){
			get_name(name);
			get_accnum(acc_no);
			get_acctype(acc_type);
			get_balance(balance);
		}
};

class Savings : public Account{
	const float interest_rate = 5.0;
	public:
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
	const float min_balance = 500;
	public:
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

	Savings acc1;
	acc1.get_account("Kunal Das", 101, 'S', 10000.0);
	Current acc2;
	acc2.get_account("Koyel Das", 102, 'C', 10000.0);

	acc1.show_balance();
	acc1.deposit(5000);
	acc1.calc_comp_int();

	acc2.withdraw(9600);
	acc2.put_balance();
	acc2.chck_min_balance();
	return 0;
}
