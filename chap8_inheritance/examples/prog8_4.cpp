#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class M{
	protected:
		int m;
	public:
		void get_m(int);
};

class N{
	protected:
		int n;
	public:
		void get_n(int);
};

class P : public M, public N{
	public:
		void display(void);
};

/*----------Method Declaration--------*/
void M :: get_m(int m){
	this->m = m;
}

void N :: get_n(int n){
	this->n = n;
}

void P :: display(void){
	cout << "M = " << m << endl
	     << "N = " << n << endl;
}

/*----------Method Declaration--------*/
int main(void){

	P p;

	p.get_m(19);
	p.get_n(3);
	p.display();
	return 0;
}
