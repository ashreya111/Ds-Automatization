#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void insert_array_element(){
	system("cls");
	int n;
	cout<<"Enter the array size : ";
	cin>>n;
	int arr[n];
	cout<<"ENTER THE ELEMENTS:  ";	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
		Sleep(1000);
		
	}
}
void delete_array_element(){
	system("cls");
	int n,del,count=0;
	cout<<"Enter the array size : ";
	cin>>n;
	int arr[n];
	cout<<"ENTER THE ELEMENTS: \n";	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Elements to be Deleted: ";
	cin>>del;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==del)
		{
			for(int j=i;j<n-1;j++)
			{
				arr[j]=arr[j+1];
				
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not Found!!.. \n";
	}
	else{
	
		cout<<"New array after the deletion:\n";
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<=i;j++)
			{
				cout<<arr[j]<<" ";
				
			}
			cout<<endl;
			Sleep(1000);
			
		}
	}
Sleep(2000);
}
void my_linear_search()
{
	system("cls");
	int arr[100], i, num, n, c=0, pos;
	cout<<"Enter the size : ";
	cin>>n;
	cout<<"Enter Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search : ";
	cin>>num;
		for(i=0; i<n; i++)
	{
		cout<<arr[i]<<"=="<<num<<"\n";
		if(arr[i]!=num)
		{
				cout<<"No this is not the required number to be search\n";
		}
		if(arr[i]==num)
		{
			
			if(arr[i]==num)
			{
				cout<<"We found our element\n";
			}
			
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at position "<<pos;
	}
	Sleep(5000);
}
void my_binary_search()
{
	system("cls");
	int arr[100], i, num, n, c=0, pos;
	cout<<"Enter the size : ";
	cin>>n;
	cout<<"Enter Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search : ";
	cin>>num;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
		Sleep(1000);
		
	}
	int first = 0,last = n-1;
	int middle = (first+last)/2;
	cout<<"Left Sub Part With Respect To  Middle Key  ";
	for(int itr=first;itr<middle;itr++)
	{cout<<arr[itr]<<" ";
	}
	cout<<endl;
	cout<<"Middle Term: ";
	cout<<arr[middle]<<endl;
	cout<<"Right Sub Part With Respect To Middle Key  ";
	for(int itr=middle+1;itr<=last;itr++)
	{
		cout<<arr[itr]<<" ";
	}
	cout<<endl;
	while(first <= last)
	{
		if(arr[middle] < num)
		{
			first = middle + 1;
			
			for(i=middle+1;i<n;i++)
			{
				cout<<arr[i]<<" ";
			
		cout<<arr[i]<<"=="<<num<<"\n";
		if(arr[i]!=num)
		{
			cout<<"No this is not the required number to be search\n";
		}
        }
		}
		else if(arr[middle] == num)
		{
			cout<<"\n"<<num<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
				 last = middle - 1;
				 cout<<last<<"\n";
			for(i=0;i<last;i++)	
			{
				cout<<arr[i]<<" ";
			}
		
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"\nNot found! "<<num<<" is not present in the list.";
	}
	Sleep(5000);
}
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}  
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
//         cout<<arr[i]<<" ";
        if (arr[j] > arr[j+1]) 
        { 
           
           swap(&arr[j], &arr[j+1]);
		   for(int i = 0;i<n;i++){
		   	cout<<arr[i]<<"\t";
		   	
		   }
		   Sleep(1000); 
		   cout<<"\n";
           swapped = true; 
        } 
      
           	
		
     }
     if (swapped == false) 
        break; 
   } 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        {
        printf("%d ", arr[i]);
		Sleep(1000);
		} 
  
}

void my_bubble_sort(){
	int arr[100], i, num, c=0, pos,s;
	cout<<"Enter the size : ";
	cin>>s;
	cout<<"Enter Elements : ";
	for(i=0; i<s; i++)
	{
		cin>>arr[i];
	}
    
    bubbleSort(arr, s); 
    printf("\nSorted array: \n"); 
    printArray(arr, s); 
    Sleep(5000);
}
