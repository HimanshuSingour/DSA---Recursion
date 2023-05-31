#include<bits/stdc++.h>
using namespace std;

// Combbination Sum -> We need to find all combination with sum equal to targest
// pick element as many time you want

void helper(int arr[] , int size , int index , vector<int> & ans , int target){
     
     if(index == size){

     	if(target == 0){

     		for(auto i : ans){
     			cout << i << " ";
     		}

     		cout << endl;
		
     	}

     	return;
     }

     
    if(arr[index] <= target){

        ans.push_back(arr[index]);
        helper(arr , size , index, ans , target - arr[index]);
        ans.pop_back();


    }

   
    // Not pick Up
    helper(arr , size , index + 1 , ans , target);

}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

  
  	int arr[] = {2 , 7 , 6, 5};
  	int size = sizeof(arr) / sizeof(int);
  	vector<int> ans;
  	int index = 0;

  	helper(arr , size , index , ans , 8);


}