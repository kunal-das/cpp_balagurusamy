# include <iostream>
using namespace std;

void set_array(int,int);

int main(){
	int m, n;

	cout << "Enter the size of the matrix : ";
	cin >> n >> m;

	set_array(m, n);

	return 0;
}

void set_array(int m, int n){
	int arr[m][n];

	for(int i=0;i<m;i++){
		for(int k=0;k<n;k++){
			cout << "Enter number for row " << i << " and column " << k;
			cin >> arr[i][k];
		}
	}
}
