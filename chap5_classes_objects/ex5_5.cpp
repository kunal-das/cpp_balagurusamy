# include <iostream>

using namespace std;

class DB; //Forward Declaration
/*-----------Class Declaration--------------*/
class DM{
	int metres;
	int centi;
	public:
		void set_values(void);
		void display(void);
		friend DM add(DM, DB);
};
class DB{
	int feet;
	int inches;
	public:
		void set_values(void);
		void display(void);
		friend DM add(DM, DB);
};
/*-----------Method Declaration--------------*/
void DM :: set_values(void){
	float in = 0.0;
	cout << "Enter metres and centimeters upto 2 decimal places : ";
	cin >> in;
	metres = (int)in;
	centi = (in - metres)*100;
}
void DM :: display(void){
	cout << metres << " metres and " << centi << "centimetres" << endl;
}
void DB :: set_values(void){
	cout << "Enter feet and inches with a space : ";
	cin >> feet >> inches;
}
void DB :: display(void){
	cout << feet << " feet and " << inches << " inches." << endl;
}
DM add(DM d, DB b){
	DM x;
	x.metres = d.metres + b.feet * 0.3;
	x.centi = d.centi + b.inches * 12;
	return x;
}
/*-----------Main Program--------------*/
int main(void){
	DM m;
	DB b;
	m.set_values();
	b.set_values();
	DM x = add(m, b);
	x.display();
	return 0;
}
