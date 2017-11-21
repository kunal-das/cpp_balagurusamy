# include <iostream>
using namespace std;

/*----------Class Declaration-----------*/
class matrix{
	int m[3][3];
	public:
		void read(void);
		void display(void);
		friend matrix transpose(matrix);
		friend matrix multiply(matrix, matrix);
};

/*-------------Method Declaration----------*/
void matrix :: read(void){
	for(int i=0; i<3; i++){
		for(int j=0;j<3;j++){
			cout << "m["<<i<<"]["<<j<<"] = ";
			cin >> m[i][j];
		}
	}
}

void matrix :: display(void){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
}

matrix transpose(matrix m1){
	matrix temp;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			temp.m[j][i] = m1.m[i][j];
		}
	}
	return temp;
}

matrix multiply(matrix m1, matrix m2){
	matrix m3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			m3.m[i][j] = m1.m[i][j] * m2.m[i][j];
		}
	}
	return m3;
}

/*------------Main Program-----------*/
int main(void){
	matrix mat1, mat2;
	mat1.read();
	cout << "Matrix 1 is : " << endl;
	mat1.display();

	mat2 = transpose(mat1);
	cout << "Transpose of Matrix 1 is : " << endl;
	mat2.display();

	matrix m3 = multiply(mat1, mat2);
	cout << "Matrix multiplication result of matrix1 and matrix 2 is : " << endl;
	m3.display();

	return 0;
}
