#include<iostream>
int main()
{
	double perstep=2,distance,sum=0;
	std::cin>>distance;
	int counter=0;
	while(sum<distance)
	{
		sum+=perstep;
		perstep*=0.98;
		counter++;
	}
	std::cout<<counter;
}
