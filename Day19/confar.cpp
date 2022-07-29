#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> v;
  vector<int> k;
  long long int s=(n*(n+1))/2;
  if(s&1)
    {
      cout<<"NO"<<endl;
    }
  else{
    cout<<"YES"<<endl;
    v.push_back(n);
    for(int i=n-1;i>0;i-=2)
      {
	if(v.size()>k.size())
	  {
	    if(i==1)
	      {
		k.push_back(i);
	      }
	    else{
	      k.push_back(i);
	      k.push_back(i-1);
	    }
	  }
	else{
	  if(i==1)
	    {
	      v.push_back(i);
	    }
	  else{
	    v.push_back(i);
	    v.push_back(i-1);
	  }
	}
      }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
      {
	cout<<v[i]<<" ";
      }
    cout<<endl;
    cout<<k.size()<<endl;
    for(int i=0;i<k.size();i++)
      {
	cout<<k[i]<<" ";
      }
  }
  return 0;
}
