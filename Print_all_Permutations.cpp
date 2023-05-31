#include<bits/stdc++.h>
using namespace std;


void helper(vector<int> & arr , vector<int> & ans , int n , vector<int> & fq , int index){


	if(index >= n){

		for(auto i : ans){
			cout << i << " ";
		}

		cout << endl;
		return;
	}


   // ittration throw visited array
    for(int i = 0; i < n; i++){

    	if(fq[i] == 0){
            
            ans.push_back(arr[i]);
            fq[i] = 1;
    		helper(arr , ans , n , fq , index + 1);
    		
            fq[i] = 0;
    		ans.pop_back();
    	
    	}
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
   arr.push_back(3);

   vector<int> ans;

   int n = arr.size();

   vector<int> fq(n , 0);
   int index = 0;


   helper(arr , ans , n , fq , index);

 

  


}