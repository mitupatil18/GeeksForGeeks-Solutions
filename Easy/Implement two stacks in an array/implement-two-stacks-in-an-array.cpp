//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks
{
    public:
    int arr[200];
    int f1 = 0 , f2 = 100 ;
    int c ;
    twoStacks()
    {
       for(int i = 0 ; i<200;i++)
       arr[i] = -1;
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(f1>99)
        return ;
        arr[f1] = x ;
        f1++;
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       if(f2>199)
        return ;
        arr[f2] = x ;
        f2++;
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(f1<=0)
        return -1;
        f1--;
        int x = arr[f1];
        arr[f1] = -1;
        return x;
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
       if(f2<=0)
        return -1;
        f2--;
        int x = arr[f2];
        arr[f2] = -1;
        return x ;
    }
};



//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends