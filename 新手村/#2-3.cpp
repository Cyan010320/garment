#include<iostream>
#define money_per_month 300
int main()
{
	int LeftMoney=0;
	int deposit=0;
	int month[12];
	for(int i=0;i<12;i++)
	{
		std::cin>>month[i];
	}
	for(int i=0;i<12;i++)
	{
		LeftMoney+=money_per_month;
		if(LeftMoney<month[i])
		{
			std::cout<<"-"<<i+1;
			return 0;
		}
		LeftMoney-=month[i];
		deposit+=LeftMoney/100*100;
		LeftMoney%=100;
	}
	std::cout<<1.2*deposit+LeftMoney;
	return 0;
}
