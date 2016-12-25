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
//void  ShellSort(int arr[],int length)
//{
//	int gap = length/2;
//	int i=0,j=0;
//	int k=0;
//	int temp = -1;
//	while(1)
//	{
//			for(i=gap;i<length;i+=gap)
//			{
//				temp = arr[i];
//				for(j=i-gap;j>=0;j-=gap)
//				{
//					if(arr[j]<temp)
//						break;
//					arr[j+gap] = arr[j];
//				}
//				arr[j+gap] = temp;
//			}
//		
//		
//		gap/=2;
//		if(gap<1) 
//			break;
//	}
//}
//void  ShellSort1(int arr[],int length)
//{
//	int gap = length/2;
//	int i=0,j=0;
//	int k=0;
//	int temp = -1;//ÁÙÊ±´æ´¢¿Õ¼ä
//	while(1)
//	{
//		/*for(k=0;k<gap;k++)
//		{*/
//			for(i=gap;i<length;i+=gap)
//			{
//				temp = arr[i];
//				for(j=i-gap;j>=0;j-=gap)
//				{
//					if(arr[j]<temp)
//						break;
//					arr[j+gap] = arr[j];
//				}
//				arr[j+gap] = temp;
//			}
//	/*	}*/
//		
//		gap/=2;
//		if(gap<1) 
//			break;
//	}
//}
//
//
//int main()
//{
//	int arr[] = {14,7,3,9,4,5,8,2};
//	int length = sizeof(arr)/sizeof(int);
//	Print(arr,length);
//	ShellSort(arr,length);
//	Print(arr,length);
//	system("pause");
//	return 0;
//}