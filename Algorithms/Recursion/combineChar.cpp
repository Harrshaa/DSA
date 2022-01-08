//n Length Combinations
//Shouldn't be two consecutive c2 
//Empty String _(x | y)
//x_(x | y),y(only x)...
#include<bits/stdc++.h>
using namespace std;

void combine(string s,char c1,char c2,int n)
{
    if(n==0)
    {
        cout<<s<<endl;    //Base Condition here, I want to stop Recursion//
    }
    else
    {
        if(s=="")
        {
            combine(s+c1,c1,c2,n-1);
            combine(s+c2,c1,c2,n-1);

        }
        else
        {
        if(s[s.size()-1]==c2)
        {
            combine(s+c1,c1,c2,n-1);
        }
        else
        {
            combine(s+c1,c1,c2,n-1);
            combine(s+c2,c1,c2,n-1);
        }
        }
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c1,c2;
        int n;
        cin>>c1>>c2>>n;
        string s="";
        combine(s,c1,c2,n);      
        
    }
    return 0;

}