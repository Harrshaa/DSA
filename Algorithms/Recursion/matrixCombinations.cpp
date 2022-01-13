#include <bits/stdc++.h>
  using namespace std;
  
  void combination(string s,vector<vector<char>>arr,int m,int n,int k)
  {
    if(m==0){
      cout<<s<<" ";
    }
    else{
      if(s==""){
        for(int j=0;j<n;j++)
        {
        combination(s+arr[0][j],arr,m,n,k-1);
        combination(s+arr[0][j],arr,m,n,k-1);
        }
      }
      else
      {
        
        for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
        {
        if(s[s.size()-1]==arr[i][j]||s[s.size()-1]==arr[i][j]){
          combination(s+arr[i][j],arr,m,n,k-2);
          combination(s+arr[i][j],arr,m,n,k-2);
        }
        
        }
        }
        
      }
    
   
    
  }
  }
  
  int main()
  {
    //write your code here
    int m,n;
    cin>>m>>n;
    // char arr[m][n];
    vector<vector<char>>arr;
    string s="";    
    int k=m;
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>arr[i][j];
      }
    }
    
    combination(s,arr,m,n,k);
    return 0;
  }