# include <iostream>
# include <string>
using namespace std;

/*-----------Class Declaration-----------*/
class Account{
	string name;
	int acc_num;
	float balance;
	char acc_type;
	static int count;
	public:
		Account(){}
		Account(string name, int acc_num, float balance, char acc_type){
			this->name = name;
			this->acc_num = acc_num;
			this->balance = balance;
			this->acc_type = acc_type;
			count++;
		}
		~Account(){
			cout << "Account No.: " << acc_num << " deleted" << endl;
		}
		void createAccount(string, float, char);	
		void depositAmt(float);
		float withdrawAmt(float);
		void display(void);
};
/*-----------Static variable Initializer-----------*/
int Account :: count = 0;
/*-----------Method Declaration-----------*/
void Account :: createAccount(string name, float initial_amt, char acc_type){
	count++;
	this->name = name;
	balance = initial_amt;
	this->acc_type = acc_type;
	acc_num = count;
}

void Account :: depositAmt(float amt){
	this->balance += amt;
}

float Account :: withdrawAmt(float amt){
	if(balance > amt){
		balance -= amt;
		return amt;
	}
	else{
		cout << "Insufficient Balance\n";
		return -1;
	}
}

void Account :: display(void){
	cout << "\nAccount Information : \n";
	cout << "Account Holder Name : " << name << endl;
	cout << "Account Number : " << acc_num << endl;
	cout << "Account Balance: " << balance << endl;
	cout << "Account Type : " << acc_type << endl;
}

/*-----------Main Program-----------*/
int main(void){
	Account acc1, acc2;
	acc1.createAccount("Kunal Das", 100000, 'S');
	acc2.createAccount("Sushmita Verma", 700000, 'S');

	acc1.depositAmt(500000);
	acc2.withdrawAmt(4000);

	acc1.display();
	acc2.display();

	return 0;
}
