# include <iostream>
# include <string>

using namespace std;

/*------------Class Declaration---------*/
class binary{
	string s;

	public:
		void read(void);
		void display(void);
		void check_binary(void);
		void ones_comp(void);
};

/*---------Method Declaration============*/

void binary :: read(void){
	cout << "Enter a binary number : ";
	cin >> s;
}

void binary :: display(void){
	ones_comp();
	cout << "One's complement of the entered binary number is : " << s << endl;
}

void binary :: check_binary(void){
	for(unsigned int i = 0; i<s.length(); i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout << "Incorrect Binary number. Exiting the application\n";
			exit(1);
		}
	}
}

void binary :: ones_comp(void){
	check_binary();
	for(unsigned int i = 0; i<s.length(); i++){
		if(s.at(i) == '1')
			s.at(i) = '0';
		else
			s.at(i) = '1';
	}
}

/*------------Main Program---------*/
int main(void){
	binary b;
	b.read();
	b.display();
	return 0;
}



