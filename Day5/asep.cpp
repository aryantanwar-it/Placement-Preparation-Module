#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
  map<char,int> m;
  map<char,int> m1;
  string s,s1;
  cin>>s;
  cin>>s1;
  for(int i=0;i<s.length();i++)
    {
      m[s[i]]++;
    }
  for(int i=0;i<s1.length();i++)
    {
      m1[s1[i]]++;
    }
  for(int i=0;i<s1.length();i++)
    {
      int y=m1[s1[i]]-m[s1[i]];
      if(y>0)
	{
	  cout<<s1[i]<<endl;
	  break;
	}
    }
  return 0;
}
