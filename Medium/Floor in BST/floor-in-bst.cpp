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
    void find(Node *a , int& dif , int x , int& ans)
    {
        if(a==NULL)
        return ;
        if(a->data<=x)
        {
            int z = x-a->data;
            if(dif>z)
            {
                dif = z ;
                ans = a->data ;
            }
        }
        find(a->left, dif,x,ans);
        find(a->right, dif,x,ans);
    }
    int floor(Node* root, int x) {
        int dif = INT_MAX , ans = -1 ;
        find(root,dif,x,ans);
        return ans ;
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