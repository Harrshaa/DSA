#include<bits/stdc++.h>
using namespace std;



vector<vector<int>>ans;
class Solution {
public:
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
vector<vector<int>>ans;
vector<int>ds;
findCombinations(0,target,candidates,ans,ds);
return ans;    
}

//Base Case if index==arr.size() return//
void findCombinations(int index,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>& ds){

if(index==arr.size())
{
if(target==0){
ans.push_back(ds);
}
return;
}
//Pick up the element//
if(arr[index]<=target)
{
ds.push_back(arr[index]);
findCombinations(index,target-arr[index],arr,ans,ds); //Repetitions are allowed, otherwise index+1//
ds.pop_back();
findCombinations(index+1,target,arr,ans,ds);
}
// findCombinations(index+1,target,arr,ans,ds);
}   


};
int main()
{
    vector<int>candidates;
    candidates.push_back(2);
    candidates.push_back(3);
    candidates.push_back(6);
    candidates.push_back(7);
    int target=7;
    Solution sol;    
    vector<vector<int>>myVec=sol.combinationSum(candidates,target);
    for (int i = 0; i < myVec.size(); i++) {
    for (int j = 0; j < myVec[i].size(); j++)
        cout << myVec[i][j] <<" ";
        cout << " ";
    }  
    return 0;
}