#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class Account{
	protected:
		string name;
		int acc_no;
		char acc_type;
		float balance;
	public:
		void get_name(char * str){
			name = str;
		}

		void put_name(void){
			cout << "Account Holder Name : " << name << endl;
		}


};

class ______{

	public:
};
/*----------Method Declaration--------*/





/*----------Method Declaration--------*/
int main(void){

	return 0;
}
