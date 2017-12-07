#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class B{
	int a;
	public:
		int b;
		void set_ab(void);
		int get_a(void);
		void show_a(void);
};

class D : public B{
	int c;
	public:
		void mul(void);
		void display(void);
};
/*----------Method Declaration--------*/

void B :: set_ab(void){
	a = 5;
	b = 10;
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
	cout << "a = " << get_a() << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

/*----------Method Declaration--------*/
int main(void){

	D d;

	d.set_ab();
	d.mul();
	d.show_a();
	d.display();

	d.b = 20;
	d.mul();
	d.display();

	return 0;
}
