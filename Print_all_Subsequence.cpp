#include<bits/stdc++.h>
using namespace std;

// subsequence : Contigous or Non- Contigous Element
// Print All Subsequene

void helper(int arr[] , int size , int index , vector<int> & ans){

   if(index >= size){

   	   for(int i : ans){
   	   	   cout << i << " "; 
   	   }

   	   cout << endl;
   	   return;
   }

   //pick element
   ans.push_back(arr[index]);
   helper(arr , size , index + 1 , ans);
   ans.pop_back();

   // Not pick
   helper(arr , size , index + 1 , ans);

}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
  	#endif
   
   int arr[] = {3 , 1 , 2};
   int size = sizeof( arr ) / sizeof( int );

   int index = 0;

   vector<int > ans;

   helper(arr , size , index , ans);


}