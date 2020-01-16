#include<iostream>
int main()
{
	int n=0,k;
	double sum=0;
	std::cin>>k;
	for(int i=1;sum<=k;i++)
	{
		sum+=(float)1/i;
		if(sum>k)
		{
			std::cout<<i;
		}
	} 
	return 0;
}
