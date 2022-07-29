#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int h,k;
  cin>>h;
  vector<int> v;
  for(int i=0;i<n;i++)
    {
      cin>>k;
      v.push_back(k);
    }
  long long int s=0;
  for(int i=0;i<n;i++)
    {
      s+=v[i];
    }
  //cout<<s<<endl;
  cout<<(s/h)+1<<endl;
  return 0;
}
