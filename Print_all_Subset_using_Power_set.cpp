#include<bits/stdc++.h>
using namespace std;

// Print All Subset using power set

void helper(vector<int>& arr , int size, int index){

	
    int powerSet = pow(2 , size);


    cout << "{}";

	for(int i = 0; i < powerSet; i++){

		for(int j = 0; j < size; j++){

			if( i & (1 << j)){

				cout << arr[j] << " ";
			}
		}

		cout << endl;
	}
} 


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

   
   vector<int> arr;
   arr.push_back(1);
   arr.push_back(2);
   arr.push_back(3);

   int size = arr.size();

   helper(arr , size ,  0);
  


}