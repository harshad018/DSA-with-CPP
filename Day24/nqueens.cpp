#include<iostream>
#include<cstring>
#include<vector>


using namespace std;

void printBoard(vector<vector<char>> board){
    for (int i = 0; i < board.size(); i++){
        for ( int j = 0; j < board.size(); j++){
            cout<<board[i][j]<<" ";
        }

        cout<<endl;
    }
    cout<<"...................."<<endl;
}

bool isSafe(vector<vector<char>> board, int row, int col){
    int n = board.size();
    //horizontal check

    for ( int j = 0; j < n; j++){
        if ( board[row][j] == 'Q'){
        return false;
        }
    }


    //vertical check

    for ( int i = 0; i < row ; i++){
        if (board[i][col] == 'Q'){
            return false;
        }
    }


    //diagonally left

    for ( int i = row, j = col; i>=0 && j>=0; i--,j--){
        if ( board[i][j] == 'Q'){
            return false;
        }
    }


    //diagonally right
    for ( int i =row, j = col; i >= 0 && j < n; i--, j++){
        if ( board[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}

void nQueens(vector<vector <char>> board, int row){


    int n = board.size();

    if ( row == n ){
        printBoard(board);
        return;
    }


    for ( int j = 0 ; j < n; j++){

        if ( isSafe(board, row, j)){
        board[row][j] = 'Q';
        nQueens(board, row+1);
        board[row][j] = '.';
    }
    }


}

int main(){


    vector<vector<char>> board;

    int n = 4;

    for ( int i = 0; i < n; i++){
        vector<char> newRow;

        for ( int j = 0; j < n; j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }




    nQueens(board, 0);

    //printBoard(board);




    return 0;
}
