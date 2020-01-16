#include<iostream>
void print(int a[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			std::cout<<a[i][j];
		}
		std::cout<<" ";
	}
	std::cout<<std::endl;
}
int main()
{
	int a[3][3];
	for(int n=192;n<333;n++)
	{
		int sum=0,product=1;
		a[0][0]=n/100;a[1][0]=2*n/100;a[2][0]=3*n/100;
		a[0][1]=n%100/10;a[1][1]=2*n%100/10;a[2][1]=3*n%100/10;
		a[0][2]=n%10;a[1][2]=2*n%10;a[2][2]=3*n%10;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				sum+=a[i][j];
				product*=a[i][j];
				if(sum==45&&product==362880)
				{
				//std::cout<<"yes";
					print(a);
				}
			}
		}
	}
	return 0;
}
