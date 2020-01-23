#include<iostream>
using namespace std;
int main()
{
	int length,num_of_area;
	cin>>length>>num_of_area;
	int state[length+1];
	int start[num_of_area],end[num_of_area];
	for(int i=0;i<num_of_area;i++)
		cin>>start[i]>>end[i];
	for(int i=0;i<length+1;i++)
		state[i]=0;
	//对区间中每个数循环
	for(int a=0;a<num_of_area;a++)//第a组起始/结束 
	{
		for(int i=start[a];i<=end[a];i++ )
			state[i]++;
	 } 
	int counter=0;
	for(int i=0;i<length+1;i++)
	{
		if(!state[i])
			counter++;
	}
	cout<<counter;
	return 0;
 } 
