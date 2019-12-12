#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<conio.h>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
/*
 * Node Declaration
 */
struct node
{
    int data;
    struct node *left;
    struct node *right;
	struct node *next;
}*root;
struct node *head=NULL;
struct node *n;
int *array;
vector<int> v;
/*
 * Class Declaration
 */
 //stack part from here
 void insert_ll(int val , int pos){
	node* temp = new node();
	temp->data = val;
	temp->next = NULL;
	if(pos == 1){
		temp->next = head;
		head = temp;
		return;
	}
	node* temp2 = head;
	for(int i= 0 ; i<pos-2; i++){
	  temp2 = temp2->next;
	}
	temp->next = temp2->next;
	temp2->next = temp;
}
delete_ll_element(){
	system("cls");
	int n,del,count=0;
	cout<<"Enter the Size of Linked List : ";
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
	
		cout<<"New List after the deletion:\n";
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<=i;j++)
			{
				cout<<arr[j]<<" ";
				
			}
			cout<<endl;
			Sleep(1000);
			
		}
Sleep(2000);
	
}
}
void output_ll(){
	node* temp = head;
	cout<<"\nlist: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}
void insertion_ll(){
		head = NULL;
	int n,x,pos;
	cout<<"Enter number of elements to enter: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter value: ";cin>>x;
		cout<<"Enter position: ";cin>>pos;
		if(head==NULL&&pos>1){
			cout<<"Sorry! list is currently empty\n change the position: ";cin>>pos;
		}
		insert_ll(x,pos);
		output_ll();
		Sleep(3000);
	}
	
//	insert(2,1);
//	insert(4,2);
//	insert(6,3);
//	insert(8,4);
//	insert(10,5);

}
int insertion(int x)
{
//	int x
// 	cout<<"Enter number: ";
//	cin>>x;
	v.push_back(x);
 		node* temp = new node;
 		temp->data = x;
 		temp->next = NULL;
 		if(head==NULL){
 			head = temp;
 			n = temp;	
		 }else{
		 	n->next = temp;
		 	n = temp;
		 }
}
void reverse_and_print(){
	cout<<"Final Stack Would Look Like: ";
	reverse(v.begin(),v.end());
	cout<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<"       ";
		cout<<"|"<<v[i]<<" |\n ___\n";
	}
	Sleep(3000);
}
int deletion()
{
	system("cls");
	int n, *arr,item;
	cout<<"Enter the number of elements: ";
	cin>>n;
	arr = new int[n];
	cout<<"Enter "<<n<<" elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Process of deletion:\nList is:\n";
	int j=n;
	for(int i=n-1;i>=0;i--){
		for(int j=i;j>=0;j--){
			cout<<"| "<<arr[j]<<" |\n ___\n";
		}
		cout<<"==========\n\n\n";
		sleep(3);
	}
}
int showTop(){
	system("cls");
	int n, *arr,item;
	cout<<"Enter the number of elements: ";
	cin>>n;
	arr = new int[n];
	cout<<"Enter "<<n<<" elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	system("cls");
	cout<<"Entered elements in stack:\n";
	for(int i=n-1;i>=0;i--){
		cout<<"|"<<arr[i]<<"|\n___\n";
	}
	cout<<"Top element in stack is: "<<arr[n-1];
}
int output()
{
	node *show = head;
	cout<<"List is: ";
	while(show!=NULL){
		cout<<show->data<<"\t";
		Sleep(1000);
		show = show->next;
	}
	cout<<"\n";
}

stack_insertion()
{
	int n;
		system("cls");
 		cout<<"Insertion in stack:\n";
 		cout<<"Enter the number of elements: ";
		cin>>n;
		int x;
// 		array = new int[n];
		cout<<"Enter number: ";
 		for(int i=0;i<n;i++){
 			cin>>x;
 			insertion(x);
			 output();	
		 }
		reverse_and_print();
}
stack_deletion(){
	system("cls");
	deletion();
}
stack_peek(){
	system("cls");
	showTop();
	Sleep(3000);	
}
 
 
 
//tree part from here 
class binarysearchtree
{
    public:
        void search(int, node **, node **);    
        void insert(node *, node *);
        void deletenode(int);
        void case_1(node *,node *);
        void case_2(node *,node *);
        void case_3(node *,node *);
        void traverse_pre(node *);
        void traverse_in(node *);
        void traverse_post(node *);
        void display(node *, int);
        binarysearchtree()
        {
            root = NULL;
        }
};
void binarysearchtree::search(int item, node **par, node **loc)
{
    node *ptr, *ptrsave;
    if (root == NULL)
    {
        *loc = NULL;
        *par = NULL;
        return;
    }
    if (item == root->data)
    {
        *loc = root;
        *par = NULL;
        return;
    }
    if (item < root->data)
        ptr = root->left;
    else
        ptr = root->right;
    ptrsave = root;
    while (ptr != NULL)
    {
        if (item == ptr->data)
        {
            *loc = ptr;
            *par = ptrsave;
            return;
        }
        ptrsave = ptr;
        if (item < ptr->data)
            ptr = ptr->left;
	else
	    ptr = ptr->right;
    }
    *loc = NULL;
    *par = ptrsave;
}
 
/*
 * Inserting Element into the Tree
 */
void binarysearchtree::insert(node *tree, node *newnode)
{
    if (root == NULL)
    {
        root = new node;
        root->data = newnode->data;
        root->left = NULL;
        root->right = NULL;
        cout<<"Root Node is Added"<<endl;
        return;
    }
    if (tree->data == newnode->data)
    {
        cout<<"Element already in the tree"<<endl;
        return;
    }
    if (tree->data > newnode->data)
    {
        if (tree->left != NULL)
        {
            insert(tree->left, newnode);	
	}
	else
	{
            tree->left = newnode;
            (tree->left)->left = NULL;
            (tree->left)->right = NULL;
            cout<<"Node Added To Left"<<endl;
            return;
        }
    }
    else
    {
        if (tree->right != NULL)
        {
            insert(tree->right, newnode);
        }
        else
        {
            tree->right = newnode;
            (tree->right)->left = NULL;
            (tree->right)->right = NULL;
            cout<<"Node Added To Right"<<endl;
            return;
        }	
    }
}
 
/*
 * deletenodeete Element from the tree
 */
void binarysearchtree::deletenode(int item)
{
    node *parent, *location;
    if (root == NULL)
    {
        cout<<"Tree empty"<<endl;
        return;
    }
    search(item, &parent, &location);
    if (location == NULL)
    {
        cout<<"Item not present in tree"<<endl;
        return;
    }
    if (location->left == NULL && location->right == NULL)
        case_1(parent, location);
    if (location->left != NULL && location->right == NULL)
        case_2(parent, location);
    if (location->left == NULL && location->right != NULL)
        case_2(parent, location);
    if (location->left != NULL && location->right != NULL)
        case_3(parent, location);
    free(location);
}
 
/*
 * Case A
 */
void binarysearchtree::case_1(node *par, node *loc )
{
    if (par == NULL)
    {
        root = NULL;
    }
    else
    {
        if (loc == par->left)
            par->left = NULL;
        else
            par->right = NULL;
    }
}
 
/*
 * Case B
 */
void binarysearchtree::case_2(node *par, node *loc)
{
    node *child;
    if (loc->left != NULL)
        child = loc->left;
    else
        child = loc->right;
    if (par == NULL)
    {
        root = child;
    }
    else
    {
        if (loc == par->left)
            par->left = child;
        else
            par->right = child;
    }
}
 
/*
 * Case C
 */
void binarysearchtree::case_3(node *par, node *loc)
{
    node *ptr, *ptrsave, *suc, *parsuc;
    ptrsave = loc;
    ptr = loc->right;
    while (ptr->left != NULL)
    {
        ptrsave = ptr;
        ptr = ptr->left;
    }
    suc = ptr;
    parsuc = ptrsave;
    if (suc->left == NULL && suc->right == NULL)
        case_1(parsuc, suc);
    else
        case_2(parsuc, suc);
    if (par == NULL)
    {
        root = suc;
    }
    else
    {
        if (loc == par->left)
            par->left = suc;
        else
            par->right = suc;
    }
    suc->left = loc->left;
    suc->right = loc->right;
}
 
/*
 * Pre Order Traversal
 */
void binarysearchtree::traverse_pre(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        cout<<ptr->data<<"  ";
        traverse_pre(ptr->left);
        traverse_pre(ptr->right);
    }
}
/*
 * In Order Traversal
 */
void binarysearchtree::traverse_in(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        traverse_in(ptr->left);
        cout<<ptr->data<<"  ";
        traverse_in(ptr->right);
    }
}
 
/*
 * traverse_post Traversal
 */
void binarysearchtree::traverse_post(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        traverse_post(ptr->left);
        traverse_post(ptr->right);
        cout<<ptr->data<<"  ";
    }
}
 
/*
 * Display Tree Structure
 */
void binarysearchtree::display(node *ptr, int level)
{
    int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level;i++)
                cout<<"       ";
	}
        cout<<ptr->data;
        display(ptr->left, level+1);
    }
}




/*
 * Main Contains Menu
 */


void driver_bst(){
	    int choice, num;
    binarysearchtree bst;
    node *temp;
    while (1)
	{	
     	cout<<"1. Inserting An Element In Tree "<<endl;
     	cout<<"2. deleting Element From Tree "<<endl;
     	cout<<"3. Inorder Traversal Of Tree "<<endl;
     	cout<<"4. Preorder Traversal Of Tree "<<endl;
     	cout<<"5. Postorder Traversal Of Tree "<<endl;
     	cout<<"6. Displaying The Structure Of Tree"<<endl;	
	 	cout<<"7. Exit The Window"<<endl;;    
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            temp = new node;
            cout<<"Enter the number to be inserted : ";
	    cin>>temp->data;
            bst.insert(root, temp);
            break;
        case 2:
            if (root == NULL)
            {
                cout<<"Tree is empty, nothing to delete"<<endl;
                continue;
            }
            cout<<"Enter the number to be deleted : ";
            cin>>num;
            bst.deletenode(num);
            break;
        case 3:
            cout<<"Inorder Traversal of BST:"<<endl;
            bst.traverse_in(root);
            cout<<endl;
            break;
	case 4:
            cout<<"Preorder Traversal of BST:"<<endl;
            bst.traverse_pre(root);
            cout<<endl;
            break;
        case 5:
            cout<<"Postorder Traversal of BST:"<<endl;
            bst.traverse_post(root);
            cout<<endl;
            break;
        case 6:
            cout<<"Display BST:"<<endl;
            bst.display(root,1);
            cout<<endl;
            break;
        case 7:
            exit(1);
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
}
