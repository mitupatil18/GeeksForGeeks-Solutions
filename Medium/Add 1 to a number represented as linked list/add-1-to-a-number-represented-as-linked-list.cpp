//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node *head)
    {
        if(head==NULL)
        return NULL;
        Node *a = head , *prev = NULL, *next = NULL;
        while(a)
        {
            next = a->next ;
            a->next = prev ;
            prev = a;
            a = next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        head = reverse(head);
        Node *a = head, *prev = NULL;
        int c = 1 ;
        while(a)
        {
            a->data = (a->data+c);
            c = (a->data)/10;
            a->data %= 10;
            prev = a;
            a = a->next;
        }
        if(c!=0)
        {
            Node *a = new Node(c);
            prev->next = a;
        }
        return reverse(head);
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends