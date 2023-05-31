#include<bits/stdc++.h>
using namespace std;


bool isSafe(vector<vector<int>> &grid , int row , int col , int num){
  
  for(int i = 0; i < 9; i++){

  	 if(grid[i][col] == num){
  	 	   return false;

  	 }

  	if(grid[row][i] == num){
  	 	return false;
  	 }

  	 if(grid[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num){

  	 	return false;
  	 }

  }

  return true;

}


bool solveSudoko(vector<vector<int>> &grid) {

	for(int i = 0; i < grid.size(); i++){
		for(int j = 0; j < grid[0].size(); j++){

			if(grid[i][j] == 0){

				 for(int num = 1; num <= 9; num++){ 

				 	  if(isSafe(grid , i , j , num)){ // row + col + (3 x 3 box) having no element 1 to 9
				 	  	 grid[i][j] = num;

				 	  	 if(solveSudoko(grid)){
				 	  	 	  return true;
				 	  	 }

				 	  	 else{

				 	  	 	grid[i][j] = 0;
				 	  	 }

				 	  }
				 }

				 return false;
			}
		}

	}

	return true;
}

void solve(vector<vector<int>> &grid){


	solveSudoko(grid);	

}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif
 



 vector<vector<int>> grid   = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                                { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                                { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                                { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                                { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                                { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                                { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                                { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                                { 0, 0, 5, 2, 0, 6, 3, 0, 0 }  };

  


for(int i = 0; i < grid.size(); i++){
	for(int j = 0; j < grid[0].size(); j++){
            cout << grid[i][j] << " ";
	}

	cout << endl;
}
 

solve(grid);

cout << endl;


for(int i = 0; i < grid.size(); i++){
	for(int j = 0; j < grid[0].size(); j++){
            cout << grid[i][j] << " ";
	}

	cout << endl;
}





}