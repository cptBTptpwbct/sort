#include<stdio.h>
#include<stdlib.h>
void Update(int arr[],int length,int index)
{
	int lChild;
	int rChile;
	int i;
	int temp;
	int maxindex;
	for(i=index;i<=length/2-1;)
	{
		lChild = 2*i+1;
		rChile = 2*i+2;
		maxindex = 0;
		if(lChild<=length)
		{
			maxindex = lChild;
		}
		else
		{
			break;
		}
		if(rChile<=length)
		{
			if(arr[lChild]<arr[rChile])
			{
				maxindex = rChile;
			}
		}
		if(arr[i]<arr[maxindex])
		{
			temp = arr[i];
			arr[i] = arr[maxindex];
			arr[maxindex]=temp;
			i = maxindex;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int arr[],int length)
{
	int i;
	int temp;
	int n = length;
	//Ω®∂—
	for(i=length/2-1;i>=0;i--)
	{
		Update(arr,length,i);
	}
	//≈≈–Ú
	for(i=0;i<=length;i++)
	{
		temp = arr[0];
		arr[0] = arr[n];
		arr[n]=temp;
		n--;
		Update(arr,n,0);
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
	int arr[] = {14,7,3,9,4,5,8,2};
	int length = sizeof(arr)/sizeof(int);
	Print(arr,length);
	HeapSort(arr,length-1);
	Print(arr,length);
	system("pause");
	return 0;
}