#include<iostream>
#include<conio.h>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
void swapqs(int* a,int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[low];
	int i=low;
	int j=high;
	while(i<j)
	{
		do{
			i++;
		}while(arr[i]>pivot);
		while(arr[j]<pivot)
		{
			j--;
		}
		if(i<j){
			swapqs(&arr[i],&arr[j]);
			
			cout<<"\n";
		}
		
	}
	swapqs(&arr[low],&arr[j]);
	return j;
	
}
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
		
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++){
		
		for(int j=0;j<=i;j++)
		{
			cout<<arr[j]<<"\t";
		}
		Sleep(1000);
		cout<<"\n";
	}
}
void quicksort_driver(){
	int n,i;
	cout<<"Enter the number of Elements to be Entered: \n";
	cin>>n;
	int arr[n];
	cout<<"\n Enter the Elements : \n";
	for( i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	quicksort(arr,0,n-1);
	cout<<"Sorted Items: \n";
	print(arr,n);
	Sleep(5000);
//ends here!
}
