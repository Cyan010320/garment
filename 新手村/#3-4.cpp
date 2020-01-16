#include<iostream>
int main()
{
	int x,n;
	std::cin>>x>>n;
	int ValidDay=0;
	for(int i=0;i<n;i++)//第几天 
	{
		if(x<=6)
		{
			if(x<=5)
				ValidDay++;
			x++;
		}
		
		else if(x==7)
		{
			x=1;
		}
	}
	std::cout<<ValidDay*250;
	return 0;
}
