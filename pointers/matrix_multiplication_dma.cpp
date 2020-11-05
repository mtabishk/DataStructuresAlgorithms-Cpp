#include <iostream>
using namespace std;

int main() {

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	cout << "+-----------Matrix Multiplication using DMA--------------+" << endl;

	int rows1, cols1, rows2, cols2;

	cout << "Enter total no. of rows and columns in matrix 1" << endl;
	cin >> rows1 >> cols1;

	cout << "Enter total no. of rows and columns in matrix 2" << endl;
	cin >> rows2 >> cols2;

	if (cols1 != rows2) {
		cout << "Matrix Multiplication between Matrix 1 and Matrix 2 is not possible" << endl;

	} else {
		// allocating matrix1 on heap
		int **p1 = new int* [rows1];
		for (int i = 0; i < rows1; i++) {
			*(p1 + i) = new int [cols1];   // *(p1+i) == p1[i]
		}
		// allocating matrix2 on heap
		int **p2 = new int* [rows2];
		for (int i = 0; i < rows2; i++) {
			*(p2 + i) = new int [cols2];   // *(p2+i) == p2[i]
		}
		int rows3 = rows1;
		int cols3 = cols2;
		// allocating resultant matrix == matrix3 on heap
		int **p3 = new int* [rows3];
		for (int i = 0; i < rows3; i++) {
			*(p3 + i) = new int [cols3];   // *(p3+i) == p3[i]
		}

		// input for matrix1
		cout << "Enter the Matrix1: " << endl;
		for (int i = 0; i < rows1; ++i) {
			for (int j = 0; j < cols1; ++j) {
				cin >> *(*(p1 + i) + j); // *(*(p1+i)+j) == p1[i][j]
			}
		}
		cout << "Enter the Matrix2: " << endl;
		// input for matrix2
		for (int i = 0; i < rows2; ++i) {
			for (int j = 0; j < cols2; ++j) {
				cin >> *(*(p2 + i) + j); // *(*(p2+i)+j) == p2[i][j]
			}
		}

		// matrix multiplication
		cout << "\n\nThe new matrix is:\n";
		for (int i = 0; i < rows1; ++i)
		{
			for (int j = 0; j < cols2; ++j)
			{
				*(*(p3 + i) + j) = 0;
				for (int k = 0; k < rows2; ++k)
					*(*(p3 + i) + j) = *(*(p3 + i) + j) + ( (*(*(p1 + i) + k)) * (*(*(p2 + k) + j)) );
				cout << *(*(p3 + i) + j) << " ";
			}
			cout << "\n";
		}
	}


	return 0;
}