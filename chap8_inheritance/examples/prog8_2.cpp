#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class B{
	int a;
	public:
		int b;
		void get_ab(void);
		int get_a(void);
		void show_a(void);
};

class D : private B{
	int c;
	public:
		void mul(void);
		void display(void);
};
/*----------Method Declaration--------*/

void B :: get_ab(void){
	cout << "Enter the values of a and b : "; 
	cin >> a >> b;
}

int B :: get_a(void){
	return a;
}	

void B :: show_a(void){
	cout << "a = " << a << endl;
}

void D :: mul(void){
	c = b * get_a();
}

void D :: display(void){
	show_a();
	cout << "b = " << b << endl
	     << "c = " << c << endl;
}

/*----------Method Declaration--------*/
int main(void){

	D d;
	d.mul();
	d.display();
	d.mul();
	d.display();
	return 0;
}
