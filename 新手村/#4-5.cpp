#include<iostream>
using namespace std;
int main()
{
	int n;//数的个数 
	cin>>n;
	int set[n];
	for(int i=0;i<n;i++)
		cin>>set[i];
	int MAX=set[0];
	for(int i=0;i<n;i++)
	{
		if(MAX<set[i])
			MAX=set[i];
	}	
	int state[MAX];
	for(int i=0;i<MAX;i++)
		state[i]=0;
	for(int a=0;a<n;a++)
		for(int i=1;i<n;i++)
			for(int j=0;j<i;j++)
				if(set[a]==set[i]+set[j])
					state[set[a]-1]++;
	int counter=0;
	for(int i=0;i<MAX;i++)
		if(state[i])
			counter++;
	cout<<counter;
	return 0;
}
