#include<bits/stdc++.h>

using namespace std;


class Node
{
    public:
        int data;
        Node *next;
        
        Node(int data)
        {
            this->data=data;
            next=NULL;
        }
};

class List
{
    public:
        Node *head;
        
        List()
        {
            head=NULL;
        }
        
        void add(int data)
        {
            if(!head)
            head = new Node(data);
            
            else
            {
                Node *temp =  head;
                while(temp->next)
                {
                    temp = temp->next;
                }
                
                temp->next = new Node(data);
            }
        }
        
        void reverse()
        {
            stack<int>st;
            
            Node *temp = head;
            
            while(temp)
            {
                if(temp->data%2==0)
                st.push(temp->data);
                
                else
                {
                    while(!st.empty())
                    {
                        cout<<st.top()<<" ";
                        st.pop();
                    }
                    
                    cout<<temp->data<<" ";
                }
                temp=temp->next;
            }
            
            while(!st.empty())
            {
                cout<<st.top()<<" ";
                st.pop();
            }
            
            cout<<endl;
        }
};

int main()
{
    List l;
    int n,temp;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        l.add(temp);
    }
    
    
    
    l.reverse();
    //l.display()
    
}
