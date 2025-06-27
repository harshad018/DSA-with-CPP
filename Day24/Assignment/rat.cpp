#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

void printAns(vector<char> ans){
    for ( int i = 0; i < ans.size(); i++){
        cout<<ans[i];
    }
    cout<<endl;
}

void ways(vector<vector<int>> maze, int r, int c, int n , int m,vector<char> ans, vector<vector<bool>>visited){


    if ( r == n-1 && c == m-1){
        printAns(ans); // Print the path when destination is reached
        return; // Stop exploring further from this path
    }

    if ( r >= n || c >= m || r < 0 || c < 0 || maze[r][c] == 0 || visited[r][c]){
        return; //base case for limit of rows and columns and blocked path and visited cell
    }

    visited[r][c] = true; // Mark current cell as visited

    //up
    if ( r-1 >= 0 && maze[r-1][c] != 0){
        ans.push_back('U');
       ways(maze,r-1,c,n,m,ans, visited);
       ans.pop_back(); // Backtrack: remove 'U' after exploring path
    }

    //Down
    if ( r+1 < n && maze[r+1][c] != 0){
        ans.push_back('D');
         ways(maze,r+1,c,n,m,ans, visited);
         ans.pop_back(); // Backtrack: remove 'D' after exploring path
    }

    //right
    if ( c+1 < m && maze[r][c+1] != 0 ){
        ans.push_back('R');
        ways(maze,r,c+1,n,m,ans, visited);
        ans.pop_back(); // Backtrack: remove 'R' after exploring path
    }


    //left
    if ( c-1 >= 0 && maze[r][c-1] != 0 ){
        ans.push_back('L');
        ways(maze,r,c-1,n,m,ans, visited);
        ans.pop_back(); // Backtrack: remove 'L' after exploring path
    }

    visited[r][c] = false; // Backtrack: unmark cell as visited after exploring all paths from it
    return;
}



int main(){
    int n = 4;
    int m = 4;
    vector<char> ans = {};
    vector<vector<int>> maze = { { 1, 0, 0, 0 },
                                { 1, 1, 0, 1 },
                                { 1, 1, 0, 0 },
                                { 0, 1, 1, 1 }
                            };

    vector<vector<bool>> visited(n, vector<bool>(m, false)); // Initialize visited matrix

    ways(maze,0,0,n,m,ans, visited); // Call ways function to print paths

    return 0;
}
