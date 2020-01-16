#include<iostream>

int main()
{
	int hour=0,prehour,premin,posthour,postmin,delta_min;
	std::cin>>prehour>>premin>>posthour>>postmin;
	delta_min=posthour*60+postmin-prehour*60-premin;
	for(;delta_min>=60;)
	{
		delta_min-=60;
		hour++;
	}
	std::cout<<hour<<" "<<delta_min;
	return 0;
}
