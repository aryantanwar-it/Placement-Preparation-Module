#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
void dfs(vector<int> v[],vector<bool> &s,int n,int j)
{
      if(!s[j])
	{
	  s[j]=true;
	  cout<<j<<" ";
	  for(int x=0;x<v[j].size();x++)
	    {
	      dfs(v,s,n,v[j][x]);
	    }
	}
}
int mst(vector<int> v[],vector<bool> &s,priority_queue<pair<int,pair<int,int>>> q,int j)
{
  
  for(int i=0;i<v[j].size();i++)
    {
      q.push({v[j][i],{j,i}});
    }
  int y=q.top.first;
  s[q.top.second.first]=true;
  s[q.top.second.second]=true;
  q.pop();
  return y + mst(v,s,q,);
}
void bfs(vector<int> v[],vector<bool> &s,int n,int j)
{
  if(!s[j])
    {
      s[j]=true;
      cout<<j<<" ";
      for(int i=0;i<v[j].size();i++)
	{
	  cout<<v[j][i]<<" ";
	}
      
    }
}
int main()
{
  int n,m,k,l;
  cin>>n;
  cin>>m;
  vector<int> v[n+1];
  for(int i=0;i<m;i++)
    {
      cin>>k>>l;
      v[k].push_back(l);
      v[l].push_back(k);
    }
  vector<bool> s(n,false);
  dfs(v,s,n,1);
  cout<<endl;
  return 0;
}
