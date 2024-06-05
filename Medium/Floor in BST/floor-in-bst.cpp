//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:
    void find(Node *a , int& ans, int & dif , int x)
    {
        if(a==NULL)
        return ;
        find(a->left,ans, dif,x);
        if(a->data<=x && x-a->data<=dif)
        {
            dif = x-a->data;
            ans = a->data;
        }
         find(a->right,ans, dif,x);
    }
    int floor(Node* root, int x) {
        int ans = 0 , dif = INT_MAX;
        find(root,ans,dif,x);
        return dif==INT_MAX?-1:ans;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends