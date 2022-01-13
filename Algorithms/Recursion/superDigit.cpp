#include<bits/stdc++.h>
using namespace std;

int recursiveSum(int num)
{
    if(num>=0 && num<=9){
        return num;
    }
    else{
        int sum=0;
        while(num>0)
        {
        sum=sum+num%10;        
        num=num/10;
        }
        return recursiveSum(sum); 
    }
}

int superDigit(string s,int k)
{
    //Extract Digits from strings
    int num=0;
    for(int i=0;i<s.size();i++)
    {
        num=num+(s[i]-48);
    }
    
    num=num*k;
    cout<<num<<endl;
    return recursiveSum(num);
    
}

int main()
{
    string s="";
    cin>>s;
    int k;
    cin>>k;
    cout<<"final :"<<superDigit(s,k);
    return 0;
}