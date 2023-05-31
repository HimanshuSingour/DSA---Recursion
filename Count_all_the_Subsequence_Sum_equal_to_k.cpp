#include<bits/stdc++.h>
using namespace std;

// subsequence : Contigous or Non- Contigous Element
// Print All Subsequene with sum equal to K

int helper(int arr[] , int size , int index , vector<int> & ans , int sum , int s){

   if(index >= size){

   	if(s == sum) return 1;
   	else return 0;

   }

   //pick element
   ans.push_back(arr[index]);
   s += arr[index];
   int a = helper(arr , size , index + 1 , ans , sum , s);
   ans.pop_back();
   s -= arr[index];

   // Not pick
   int b = helper(arr , size , index + 1 , ans , sum , s);
   

   return a + b;
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

   cout << helper(arr , size , index , ans , sum , s);


}