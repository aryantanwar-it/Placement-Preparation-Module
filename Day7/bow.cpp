#include<iostream>
#include<vector>
using namespace std;
int lastModified(int input1,int input2[])
{
  int i;
  for(i=input1-1;i>=0;i--)
    {
      if(input2[i]!=9)
	break;
    }
  return i+1;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
  cout<<lastModified(n,a)<<endl;;
  return 0;
}
