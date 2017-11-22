# include <iostream>
using namespace std;

/*------------Class Declaration---------*/
class code{
	int id;
	public:
		code(){};
		code(int a){
			id = a;
		}
		code(code & x){
			id = x.id;
		}
		void display(void){
			cout << "Id : " << id << endl;
		}
};
/*------------Main Program---------*/
int main(void){
	code a(100);
	code b(a);
	code c = a; 

	a.display();
	b.display();
	c.display();

	return 0;
}
