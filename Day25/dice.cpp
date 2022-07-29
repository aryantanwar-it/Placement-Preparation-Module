#include<iostream>
#include<vector>
using namespace std;
int dice(int v,int n,int i)
{
  if(i>n)
    {
      return 0;
    }
  else if(i==n)
    {
      //cout<<v<<endl;
      return 1;
    }
  else{
    if(v>6 || v<1)
      {
	return 0;
      }
    int y=dice(v,n,i+v)+dice(v+1,n,i)+dice(v-1,n,i+v);
    return y;
  }
}
int main()
{
  int n;
  cin>>n;
  cout<<dice(1,n,0)/2<<endl;
  return 0;
}
