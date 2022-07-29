#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
  int t,n,k;
  cin>>n>>k;
  vector<int> v;
  for(int i=0;i<n;i++)
    {
      cin>>t;
      v.push_back(t);
    }
  set<int> s;
  map<int,int> m;
  long long int c=0;
  int i=0,j=0;
  while(i<n&&j<n)
    {
      s.insert(v[j]);
      m[v[j]]++;
      j++;
      while(s.size()>k)
	{
	  m[v[i]]--;
	  if(m[v[i]]==0)
	    {
	      s.erase(s.find(v[i]));
	    }
	  i++;
	}
      if(i<j)
	{
	  c+=(j-i);
	}
      //cout<<i<<" "<<j<<endl;
    }
  cout<<c<<endl;
  return 0;
}
