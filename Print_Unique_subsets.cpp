#include<bits/stdc++.h>
using namespace std;

// Print All Subset which doess bot having any duplicate

void helper(vector<int> & arr , vector<int> & ans , int index){

   for(auto i : ans){
     	cout << i << " ";
    }

     cout << endl;

 
  
  for(int i = index; i < arr.size(); i++){

  	 if(arr[i] == arr[i - 1] && i != index) continue;
     
     ans.push_back(arr[i]);
  	 helper(arr , ans , i + 1);
  	 ans.pop_back();
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
   arr.push_back(2);
 

   int index = 0;

   sort(arr.begin() , arr.end());

   vector<int> ans;

   helper(arr , ans , index);


  


}