#include<bits/stdc++.h>
using namespace std;

// Print All Subset

void helper( vector<int>& arr , int size , vector<int> & ans , int index){

	if(index == size){
		for(auto i : ans){
			cout << i << " ";
		}

		cout << endl;

		return;
	}

   //pick Up
   ans.push_back(arr[index]);
   helper(arr , size , ans , index + 1);

   ans.pop_back();

  // No Pick up
   
   helper(arr , size , ans , index + 1);
 

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

 

   vector<int> ans;



   helper(arr , arr.size() , ans , 0);
 

   



  

}