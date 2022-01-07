#include<iostream>
using namespace std;
#include <unordered_map>                                
#include<vector>
#include<bits/stdc++.h>
                                                    
// Brute Force Technique
// for i=0 to i=n-1
// for j=i+1 to j=n-1
// if target == nums[i]+nums[j] 

// Method - 2 // Hash Map //
// First we store/fill in hash map.
//2   0
//7   1
//11  2
//15  3
class solution {

    public:       
       vector<int>twoSum(vector<int>&nums,int target){      //Function Returning a Vector//
           vector<int> ret;
           int size=nums.size();
           int diff;
           unordered_map<int,int>m;
           for(int i=0;i<size;i++){
               diff =target-nums[i];
               if(m.find(diff)!= m.end() && m.find(diff)->second!= i){    // we are seraching for required element and second condition is for condition given question//
                   ret.push_back(i);                     //here, we are returning index of picked element//
                   ret.push_back(m.find(diff)->second); //here, we re returning index of element present in map //
                   return ret;
               }
               m[nums[i]]=i;
           }
           return ret;    
}
};


int main(){
    cout<<"Enter Array Elements"<<endl;
    vector<int> v;
    int x;
    for(int i=0;i<3;i++){
        cin>>x;
        v.push_back(x);
    }        
    vector<int> result;             
    solution sol;
    result=sol.twoSum(v,6);
    for(int i=0; i<result.size(); i++){
       cout<<result[i];
    }
    return 0;
}

