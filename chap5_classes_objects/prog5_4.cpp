# include <iostream>

using namespace std;

/*-------Class declaration------*/
class item{
	int number;
	static int count;
	public:
		void getdata(int);
		void getcount(void);
};

/*-------Static member initializer--------*/
int item :: count = 0;

/*---------Method Declaration------*/
void item :: getdata(int a){
	this->number = a;
	count++;
}

void item :: getcount(void){
	cout << "The count of is : " << count << endl;
}

/*-----------Main Program---------*/
int main(void){
	item a, b, c;
	a.getcount();
	b.getcount();
	c.getcount();

	a.getdata(12);
	b.getdata(19);
	c.getdata(10);

	a.getcount();
	b.getcount();
	c.getcount();
	return 0;
}
