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
        cout << node->data <<" "; 
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
class Solution{
public:
    Node* divide(int N, Node *head){
        Node * o=NULL , *e= NULL , *preve , *prevo;
        Node *a = head;
        while(a)
        {
            if(a->data%2==0)
            {
                if(e==NULL)
                e = preve = a ;
                else
                preve->next = a ;
                preve = a ;
            }
            else
            {
                if(o==NULL)
                o = a ;
                else
                prevo->next = a ;
                prevo = a ;
            }
            a = a->next ;
        }
        if(o==NULL)
        return e ;
        if(e==NULL)
        return o ;
        preve->next = o ;
        prevo->next = NULL ;
        return e ;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends