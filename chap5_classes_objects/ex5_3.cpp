# include <iostream>
# include <string>
# include <iomanip>
using namespace std;

/*-----------Class Declaration-----------*/
class Account{
	string name;
	int acc_num;
	float balance;
	char acc_type;
	static int count;
	public:
		void createAccount(void);	
		void depositAmt(float);
		float withdrawAmt(float);
		void display(void);
};
/*-----------Static variable Initializer-----------*/
int Account :: count = 0;
const int size = 3;
/*-----------Method Declaration-----------*/
void Account :: createAccount(void){
	count++;
	string name;
	float initial_amt;
	char acc_type;
	cout << "Enter customer name : ";
	cin >> name;
	cout << "Enter initial deposit amount : ";
	cin >> initial_amt;
	cout << "Enter account type : ";
	cin >> acc_type;
	this->name = name;
	this->balance = initial_amt;
	this->acc_type = acc_type;
	this->acc_num = count;
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
	cout << "Account Balance: " << setprecision(10) << balance << endl;
	cout << "Account Type : " << acc_type << endl;
}

/*-----------Main Program-----------*/
int main(void){
	Account acc[size];
	for(int i=0;i<size;i++){
		acc[i].createAccount();
	}

	for(int i=0;i<size;i++){
		if(i%2==0)
			acc[i].depositAmt(1000);
		else
			acc[i].withdrawAmt(500);
	}

	for(int i=0;i<size;i++){
		acc[i].display();
	}

	return 0;
}
