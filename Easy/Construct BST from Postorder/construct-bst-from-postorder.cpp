//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}

// } Driver Code Ends




/*struct Node
{
	int data;
	Node *left, *right;
};*/

Node* build(int post[] , int l , int r)
{
    if(l>=r)
    return NULL ;
    int mid = (l+r)/2 ;
    Node *x = new Node(post[mid]);
    x->left = build(post,l,mid);
    x->right = build(post,mid+1,r);
    return x ;
}
Node *constructTree (int post[], int size)
{
    sort(post, post+size);
    return build(post, 0, size);
}