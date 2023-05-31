#include<bits/stdc++.h>
using namespace std;

// Combination Sum -> We need to find all combination with sum equal to targest and no dupliccate combination 
// allowerd

// sort the array

void helper(vector<int> & arr , int index , int size , vector<int> & ans , int target){

   
   // base case
	if(target == 0){

		for(int i: ans){
			cout << i << " ";
		}

		cout << endl;

		return;
	}
   

	for(int i = index; i < size; i++){

        if(i > index && arr[i] == arr[i - 1]) continue;
        if(arr[i] > target) break;


        ans.push_back(arr[i]);
        helper(arr , i + 1 , size , ans , target - arr[i]);
        ans.pop_back(); 
	}
 

}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

   	vector<int> arr;
   	arr.push_back(10);
   	arr.push_back(1);
   	arr.push_back(2);
   	arr.push_back(7);
   	arr.push_back(6);
   	arr.push_back(1);
   	arr.push_back(5);


   	sort(arr.begin() , arr.end());


   	int index = 0;
   	int target = 8;

   	vector<int> ans;


   	helper(arr ,index , arr.size() , ans , target);



  

}