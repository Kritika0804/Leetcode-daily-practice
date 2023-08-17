//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	// Code here
	if(head==NULL)
	{
	    return NULL;
	}
	int cnt=0;
	Node *temp=head;
	while(temp!=NULL)
	{
	    temp=temp->next;
	    cnt++;
	}
	temp=head;
	if(cnt%2==0)cnt--;
	for(int i=0;i<cnt/2;i++)
	{
	    temp=temp->next;
	}
// 	Create the new node with the given key
    Node* mid = new Node(x);

    // Insert the new node after temp
    Node* last = temp->next;
    temp->next = mid;
    mid->next = last;
    
    

    return head;
}