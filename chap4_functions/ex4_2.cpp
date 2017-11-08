# include <iostream>
using namespace std;

int **set_array(int,int);
void printArray(int **, int &, int &);

int main(){
	int m, n;

	cout << "Enter the size of the matrix : ";
	cin >> n >> m;

	int ** arr = set_array(m, n);
	printArray(arr, m, n);
	return 0;
}

int **set_array(int m, int n){
	int **arr = new int *[m];

	for(int i=0;i<m;i++){
		arr[i] = new int[n];
		for(int k=0;k<n;k++){
			cout << "Enter number for row " << i << " and column " << k << " ";
			cin >> arr[i][k];
		}
	}
	return arr;
}

void printArray(int **arr, int &m, int &n){
	for(int i=0;i<m;i++){
		for(int k=0;k<n;k++){
			cout << arr[i][k] << " ";
		}
		cout << endl;
	}
}

