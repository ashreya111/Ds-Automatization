#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void insert_in_queue(){
	queue<int> q;
	vector<int> v;
	int n;
	system("cls");
	cout<<"Enter The Number Of Elements of Queue";
	cin>>n;
	int data;
	cout<<"Enter The First Element"<<endl;
	cin>>data;
	q.push(data);
	cout<<"Current Queue Looks Like: "<<endl;
	cout<<"|   "<<q.front()<<"   |"<<endl;
	cout<<"    ^    "<<"\nFront  Rear";
	cout<<endl;
	cout<<endl;
	cout<<"Front Would Not Move, and Only Will Rear Do, While Inserting Elements"<<endl;
	cout<<"Enter Rest Of Elements"<<endl;
	for(int i=1;i<n;i++)
	{
		cin>>data;
		q.push(data);
	}
	int count = q.size();
	cout<<"After Entering All Elements, Queue Looks Like";
	cout<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	cout<<"^";
	
	for(int i=0;i<=count+1;i++)
		cout<<" ";
	cout<<"^";
	cout<<endl;
	cout<<"Front";
	for(int i=0;i<count-2;i++)
		cout<<" ";
	cout<<"Rear";
	Sleep(3000);
}

void deletion_in_queue(){
		system("cls");
		queue<int> q;
	vector<int> v;
	int n;
	cout<<"Enter the Number of Elements In Queue: ";
	cin>>n;
	int data;
	cout<<endl;
	cout<<"Now Enter The Elements To Be Inserted: ";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>data;
		q.push(data);
		v.push_back(data);
	}
	int count = q.size();
	cout<<"Initial State of the Queue is as follows: ";
	cout<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"^";
	
	for(int i=0;i<=count+1;i++)
		cout<<" ";
	cout<<"^";
	cout<<endl;
	cout<<"Front";
	for(int i=0;i<count-2;i++)
		cout<<" ";
	cout<<"Rear";
	cout<<"\n Deleting Elements One By One"<<endl;
	while(!q.empty()){
		cout<<"Element To Go Out First Is: "<<" ";
		cout<<q.front()<<endl;
		q.pop();
		Sleep(1000);
	}	
Sleep(3000);
}
void peeking_on_queue(){
	system("cls");
	queue<int> q;
	int n;
	cout<<"Enter The Number of Elements You Want In Queue";
	cin>>n;
	int data;
	cout<<endl;
	cout<<"Now Enter the elements to be inserted in a Queue";
	vector<int> v;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>data;
		q.push(data);
	}
	cout<<"Peeking Into The Queue For Front"<<endl;
	cout<<q.front();
	Sleep(1000);
	cout<<endl;
	cout<<"Peeking Into The Queue For Rear"<<endl;
	while(!q.empty())
	{
		int temp = q.front();
		v.push_back(temp);
		q.pop();
	}
	reverse(v.begin(),v.end());
	cout<<v[0];
	cout<<endl;
	Sleep(3000);
}
