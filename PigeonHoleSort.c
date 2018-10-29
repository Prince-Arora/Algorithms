#include<stdio.h>
int main()
{
	int arr[]={8, 3, 2, 7, 4, 6, 8}; 
	int n=7;
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	int range=max-min+1;
	int pigeonhole[range];
	pigeonhole[0]=0;
	for(int i=0;i<range;i++)
	{
		pigeonhole[arr[i]-min]++;
	}
	int index=0;
	for(int i=0;i<n;i++)
	{
		while(pigeonhole[i]--  > 0)
		{
			arr[index++]=i+min;
		}
	}
	for(int i =0;i<n;i++)
	printf("%d  ",arr[i]);
}