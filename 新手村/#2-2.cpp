#include<iostream>
int main()
{
	int MAX=0,counter=0;
	struct day{
		int hour_one;
		int hour_two;
		int sum;
	};
	day week[7];
	for(int i=1;i<=7;i++)
	{
		std::cin>>week[i].hour_one>>week[i].hour_two;
		week[i].sum=week[i].hour_one+week[i].hour_two;
		if(week[i].sum>=8)
		{
			counter++;
		}
		if(MAX<week[i].sum)
		{
			MAX=week[i].sum;
		}
	}
	if(counter==0)
	{
		std::cout<<"0";
		return 0;
	}
	for(int i=1;i<=7;i++)
	{
		if(week[i].sum==MAX)
		{
			std::cout<<i;
			return 0;
		}
	}
	return 0;
}
