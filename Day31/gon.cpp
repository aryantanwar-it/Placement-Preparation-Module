#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n>>x;
  vector<int> v;
  int t;
  for(int i=0;i<n;i++)
    {
      cin>>t;
      v.push_back(t);
    }
  sort(v.begin(),v.end());
  int i=0,j=n-1,c=0;
  while(i<j)
    {
      if((v[i]+v[j])<=x)
	{
	  c++;
	  j--;
	  i++;
	}
      else if(v[j]<=x)
	{
	  c++;
	  j--;
	}
      else{
	j--;
      }
    }
  if(i==j)
    {
      c++;
    }
  cout<<c<<endl;
  return 0;
}
