#include <iostream>

using namespace std;

const int m = 50;

class Items{
	int itemCode[m];
	float itemPrice[m];
	int count;

	public:
		void cnt(void);
		void getitem(void);
		void displaySum(void);
		void remove(void);
		void displayItems(void);
};

void Items :: cnt(void){
	this->count = 0;
}

void Items :: getitem(void){
	cout << "Enter item code : ";
	cin >> this->itemCode[count];

	cout << "Enter the item cost : ";
	cin >> this->itemPrice[count];
	count ++;
}

void Items :: displaySum(void){
	float sum = 0.0;
	for(int i=0;i<count;i++){
		sum += itemPrice[i];
	}
	cout << "The total sum of all items is : " << sum << endl;
}

void Items :: remove(void){
	int code;
	cout << "Enter the item code to remove : ";
	cin >> code;
	for(int i=0;i<count;i++){
		if(itemCode[i] == code){
			itemCode[i] = 0;
			itemPrice[i] = 0;
		}
	}
}

void Items :: displayItems(void){
	cout << "\nCode\tPrice\n";
	for(int i = 0; i<count; i++){
		cout << itemCode[i] << "\t" << itemPrice[i] << endl;
	}
	cout << endl;
}

int main(void){
	Items cart;
	cart.cnt();
	int x;
	
	do{
		cout << "You can do the following :"
			"\n1 : Add an item"
			"\n2 : Display total value"
			"\n3 : Delete an item"
			"\n4 : Display all items"
			"\n5 : Quit";
		cout << "\nPlease enter a value according to above : ";
		cin >> x;
		switch(x){
			case 1:
				cart.getitem();break;
			case 2:
				cart.displaySum();break;
			case 3:
				cart.remove();break;
			case 4:
				cart.displayItems();break;
			case 5:
				break;
			default:
				cout << "Please enter a valid number between 1 to 5";
		}
	}while(x!=5);	
	return 0;
}
