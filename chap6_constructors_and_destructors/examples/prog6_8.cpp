# include <iostream>
using namespace std;

/*----------Class Declaration---------*/
class test{
	int *a;
	public:
		test(int size){
			a = new int[size];
			cout << "Object created\n";
		}
		~test(){
			delete a;
			cout << "Object destroyed\n";
		}
};

/*----------Main Program---------*/
int main(void){
	int a;
	cout << "Enter the size of the pointer : ";
	cin >> a;
	test t(a);
	cout << "Exiting the main program" << endl;
}
