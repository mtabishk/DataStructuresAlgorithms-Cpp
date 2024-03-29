#include<bits/stdc++.h>
using namespace std;

int board[11][11];

bool isPossible(int n, int row, int column) {
	// check same column
	for (int i = row - 1; i >= 0; i--) {
		if (board[i][column] == 1) {
			return false;
		}
	}
	// check upper left diagonal
	for (int i = row - 1, j = column - 1; i >= 0 && j >= 0; i--, j--) {
		if (board[i][j] == 1) {
			return	false;
		}
	}

	// check upper right diagonal
	for (int i = row - 1, j = column + 1; i >= 0 && j < n; i--, j++) {
		if (board[i][j] == 1) {
			return	false;
		}
	}

	return true;
}

void nQueenHelper(int n, int row) {
	if (row == n) {
		// we have reached some solution
		// Print the board matrix
		// return
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}

	// Place at all possible positions and move to smaller problem
	for (int j = 0; j < n; j++) {
		// j == column
		if (isPossible(n, row, j)) {
			board[row][j] = 1;
			nQueenHelper(n, row + 1);
			board[row][j] = 0;
		}
	}
	return;
}

void placeNQueens(int n) {
	// initializing board matrix with 0
	memset(board, 0, 11 * 11 * sizeof(int));

	nQueenHelper(n, 0);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n = 0;
	cin >> n;
	placeNQueens(n);
	return 0;
}