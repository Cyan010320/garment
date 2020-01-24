#include<iostream>
int main()
{
	int n;
	std::cin>>n;
	int fish[n];
	for(int i=0;i<n;i++)
	{
		std::cin>>fish[i];
	}
	std::cout<<"0 ";
	for(int i=1;i<n;i++)
	{
		int counter=0;
		for(int j=0;j<i;j++)
		{
			if(fish[i]>fish[j])
			counter++;
		}
		std::cout<<counter<<" "; 
	}
}
