#include <bits/stdc++.h>
using namespace std;

//_______________________________________________________________________________________________

bool is_safe(vector<vector<char>>& board, int row, int col, int n) {
    // For row & col
    for(int i=0; i<board.size(); i++) {
        if(board[row][i] == char(n + '0')) {
            return false;
        }

        if(board[i][col] == char(n + '0')) {
            return false;
        }
    }

    // For 3 * 3 grid

    int start_row = 3 * (row/3);
    int start_col = 3 * (col/3);

    for(int i=start_row; i<start_row + 3; i++) {
        for(int j=start_col; j<start_col + 3; j++) {
            if(board[i][j] == char(n + '0')) {
                return false;
            }
        }
    }

    return true;
}


bool Solve(vector<vector<char>>& board, int row, int col) {
    if(row == board.size()) {
        return true;
    }

    int new_row = 0, new_col = 0;
    if(col+1 == board.size()) {
        new_row = row + 1;
        new_col = 0;
    } else {
        new_row = row;
        new_col = col + 1;
    }

    if(board[row][col] != '.') {
        if(Solve(board, new_row, new_col)) {
            return true;
        }
    } else {
        for(int i=1; i<=9; i++) {
            if(is_safe(board, row, col, i)) {
                board[row][col] = char(i + '0');
                if(Solve(board, new_row, new_col)) {
                    return true;
                } else {
                    board[row][col] = '.';
                }
            }
        }
    }

    return false;
}

//_______________________________________________________________________________________________


int main(){
    vector<vector<char>> v(9, vector<char>(9));
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cin >> v[i][j];
        }
    }

    bool bl = Solve(v, 0, 0);

    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


//_______________________________________________________________________________________________
/*
5 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9

------>

5 3 4 6 7 8 9 1 2 
6 7 2 1 9 5 3 4 8 
1 9 8 3 4 2 5 6 7 
8 5 9 7 6 1 4 2 3 
4 2 6 8 5 3 7 9 1 
7 1 3 9 2 4 8 5 6 
9 6 1 5 3 7 2 8 4 
2 8 7 4 1 9 6 3 5 
3 4 5 2 8 6 1 7 9
*/