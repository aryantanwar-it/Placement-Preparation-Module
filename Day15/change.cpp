#include<iostream>
#include<vector>
using namespace std;
int func(vector<int>& v,int m,int n,int s,int i)
{
  if(s>n)
    {
      return 0;
    }
  if(n==s)
    {
      //cout<<v[i]<<endl;
      return 1;
    }
  if(i==m)
    {
      return 0;
    }
  return func(v,m,n,s+v[i],i)+func(v,m,n,s,i+1);
}
int main()
{
  int n;
  cin>>n;
  int m,k;
  cin>>m;
  vector<int> v;
  for(int i=0;i<m;i++)
    {
      cin>>k;
      v.push_back(k);
    }
  int h=func(v,m,n,0,0);
  cout<<h<<endl;
  return 0;
}
