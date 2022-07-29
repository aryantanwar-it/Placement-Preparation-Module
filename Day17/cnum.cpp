#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,t,m;
  cin>>n>>m;
  int a[n],b[n];
  //vector<int> v;
  for(int i=1;i<=n;i++)
    {
      cin>>t;
      b[i]=t;
      a[t]=i;
    }
  int c[m][2];
  for(int i=0;i<m;i++)
    {
      cin>>c[i][0]>>c[i][1];
    }
  int c1=1;
  for(int i=2;i<=n;i++)
    {
      //cout<<a[i-1]<<" "<<a[i]<<endl;
      if(a[i-1]>a[i])
	c1++;
    }
  for(int i=0;i<m;i++)
    {
      int k=b[c[i][0]],j=b[c[i][1]];
      if(k!=1)
	{
	  if(a[k-1]>a[k])
	    {
	      cout<<a[k]<<" "<<a[k-1]<<" "<<c[i][1]<<endl;
	      a[k]=c[i][1];
	      if(a[k-1]<a[k])
		{
		  c1--;
		}
	    }
	  else{
	    cout<<a[k]<<" "<<a[k-1]<<" "<<c[i][1]<<endl;
	    a[k]=c[i][1];
	    if(a[k-1]>a[k])
	      {
		c1++;
	      }
	  }
	}
      cout<<c1<<endl;
    }
  return 0;
}
