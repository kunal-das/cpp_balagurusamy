# include <iostream>
# include <string>

using namespace std;

class Employee{
	string name;
	int age;

	public:
		void setdata(string, int);
		void putdata(void);
};

/*---------Method Declaration--------*/
void Employee :: setdata(string name, int age){
	this->name = name;
	this->age = age;
}

void Employee :: putdata(void){
	cout << "Employee Name : " << name << endl;
	cout << "Employee Age : " << age << endl;
}
const int size = 10;

/*----------Main Program---------*/
int main(void){
	Employee ep[size];
	string name;
	int age;
	for(unsigned int i=0;i<size;i++){
		cout << "Enter the name of the employee and his age : ";
		cin >> name >> age;
		cout << endl;
		ep[i].setdata(name, age); 
	}
	for(unsigned int i=0; i<size;i++){
		ep[i].putdata(); 
	}	
	return 0;
}
