#include<bits/stdc++.h>
using namespace std;

// Print All Subset using power set

void helper(vector<int>& arr , int index , int sum){
   

   //Base case 
	if(index >= arr.size()){

		cout << sum <<endl;
		return;
	}

	
    // pick
	helper(arr , index + 1 , sum + arr[index]);
	sum -+ arr[index];
    
	
	// not pick
	helper(arr , index + 1 , sum);
    
	
   
} 


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

   
   vector<int> arr;
   arr.push_back(5);
   arr.push_back(2);
   arr.push_back(1);


   helper(arr ,  0 , 0);


  


}