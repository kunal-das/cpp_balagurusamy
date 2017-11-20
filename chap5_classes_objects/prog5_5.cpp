# include <iostream>

using namespace std;

class test{
	int code;
	static int count;

	public:
		void setcode(int code){
			this->code = code;
			count++;
		}
		void getcode(void){
			cout << "Code is : " << code << endl;
		}
		void showcount(void){
			cout << "Count is : " << count << endl;
		}
		
};

int test :: count = 10;

int main(void){
	test t1, t2;
	t1.setcode(10);
	t2.setcode(11);
	t1.showcount();
	return 0;
}
