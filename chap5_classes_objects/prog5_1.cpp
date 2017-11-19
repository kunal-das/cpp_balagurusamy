# include <iostream>
using namespace std;

/*------------Class Declaration Section----------------*/
class item{
	int item_id;
	float item_cost;

	public:
		void getdata(int, float);
		void putdata(void);
};

/*------------Method Definition Section----------------*/

void item :: getdata(int item_id, float item_cost){
	this->item_id = item_id;
	this->item_cost = item_cost;
}

void item :: putdata(void){
	cout << "item number " << this->item_id << endl;
	cout << "item cost " << this->item_cost << endl;
}

/*------------Main Program Starts----------------*/
int main(void){
	/*------------Declaration of first item----------------*/
	item x;
	x.getdata(101, 502.3);
	x.putdata();

	/*------------Declaration of second item----------------*/
	item y;
	y.getdata(102, 205.2);
	y.putdata();
	return 0;
}
