//#include<stdio.h>
//#include<stdlib.h>
//
//void Print(int arr[],int n)
//{
//	int i=0;
//	for(;i<n;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
////void QuickSort(int arr[],int l,int r)
////{
////	int i = l;
////	int j = r;
////	int temp;
////	if(l>r) return ;
////	temp = arr[i];
////	while(i<j)
////	{
////		while(i<j&&arr[j]>temp) j--;
////		if(i<j) arr[i++] = arr[j];
////		while(i<j&&arr[i]<temp) i++;
////		if(i<j) arr[j--] = arr[i];
////	}
////	arr[i] = temp;
////	if(l<r)
////	{
////		QuickSort(arr,l,i-1);
////		QuickSort(arr,i+1,r);
////	}
////
////}
//
//void QuickSort1(int arr[],int l,int r)
//{
//	int i;
//	int j;
//	int temp ;
//	int tempNum;
//	if(arr==NULL||r<l) return ;
//	temp = arr[r];
//	i = l-1;
//	for(j=l;j<=r;j++)
//	{
//		if(arr[j]<temp||j==r)
//		{
//			tempNum = arr[++i];
//			arr[i] = arr[j];
//			arr[j] = tempNum;
//		}
//	}
//	QuickSort1(arr,l,i-1);
//	QuickSort1(arr,i+1,r);
//}
//int main()
//{
//	int arr[] = {14,7,3,9,4,5,8,2};
//	int length = sizeof(arr)/sizeof(int);
//	Print(arr,length);
//	QuickSort1(arr,0,length-1);
//	Print(arr,length);
//	system("pause");
//	return 0;
//}