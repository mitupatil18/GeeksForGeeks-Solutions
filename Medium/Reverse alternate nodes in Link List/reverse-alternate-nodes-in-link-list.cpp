//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
#include<bits/stdc++.h>
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        vector<int> v ;
        Node *a = odd , *b = odd ;
        int cnt = 1 ;
        while(a)
        {
            if(cnt%2==0)
            {
                v.push_back(a->data);
                if(a->next!=NULL)
                b->next = a->next ;
                else
                b->next = NULL ;
            }
            else
            b = a ;
            a = a->next ;
            cnt++ ;
        }
        reverse(v.begin(),v.end());
        for(int i = 0; i<v.size() ; i++)
        {
            Node *n = new Node(v[i]);
            b->next = n ;
            b = n ;
        }
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends