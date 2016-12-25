//#include<stdio.h>
//#include<stdlib.h>
//
//void BubbleSort(int arr[],int n)
//{
//	int i=0,j;
//	int temp = -1;
//	int flag;
//	int total =0;
//	while(i<n)
//	{
//		flag = 0;  
//		for(j=0;j<n-i-1;j++)
//		{
//			total++;
//			if(arr[j]>arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag = j+1;
//			}
//		}
//		i = n-flag;
//	}
//	printf("%d\n",total);
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
//	int arr[] = {2,5,8,9,10,14,19};
//	int length = sizeof(arr)/sizeof(int);
//	Print(arr,length);
//	BubbleSort(arr,length);
//	Print(arr,length);
//	system("pause");
//	return 0;
//}