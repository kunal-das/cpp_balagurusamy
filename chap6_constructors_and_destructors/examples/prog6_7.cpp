# include <iostream>
using namespace std;

int cnt = 0;

/*===========Class Declaration=========*/
class test{
	public:
		test(){
			cnt++;
			cout << "\nObject number " << cnt << " created" << endl;
		}
		~test(){
			cout << "Object number " << cnt << " deleted" << endl;
			cnt--;
		}
};

/*===========Main Program=========*/
int main(void){
	cout << "\nInside the main block" << endl;
	cout << "Creating the first object : " << endl;

	test t1;

	{
		cout << "Inside anonymous block" << endl;
		cout << "Creating objects t2 and t3" << endl;
		test t2, t3;

		cout << "Leaving anonymous block" << endl;
	}
	return 0;
}
