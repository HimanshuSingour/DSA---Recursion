#include<bits/stdc++.h>
using namespace std;

// subsequence : Contigous or Non- Contigous Element
// Print All Subsequene with sum equal to K

int helper(int arr[] , int size , int index , vector<int> & ans){

   // base case
   if(index >= size)  return 1;


   //pick element
   ans.push_back(arr[index]);
   int a = helper(arr , size , index + 1 , ans);
   ans.pop_back();
 

   // Not pick
   int b = helper(arr , size , index + 1 , ans);
   

   return a + b;
}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
  	#endif
   
   int arr[] = {1 , 2};
   int size = sizeof( arr ) / sizeof( int );

   int index = 0;

   vector<int > ans;

   cout << helper(arr , size , index , ans);


}