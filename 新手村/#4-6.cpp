#include<iostream>
int main()
{
	using namespace std;
	int N;
	cin>>N;
	int temperature[N];
	for(int i=0;i<N;i++)
	{
		cin>>temperature[i];
	}
	int longestlasted=1;
	int MAX=0;
	for(int i=0;i<N-1;i++)
	{
		if(temperature[i]<temperature[i+1])
		{
			longestlasted++;
		}
		else if(temperature[i]>=temperature[i+1])
		{
			longestlasted=1;
		}
		if(MAX<longestlasted)
		{
			MAX=longestlasted;
		}
	}
	cout<<MAX;
}
