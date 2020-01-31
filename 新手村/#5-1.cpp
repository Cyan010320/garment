#include<iostream>
#include<cstring>
int main()
{
	std::string ISBN;
	std::cin>>ISBN;
	int sum=0,multiplier=1;
	for(int i=0;i<12;i++)
	{
		if(ISBN[i]>='0'&&ISBN[i]<='9')
		{
			sum+=multiplier*(ISBN[i]-'0');
			multiplier++;
		}
	}
	//std::cout<<sum;
	if(sum%11+'0'==ISBN[12]||(ISBN[12]=='X')&&sum%11==10)
	{
		std::cout<<"Right";
	}
	else
	{
		for(int i=0;i<12;i++)
		{
			std::cout<<ISBN[i];
		}
		if(sum%11==10)
			std::cout<<"X";
		else
			std::cout<<sum%11;
	}
	return 0;
	
 } 
