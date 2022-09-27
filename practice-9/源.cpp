#include<stdio.h>
int main()
{
	int arr1[] = { 1,3,2,5,6,1,4 };
	int a = 0;
	a = sizeof(arr1) / sizeof(arr1[0]);
	//printf("%d", a);
	int b = 0;
	b = a - 1;
	int c = 0;
	while (c<=b)
	{
		for (c = 0; c <= b; c++)
		{
			if (arr1[c] % 2 == 0)
			{
				for ( ; c <= b; b--)
				{
					if(arr1[b]%2==1)
					{ 
					int d = 0;
					d=arr1[c] ;
					arr1[c] = arr1[b];
					arr1[b] = d;
					}
				}
			}
		}
	}
	int i = 0;
	for (i = 0; i < a; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}