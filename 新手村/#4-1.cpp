#include<stdio.h>
int main()
{
	int height[10];
	int highest;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&height[i]);
	}
	scanf("%d",&highest);
	int counter=0;
	for(int i=0;i<10;i++)
	{
		if(height[i]<=highest+30)
		{
			counter++;
		}
	}
	printf("%d",counter);
	return 0;
}
