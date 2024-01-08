//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        vector<int> v ;
        if(node1==NULL && node2==NULL)
        return NULL;
        Node *a = node1 ;
        while(a)
        {
            v.push_back(a->data);
            a = a->next ;
        }
        int n = v.size();
        a = node2 ;
        while(a)
        {
            v.push_back(a->data);
            a = a->next ;
        }
        int m = v.size()-n ;
        sort(v.begin(),v.end(), greater<int>());
        a = node1;
        Node *prev = a ;
        int i = 0 ;
        for(i = 0 ; i<n;i++)
        {
            a->data = v[i];
            prev = a;
            a = a->next ;
        }
        if(prev!=NULL)
        prev->next = node2 ;
        else
        node1 = node2;
        a= node2;
        while(a)
        {
            a->data = v[i++];
            a = a->next ;
        }
        return node1;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends