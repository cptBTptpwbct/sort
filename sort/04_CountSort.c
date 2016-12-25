//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//void CountSort(int arr[],int n)
//{
//	int i,j;
//	int *vis = NULL;
//	int min=2147483647,max=0;
//	for(i=0;i<n;i++)
//	{
//		if(min>arr[i]) 
//			min = arr[i];
//		else if(max<arr[i]) 
//			max = arr[i];
//	}
//	vis = (int*)malloc(sizeof(int)*((max-min)+1));
//	memset(vis,0,sizeof(int)*((max-min)+1));
//	for(i=0;i<n;i++)
//	{
//		vis[arr[i]-min]++;
//	}
//	j=0;
//	for(i=0;i<=(max-min);i++)
//	{
//		while(vis[i]!=0)
//		{
//			
//			arr[j++] = i+min;
//			vis[i]--;
//		}
//	}
//}
//void Print(int arr[],int n)
//{
//	int i=0;
//	for(;i<n;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,4,3,45,2,3,4,1};
//	int length = sizeof(arr)/sizeof(int);
//	Print(arr,length);
//	CountSort(arr,length);
//	Print(arr,length);
//	system("pause");
//	return 0;
//}