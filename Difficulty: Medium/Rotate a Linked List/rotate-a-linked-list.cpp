//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
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

class Solution {
  public:
    // Function to rotate a linked list.
    Node * reverse(Node *a)
    {
        Node *next = NULL, *prev = NULL;
        while(a)
        {
            next = a->next;
            a->next = prev;
            prev = a;
            a = next;
        }
        return prev;
    }
    Node* rotate(Node* head, int k) {
        int i = 0 ;
        Node *a = head, *b;
        while(i<k-1)
        {
            a = a->next;
            i++;
        }
        b = a->next;
        a->next = NULL;
        Node * a1 = reverse(head);
        Node * b1 = reverse(b);
        Node *t = a1;
        while(t->next)
        t = t->next;
        t->next = b1;
        return reverse(a1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.rotate(head, k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends