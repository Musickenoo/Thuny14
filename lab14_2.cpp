#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool a[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void inputMatrix(double b[][N]){
	for(int i = 0; i < N; i++){
        cout << "Row " << i+1 << ": ";
        for(int j = 0; j < N; j++){
            cin >> b[i][j];
        }
    }
}

void findLocalMax(const double c[][N], bool d[][N]){
	for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if( j >=1 && j <=N-2 && i >= 1 && i <=N-2 && c[i][j] >= c[i+1][j] &&
			 c[i][j] >= c[i-1][j] && c[i][j] >= c[i][j-1] && c[i][j] >= c[i][j+1]){
				d[i][j] = true;
			}
			else d[i][j] = false;
        }
    }
}