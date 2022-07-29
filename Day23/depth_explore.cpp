#include<iostream>
using namespace std;
int visited[20];
struct node{
	int val;
	node* next;
};
struct graph{
	node* curr;
	graph* next;
};
void dfs(int a[20][20],int m,int n)
{
	visited[n]=1;
	int i=0;
	while(i<m)
	{
		if(a[n][i])
		{
			if(!visited[i])
			{	
				dfs(a,m,i);
			}
		}
		i++;
	}
}
int main()
{
	int a[20][20];
	int m,n,i,j,b,c;
	cin>>n>>m;
	i=0;
	while(i<n)
	{
		j=0;
		while(j<m)
		{
			cin>>a[i][j];
			j++;
		}
		i++;
	}
	dfs(a,m,0);
	i=0;
	while(i<20)
	{
		cout<<visited[i]<<endl;
		i++;
	}
	
}
