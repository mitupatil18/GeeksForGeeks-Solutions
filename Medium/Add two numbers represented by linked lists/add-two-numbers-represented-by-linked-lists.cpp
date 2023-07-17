//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        stack<int> s1 , s2, s3 ;
        Node* a = l1 ;
        while(a)
        {
            s1.push(a->data);
            a = a->next ;
            
        }
        a = l2 ;
        while(a)
        {
            s2.push(a->data);
            a = a->next ;  
        }
        int c = 0 ;
        while(!s1.empty() && !s2.empty())
        {
            int x = s1.top();
            int y =s2.top();
            int z= (x+y+c)%10 ;
            s3.push(z);
            c = (x+y+c)/10 ;
            s1.pop();
            s2.pop();
        }
        while(!s1.empty())
        {
            int z = (s1.top()+c)%10 ;
            c = (s1.top()+c)/10 ;
            s3.push(z);
            s1.pop();
        }
        while(!s2.empty())
        {
            int z = (s2.top()+c)%10 ;
            c = (s2.top()+c)/10 ;
            s3.push(z);
            s2.pop();
        }
        if(c!=0)
        s3.push(c);
        Node *b = NULL , *prev = NULL ;
        while(!s3.empty())
        {
            Node* t = new Node(s3.top());
            if(prev==NULL)
            {
                prev =t  ;
                b = t ;
            }    
            else
                prev->next = t;  
            prev = t ;
            s3.pop();
        }
        return b ;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends