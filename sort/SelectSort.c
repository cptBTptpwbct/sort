#include<stdio.h>
#include<stdlib.h>

void SelectSort(int arr[],int n)
{
	int i=0,j=0;
	int temp = -1;
	int MinIndex = 0;
	for(i=0;i<n;i++)
	{
		MinIndex = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[MinIndex]>arr[j])
			{
				MinIndex = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[MinIndex];
		arr[MinIndex] = temp;
	}
}
void Print(int arr[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {2,10,34,9,6,89,7};
	int length = sizeof(arr)/sizeof(int);
	Print(arr,length);
	SelectSort(arr,length);
	Print(arr,length);
	system("pause");
	return 0;
}