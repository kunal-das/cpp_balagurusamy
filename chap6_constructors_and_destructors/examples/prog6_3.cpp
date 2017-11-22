# include <iostream>
# include <iomanip>
using namespace std;

/*---------Class Declaration--------*/
class Fixed_deposit{
	long int p_amount;
	int years;
	float rate;
	float r_value;
	public:
		Fixed_deposit();
		Fixed_deposit(long int, int, float);
		Fixed_deposit(long int, int, int);
		void display(void);
};
/*----------Method Declaration----------*/
Fixed_deposit :: Fixed_deposit(){}
Fixed_deposit :: Fixed_deposit(long int p, int y, float r=0.12){
	p_amount = p;
	years = y;
	rate = r;
	r_value = p_amount;
	for(int i = 0; i <= y; i++){
		r_value = r_value * (1.0 + rate);
	}
}
Fixed_deposit :: Fixed_deposit(long int p, int y, int r){
	p_amount = p;
	years = y;
	rate = r;
	for(int i = 0; i <= y; i++){
		r_value = r_value * (1.0 + float(r)/100);
	}
}
void Fixed_deposit :: display(void){
	cout << "Principal Amount : " << p_amount << endl
	     << "Return Value : " << setprecision(10) << r_value << endl;	
}
/*----------Main Program----------*/
int main(void){
	Fixed_deposit fd1, fd2, fd3;
	long int p;
	int y;
	float r;
	int R;

	cout << "Enter principal amount, years, interest rate(percent) : ";
	cin >> p >> y >> R;
	fd1 = Fixed_deposit(p, y, R);

	cout << "Enter principal amount, years, interest rate(decimal) : ";
	cin >> p >> y >> r;
	fd2 = Fixed_deposit(p, y, r);

	cout << "Enter principal amount, years : ";
	cin >> p >> y;
	fd3 = Fixed_deposit(p, y);

	fd1.display();
	fd2.display();
	fd3.display();
	return 0;
}
