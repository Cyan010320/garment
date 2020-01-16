#include<iostream>
int main()
{
	int n,digit[10],whichnum;
	std::cin>>n>>whichnum;
	for(int i=0;i<10;i++)
	{
		digit[i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		int temp=i;
		while(temp/10||temp%10)
		{
			digit[temp%10]++;
			temp=(temp-temp%10)/10;
		}
	}
	std::cout<<digit[whichnum];
	return 0;
}
