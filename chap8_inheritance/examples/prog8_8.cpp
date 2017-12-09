#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class alpha{
	int x;
	public:
		alpha(int x){
			this->x = x;
		}

		void show_alpha(void){
			cout << "Alpha = " << x << endl;
		}
};

class beta{
	float p, q;
	public:
		beta(float p, float q){
			this->p = p;
			this->q = q;
		}

		void show_beta(void){
			cout << "Beta : " << p << " and " << q << endl; 
		}
};

class gamma : public beta, public alpha{
	int u, v;
	public:
		gamma(int u, int v, float p):beta(p, p*3), alpha(u/3){
			this->u = u;
			this->v = v;
		}

		void show_gamma(void){
			cout << "Gamma : " << u << " and " << v << endl;
		}
};

/*----------Method Declaration--------*/
int main(void){

	gamma g(2, 4, 2.5);
	g.show_alpha();
	g.show_beta();
	g.show_gamma();
	return 0;
}
