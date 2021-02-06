#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b) 
{ 
    if(a.second==b.second)
    return a.first>b.first;
    return a.second>b.second;
} 
int main()
{
    int n=9;
    int arr[n]={1,2,1,4,5,6,4,5,5};

    int k=5;

    map<int,int> m;
    int count=0;
    for(int i=0;i<n;i++)
    {
       m[arr[i]]++;
    }
    vector<pair<int,int>> v;
    for(auto itr:m)
    {
        v.push_back({itr.first,itr.second});
    }
    sort(v.begin(),v.end(),comp);

    count=1;
    for(auto itr:v)
    {
        if(count<=k)
        {
        cout<<itr.first<<" ";
        count++;
        }
        else
        break;
    }

}