#include <iostream>
using namespace std;

void allocateMemoryto2DArray(int** ptr , int rows, int 	cols) {
	for (int i = 0; i < rows; i++) {
		*(ptr + i) = new int [cols];
	}
}

void input2DArray(int** ptr, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> *(*(ptr + i) + j); // *(*(ptr+i)+j) == p2[i][j]
		}
	}
}

void deallocateMemoryto2DArray(int** ptr , int rows) {
	for (int i = 0; i < rows; i++) {
		delete [] ptr[i];
	}
	delete [] ptr ;
}

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
		allocateMemoryto2DArray(p1, rows1, cols1);

		// allocating matrix2 on heap
		int **p2 = new int* [rows2];
		allocateMemoryto2DArray(p2, rows2, cols2);

		int rows3 = rows1;
		int cols3 = cols2;

		// allocating resultant matrix == matrix3 on heap
		int **p3 = new int* [rows3];
		allocateMemoryto2DArray(p3, rows3, cols3);

		// input for matrix1
		cout << "Enter the Matrix1: " << endl;
		input2DArray(p1, rows1, cols1);

		// input for matrix2
		cout << "Enter the Matrix2: " << endl;
		input2DArray(p2, rows2, cols2);

		// matrix multiplication
		cout << "\n\nThe new matrix is:\n";
		for (int i = 0; i < rows1; ++i) {
			for (int j = 0; j < cols2; ++j)
			{
				*(*(p3 + i) + j) = 0;
				for (int k = 0; k < rows2; ++k)
					*(*(p3 + i) + j) = *(*(p3 + i) + j) + ( (*(*(p1 + i) + k)) * (*(*(p2 + k) + j)) );
				cout << *(*(p3 + i) + j) << " ";
			}
			cout << "\n";
		}

		// deallocate memory
		deallocateMemoryto2DArray(p1 , rows1);
		deallocateMemoryto2DArray(p2 , rows2);
		deallocateMemoryto2DArray(p3 , rows3);
	}


	return 0;
}