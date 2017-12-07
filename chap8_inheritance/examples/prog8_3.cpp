#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class student{
	protected:
		int roll_no;
	public:
		void get_number(int);
		void put_number(void);
};

class test : public student{
	protected:
		float sub1;
		float sub2;
	public:
		void get_marks(float, float);
		void put_marks(void);
};

class result : public test{
	float total;
	public:
		void display(void);
};

/*----------Method Declaration--------*/

void student :: get_number(int a){
	roll_no = a;
}

void student :: put_number(void){
	cout << "Roll Number : " << roll_no << endl;
}

void test :: get_marks(float num1, float num2){
	sub1 = num1;
	sub2 = num2;
}

void test :: put_marks(void){
	cout << "Subject 1 : " << sub1 << endl
	     << "Subject 2 : " << sub2 << endl;
}

void result :: display(void){
	total = sub1 + sub2;
	put_number();
	put_marks();
	cout << "Total : " << total << endl;
}

/*----------Method Declaration--------*/
int main(void){
	result stud1;
	stud1.get_number(111);
	stud1.get_marks(45.0, 78.9);
	stud1.display();
	return 0;
}
