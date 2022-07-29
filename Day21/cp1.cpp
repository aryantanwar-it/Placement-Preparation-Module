#include<iostream>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      int s,d,t;
      float sg,fg;
      cin>>s>>sg>>fg>>d>>t;
      float f=((d*50*18)/(t*5));
      f+=s;
      //cout<<f<<endl;
      float a=abs(sg-f);
      float b=abs(fg-f);
      if(a<b)
	{
	  cout<<"SEBI"<<endl;
	}
      else if(b<a)
	{
	  cout<<"FATHER"<<endl;
	}
      else{
	cout<<"DRAW"<<endl;
      }
    }
  
  return 0;
}
