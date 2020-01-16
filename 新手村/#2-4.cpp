#include<iostream>
struct pencil
{
	int amount;//铅笔数 
	int price;//单价 
	int cost;//买这种笔花多少钱 
}type[3];
int main()
{
	
	int AllAmount;//总根数 
	std::cin>>AllAmount;
	for(int i=0;i<3;i++)
	{
		std::cin>>type[i].amount>>type[i].price;
	}
	for(int i=0;i<3;i++)
	{
		if(!(AllAmount%type[i].amount))//除尽 
		{
			type[i].cost=AllAmount/type[i].amount*type[i].price;
		
		}
		else
		{
			type[i].cost=(AllAmount/type[i].amount+1)*type[i].price;
		}
	}
	int MIN=type[0].cost;
	if(MIN>type[1].cost)
	{
		MIN=type[1].cost;
	}
	if(MIN>type[2].cost)
	{
		MIN=type[2].cost;
	}
	std::cout<<MIN;
	return 0;
}
