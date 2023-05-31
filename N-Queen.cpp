#include<bits/stdc++.h>
using namespace std;


bool isSafte(int row , int col , int n , vector<string> & board){
     
     int temRow = row;
     int tempCol = col;
     
    // upper diagonal

     while(row >= 0 && col >= 0){

     	if(board[row][col] == 'Q') return false;
     	row--;
     	col--;
     }

     row = temRow;
     col = tempCol;

    // center

     while(col >= 0){

     	if(board[row][col] == 'Q') return false;
     	col--;
     }

     row = temRow;
     col = tempCol;


    // lower diagonal

     while(row < n && col >= 0){

     	if(board[row][col] == 'Q') return false;
     	row++;
     	col--;
     }

     return true;

}


void solve(int n , vector<string> & board , int col){
   
   if(col >= n){

   	for(auto i : board){
   		cout << i << endl;
   	}

   	cout << endl;

   	return;

   }


   for(int row = 0; row < n; row++){

   	  if(isSafte(row , col , n , board)){
         
         board[row][col] = 'Q';
         solve(n , board , col + 1);
         board[row][col] = 'E';

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
  

 solve(n , board , 0);



}