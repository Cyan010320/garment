#include<iostream>
int main()
{
	long long a[100];
	int counter;
	for(int i=0;;i++)
	{
		std::cin>>a[i];
		if(!a[i])
			{
				counter=i-1;
				break;
			}
	}
	for(;counter>=0;counter--)
	{
		std::cout<<a[counter]<<" ";
	}
	return 0;
 } 
