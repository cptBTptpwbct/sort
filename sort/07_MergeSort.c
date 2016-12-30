//#include<stdio.h>
//#include<stdlib.h>
//void Print(int arr[],int n)
//{
//	int i=0;
//	for(;i<n;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Merge1(int arr[],int l,int r)
//{
//	int l1,l2,mid;
//	int i=0;
//	int *p = (int *)malloc(sizeof(int)*(r-l+1));
//	mid = (l+r)/2;
//	l1 = l;
//	l2 = mid+1;
//	while(l1<=mid&&l2<=r)
//	{
//		if(arr[l1]<=arr[l2])
//		{
//			p[i++]=arr[l1++];
//		}
//		else if(arr[l1]>arr[l2])
//		{
//			p[i++]=arr[l2++];
//		}
//	}
//	while(l1<=mid)
//	{
//		p[i++]=arr[l1++];
//	}
//	while(l2<=r)
//	{
//		p[i++]=arr[l2++];
//	}
//	for(i=0;i<=(r-l);i++)
//	{
//		arr[i+l] = p[i];
//	}
//	free(p);
//}
//void MergeSort(int arr[],int l,int r)
//{
//	int mid;
//	if(arr==NULL) return ;
//	if(l>=r) return ;
//	mid = (l+r)/2;
//	MergeSort(arr,l,mid);
//	MergeSort(arr,mid+1,r);
//	Merge1(arr,l,r);
//	
//}
//int main()
//{
//	int arr[] = {14,7,3,9,4,5,8,2};
//	int length = sizeof(arr)/sizeof(int);
//	Print(arr,length);
//	MergeSort(arr,0,length-1);
//	Print(arr,length);
//	system("pause");
//	return 0;
//}