#include<iostream>
#include<iomanip>
//月用电量在150千瓦时及以下部分按每千瓦时0.4463元执行
//月用电量在151~400千瓦时的部分按每千瓦时0.4663元执行
//月用电量在401千瓦时及以上部分按每千瓦时0.5663元执行
int main()
{
	using namespace std;
	int kwh;
	float cost;
	cin>>kwh;
	if(kwh<=150)
	{
		cout<<fixed<<setprecision(1)<<kwh*0.4463;
	}
	else if(kwh>=151&&kwh<=400)
	{
		cout<<fixed<<setprecision(1)<<150*0.4463+(kwh-150)*0.4663;
	}
	else if(kwh>=401)
	{
		cout<<fixed<<setprecision(1)<<150*0.4463+250*0.4663+(kwh-400)*0.5663;
	}
	return 0;
}
