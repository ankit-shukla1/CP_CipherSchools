                                            /****** Check If Linked List is Palindrome*******/

using namespace std;
#include<bits/stdc++.h>


// Node class for the Linked lIst
class Node
{
public:

    int data;
    Node* next;

    Node(int data)                        // Constructor
    {
        this->data = data;
        this->next =NULL;
    }
};



// Class for the implementation of Linked List
class LinkedList
{
    public:
    Node* head;

    LinkedList()
    {
        this->head=NULL;
    }

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void print()                     // Function to print the linked list
    {
        Node* curr = head;
        while(curr!=NULL)
        {
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<"\n";
    }

    bool checkPalindrome()             // Function to check if it is a palindrome
    {
        Node *curr= head;

        stack<Node*> s;           // stack for storing the nodes

        while(curr!=NULL)         // pushing data onto the stack
        {
            s.push(curr);
            curr=curr->next;
        }

        curr=head;

        while(curr!=NULL)
        {
            Node* temp = s.top();
            s.pop();
            if(curr->data!=temp->data)                  // checking if the top of stack is same as the node of linked list
                return false;
            curr =curr->next;
        }
        return true;
    }


};


int main()
{
    LinkedList l;

    for(int i=10;i>5;i--)                 // Pushing values into the linked list
        l.push(i);

    for(int i=6;i<=10;i++)
        l.push(i);

    cout<<"The Linked List is \n";            // Printing the linked list
    l.print();

    if(l.checkPalindrome())                         // If it is a palindrome
        cout<<"\nIt is a Palindrome\n";
    else                                          // If it is not a palindrome
        cout<<"\nIt is not a Palindrome\n";


    return 0;
}


                                                        /*****  @Ankit Shukla ****/

