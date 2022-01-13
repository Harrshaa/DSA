#include<bits/stdc++.h>
using namespace std;

void Subsequences(int index,vector<int>&arr,vector<int>&ds,int n)
{
    if(index==n)
    {
        for(auto it: ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }                                                        

    ds.push_back(arr[index]);
    Subsequences(index+1,arr,ds,n);
    ds.pop_back();


    Subsequences(index+1,arr,ds,n);
}

int main()
{
    vector<int>v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    vector<int>ds;
    int n=3;
    Subsequences(0,v,ds,n);
    return 0;
}