#include<bits/stdc++.h>
using namespace std;

// subsequence : Contigous or Non- Contigous Element
// Print All Subsequene with sum equal to K

void helper(int arr[] , int size , int index , vector<int> & ans , int sum , int s){

   if(index >= size){

   	if(s == sum){

   	   	for(int i : ans){
   	   	    cout << i << " "; 
   	    }

   	    cout << endl;
   	 }

   	 return;
   }

   //pick element
   ans.push_back(arr[index]);
   s += arr[index];
   helper(arr , size , index + 1 , ans , sum , s);
   ans.pop_back();
   s -= arr[index];

   // Not pick
   helper(arr , size , index + 1 , ans , sum , s);

}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
  	#endif
   
   int arr[] = {1 , 2 , 3};
   int size = sizeof( arr ) / sizeof( int );

   int index = 0;
   int sum = 5;
   int s = 0;

   vector<int > ans;

   helper(arr , size , index , ans , sum , s);


}