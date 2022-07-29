#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  vector<int> v;
  vector<int> s;
  int t;
  for(int i=0;i<n;i++)
    {
      cin>>t;
      v.push_back(t);
    }
  for(int i=0;i<m;i++)
    {
      cin>>t;
      s.push_back(t);
    }
  sort(v.begin(),v.end());
  sort(s.begin(),s.end());
  int i=0,j=0,c=0;
  while(i<n&&j<m)
    {
      if(abs(v[i]-s[j])<=k)
	{
	  c++;
	  i++;
	  j++;
	}
      else if(s[j]<v[i])
	{
	  j++;
	}
      else{
	i++;
      }
    }
  cout<<c<<endl;
  return 0;
}
