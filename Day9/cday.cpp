#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<int> v(n,1);
  for(int i=0;i<n;i++)
    {
      if(s[i]=='L')
	{
	  v[i]=v[i+1]+1;
	}
      else if(s[i]=='R')
	{
	  v[i+1]=v[i]+1;
	}
      else if(s[i]=='='){
	v[i+1]=v[i];
	if(i+1!=n && s[i+1]=='L')
	  {
	    v[i+1]=v[i+2]+1;
	    v[i]=v[i+1];
	    i++;
	  }
      }
    }
  for(int i=0;i<n;i++)
    {
      cout<<v[i]<<" ";
    }
  return 0;
}
