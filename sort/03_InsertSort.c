//#include<stdio.h>
//void InsertSort(int arr[],int n)
//{
//	int i=0,j=0;
//	int temp = -1;//¡Ÿ ±¥Ê¥¢ø’º‰
//	if(arr == NULL||n<0) return ;
//	for(i=1;i<n;i++)
//	{
//		temp = arr[i];
//		for(j=i-1;j>=0;j--)
//		{
//			if(arr[j]<temp)
//				break;
//			arr[j+1] = arr[j];
//		}
//		arr[j+1] = temp; 
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
//	int arr[] = {20,10,34,9,6,89,7};
//	int length = sizeof(arr)/sizeof(int);
//	Print(arr,length);
//	InsertSort(arr,length);
//	Print(arr,length);
//	system("pause");
//	return 0;
//}