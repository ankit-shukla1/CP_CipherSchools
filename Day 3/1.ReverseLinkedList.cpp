                                            /****** Reverse a Linked List*******/

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

    void reverseLL()                   // Function to reverse the linked list
    {
          Node *curr = head;
        Node *prev = NULL;

        while(curr!=NULL)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;

    }
};


int main()
{
    LinkedList l;

    for(int i=10;i>0;i--)                 // Pushing values into the linked list
        l.push(i);

    cout<<"Before Reversal\n";
    l.print();                   // Printing before reversal

    l.reverseLL();             // Calling the reversal function

    cout<<"\nAfter Reversal\n";
    l.print();               // Printing after reversal
    return 0;
}



                                                        /*****  @Ankit Shukla ****/
