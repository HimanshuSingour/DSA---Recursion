#include<bits/stdc++.h>
using namespace std;

void solve(int n , vector<string> & board , int col , vector<int> & leftRow  , vector<int> & upperDiagonal , 
	                                                                                     vector<int> & lowerDiagonal){


if(col >= n){

	for(auto i : board){
		cout << i << endl;
	}

	return;
}



for(int row = 0; row < n; row++){

  if(leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0){

  	   board[row][col] = 'Q';
  	   leftRow[row] = 1;
  	   lowerDiagonal[row + col] = 1;
  	   upperDiagonal[n - 1 + col - row] = 1;

  	   solve(n , board , col + 1, leftRow , upperDiagonal , lowerDiagonal);
  	   
  	   board[row][col] = 'E';
  	   leftRow[row] = 0;
  	   lowerDiagonal[row + col] = 0;
  	   upperDiagonal[n - 1 + col - row] = 0;

  }

}

}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif
 


 int n;   
 cin >> n;

 // making of n x n borad
 vector<string> board(n);
 string s(n , 'E');

 for(int i = 0; i < board.size(); i++){
 	board[i] = s;
 }

 vector<int> leftRow(n , 0);
 vector<int> upperDiagonal(2 * n - 1 , 0);
 vector<int> lowerDiagonal(2 * n - 1 , 0);

  

 solve(n , board , 0 , leftRow , upperDiagonal , lowerDiagonal);



}