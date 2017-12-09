#include <iostream>
using namespace std;

/*----------Class Declaration--------*/
class alpha{
	int x;
	public:
		alpha(int x){
			this->x = x;
		}

		void show(void){
			cout << "x = " << x << endl;
		}
};

class beta{
	float y;
	public:
		beta(float y){
			this->y = y;
		}

		void show_y(void){
			cout << "y = " << y << endl;
		}
};

class gamma : public beta, public alpha{

	int m, n;
	public:
		gamma(int x, float y, int m, int n) : beta(y), alpha(x){
			this->m = m;
			this->n = n;
		}

		void show_mn(void){
			cout << "m = " << m << endl
			     << "n = " << n << endl;
		}
};

/*----------Method Declaration--------*/
int main(void){

	gamma g(5, 10.75, 4, 6);
	g.show();
	g.show_y();
	g.show_mn();
	return 0;
}
