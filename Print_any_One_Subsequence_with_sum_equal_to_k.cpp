#include<bits/stdc++.h>
using namespace std;

// subsequence : Contigous or Non- Contigous Element
// Print All Subsequene with sum equal to K

bool helper(int arr[] , int size , int index , vector<int> & ans , int sum , int s){

   if(index >= size){

   	if(s == sum){

   		for(auto i : ans){
   			cout << i << " ";
   		}

   	   return true;
   	    
   	 }

   	 return false;
   }

   //pick element
   ans.push_back(arr[index]);
   s += arr[index];
   if(helper(arr , size , index + 1 , ans , sum , s) == true) return true;
   ans.pop_back();
   s -= arr[index];

   // Not pick
   if(helper(arr , size , index + 1 , ans , sum , s) == true) return true;

   return false;

}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
  	#endif
   
   int arr[] = {1 , 2 , 3 , 5};
   int size = sizeof( arr ) / sizeof( int );

   int index = 0;
   int sum = 5;
   int s = 0;

   vector<int > ans;

  helper(arr , size , index , ans , sum , s);


}