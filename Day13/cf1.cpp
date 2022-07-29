#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      int n,z;
      cin>>n>>z;
      vector<int> v;
      int t;
      for(int i=0;i<n;i++)
	{
	  cin>>t;
	  v.push_back(t);
	}
      cout<<(*max_element(v.begin(),v.end())|z)<<endl;
    }
  return 0;
}
