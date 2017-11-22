# include <iostream>
using namespace std;

/*---------Class Declaration--------*/
class matrix{
	int **p;
	int row, col;
	public:
		matrix(int, int);
		void insert(int, int, int);
		int get(int, int);
		void display(void);
};
/*---------Method Declaration--------*/
matrix :: matrix(int row, int col){
	this->row = row;
	this->col = col;
	p = new int *[row];
	for(int i=0;i<row;i++){
		p[i] = new int[col];
	}
}

void matrix :: insert(int row, int col, int val){
	p[row][col] = val;
}

int matrix :: get(int row, int col){
	return p[row][col];
}
void matrix :: display(void){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

}
/*---------Main Program--------*/
int main(void){
	int row, col, k; 
	cout << "Enter the rows and cols : ";
	cin >> row >> col;
	matrix m(row, col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout << "Enter the value for " << i << " row and " << j << " column : ";
			cin >> k;
			m.insert(i, j, k);
		}
	}
	//m.display();
	cout << "Enter the row and col to get its value : ";
	cin >> row >> col;
	cout << m.get(row, col) << endl;	
	return 0;
}

