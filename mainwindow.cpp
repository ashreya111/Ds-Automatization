#include<iostream>
#include"array.h"
#include"quicksortalgo.h"
#include"queue.h"
#include"tree.h"
#include<windows.h>
using namespace std;
int main()
{
	int choice;
	while(1)
	{
	system("cls");
	HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED |FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout<<"WELCOME TO THE DATA STRUCTURE AUTOMATION, WE ARE PLEASED TO HELP YOU!"<<endl;
	cout<<"PLEASE SELECT YOUR DATA STRUCTURE:\n=================================\n";	
	cout<<"1: Arrays"<<endl;
	cout<<"2: Linked Lists"<<endl;
	cout<<"3: Stacks "<<endl;
	cout<<"4: Queues"<<endl;
	cout<<"5: Trees"<<endl;
	cout<<"6. Exit"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				system("cls");
				cout<<"Array Operations:\n=================\n";
				int operation_choice;
				cout<<"CHOOSE AN OPERATION TO PERFORM\n";
				cout<<"1: Inserting An Element In Array"<<endl;
				cout<<"2: Deleting The Element"<<endl;
				cout<<"3: Searching An Element In The Array"<<endl;
				cout<<"4: Sorting The Array"<<endl;
				cin>>operation_choice;
				switch(operation_choice)
				{
					case 1:
						{
						insert_array_element();
						break;	
						}
					case 2:
						{
						delete_array_element();	
						break;
						}
					case 3:
						{
							int search_choice;
							cout<<"WHICH SEARCHING TEACHNIQUE WOULD YOU LIKE TO GO WITH: "<<endl;
							cout<<"1. Linear Search"<<endl;
							cout<<"2. Binary Search"<<endl;
							cin>>search_choice;
							if(search_choice==1)
								{
								my_linear_search();
								}
							else if(search_choice==2)
							{
								my_binary_search();
							}
							else
							{
								cout<<"Wrong Choice!";
							}
						break;
						}
					case 4:
						{
							int sort_choice;
							cout<<"WHICH SORTING TECHNIQUE WOULD YOU LIKE TO USE :"<<endl;
							cout<<"1. QUICK SORT"<<endl;
							cout<<"2. BUBBLE SORT"<<endl;
							cin>>sort_choice;
							switch(sort_choice)
							{
								case 1:{
									quicksort_driver();
									break;
								}
								case 2:{
								my_bubble_sort();
								break;
								}
								default:{
									break;
								}
							}
							break;
						}
					default:
						{
							cout<<"WRONG CHOICE!"<<endl;
							break;
						}
				}
			break;
			}
			case 2:
				{
				system("cls");
				int operation_choice;
				cout<<"Linked List Operations:\n======================\n";
				cout<<"CHOOSE AN OPERATION TO PERFORM"<<endl;
				cout<<"1. Inserting An Element In Linked List"<<endl;
				cout<<"2. Deleting The Element"<<endl;
				cout<<"3. Searching An Element In The Linked List"<<endl;
				cout<<"4. Sorting The Linked List"<<endl;
				cin>>operation_choice;
				switch(operation_choice)
				{
					case 1:
						{
						insertion_ll();
						break;	
						}
					case 2:
						{
							delete_ll_element();	
							break;
						}
					case 3:
						{
							int search_choice;
							cout<<"WHICH SEARCHING TEACHNIQUE WOULD YOU LIKE TO GO WITH: "<<endl;
							cout<<"1. Linear Search"<<endl;
							cout<<"2. Binary Search"<<endl;
							cin>>search_choice;
							if(search_choice==1)
							{
								my_linear_search();
								break;	
							}
							else if(search_choice==2)
							{
								my_binary_search();
								break;
							}
							else
							{
								cout<<"Wrong Choice!";
								break;
							}
						}
					case 4:
						{
							int sort_choice;
							cout<<"WHICH SORTING TECHNIQUE WOULD YOU LIKE TO USE :"<<endl;
							cout<<"1. QUICK SORT"<<endl;
							cout<<"2. BUBBLE SORT"<<endl;
							cin>>sort_choice;
							switch(sort_choice)
							{
								case 1:{
									quicksort_driver();
									break;
								}
								case 2:{
									my_bubble_sort();
									break;
								}
								default:{
									break;
								}
							}
							break;
						}
					default:
						{
							cout<<"WRONG CHOICE!"<<endl;
							break;
						}
					break;			
				}
				break;
			}
			case 3:
				{
				system("cls");
				int operation_choice;
				cout<<"\nStack Operations:\n===============\n";
				cout<<"CHOOSE AN OPERATION TO PERFORM"<<endl;
				cout<<"1. Pushing The Elements Into The Stack"<<endl;
				cout<<"2. Popping Out Elements From The Stack"<<endl;
				cout<<"3. Peeking Into Stack"<<endl;
				cin>>operation_choice;
				switch(operation_choice)
				{
					case 1:
						{
						stack_insertion();
						break;	
						}
					case 2:
						{
							stack_deletion();
							break;
						}
					case 3:
						{
							stack_peek();
							break;
						}
					default:
						{
							cout<<"WRONG CHOICE!"<<endl;
							break;
						}
						break;
				}
			break;	
			}			
			case 4:
				{
					system("cls");
				int operation_choice;
				cout<<"Queue Operations:\n=================\n";
				cout<<"CHOOSE AN OPERATION TO PERFORM"<<endl;
				cout<<"1. Inserting Elements Into The Queue"<<endl;
				cout<<"2. Deleting Elements From The Queue"<<endl;
				cout<<"3. Peeking Into Queue"<<endl;
				cin>>operation_choice;
				switch(operation_choice)
				{
					case 1:
						{
						insert_in_queue();
						break;	
						}
					case 2:
						{
						deletion_in_queue();	
						break;
						}
					case 3:
						{
						peeking_on_queue();	
						break;
						}
					default:
						{
							cout<<"WRONG CHOICE!"<<endl;
							break;
						}
				}	
			break;
			}
			case 5:
				{
				system("cls");
				cout<<"BINARY SEARCH TREE"<<endl;
				driver_bst();
	 			break;
				 }
			case 6:
				exit(1);
	}//end of switch
}//end of loop
	return 0;
}
//end of main
