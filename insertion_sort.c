#include<stdio.h>
int main()
{
	int a[20] = {};
	int n = 0;

	printf("enter no of elements : ");
	scanf("%d", &n);
	
	printf("Enter the elements : ");
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("The original array is :");
	for(int i = 0 ; i < n ; i++)
	{
		printf("\t%d", a[i]);
	}
	printf("\n");
	for(int i = 1 ; i < n ; i++)
	{
		int temp = a[i];
		int j = i - 1;
		
		while(j >= 0 && a[j] > temp)
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = temp;
	}
	
	printf("The sorted array is :");
	for(int i = 0 ; i < n ; i++)
	{
		printf("\t%d", a[i]);
	}
	printf("\n");
	
	return 0;
}
