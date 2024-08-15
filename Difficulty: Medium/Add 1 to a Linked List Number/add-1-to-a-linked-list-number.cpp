//{ Driver Code Starts
// Initial template for C++

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
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

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

class Solution {
  public:
    Node* reverse(Node *a)
    {
        Node *prev = NULL, *next = NULL;
        while(a)
        {
            next = a->next;
            a->next = prev;
            prev = a;
            a = next;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        Node *h1 = reverse(head), *prev = h1;
        Node *a = h1;
        int c = 1;
        while(a)
        {
            int sum = a->data+c;
            c = sum/10;
            sum = sum%10;
            a->data = sum;
            prev = a;
            a = a->next;
        }
        if(c>0)
        {
            Node *n = new Node(c);
            prev->next = n;
        }
        return reverse(h1);
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
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends