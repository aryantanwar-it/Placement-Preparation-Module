#include<iostream>
#include<cmath>
using namespace std;
int func(int n)
{
  int i=0;
  while(1)
    {
      if(n<=pow(2,i))
	{
	  break;
	}
      i++;
    }
  return i+4;
}
int main()
{
  int n;
  cin>>n;
  cout<<func(n)<<endl;
  return 0;
}
