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


    // Function to remove the duplicates from a sorted list
    Node *removeDuplicates(Node *root)
    {

        if(root->next == NULL)
        {
            return root;
        }
        Node *curr = root;

        while(curr->next->next!=NULL)
        {
            if(curr->data==curr->next->data)
            {
                curr->next=curr->next->next;              // removing the duplicate node
            }
            else
                curr=curr->next;
        }

            if(curr->data==curr->next->data)           // Explicitly handling the last node
            {
                curr->next=NULL;
                return root;
            }
            else
                return root;
    }


};


int main()
{
    LinkedList l;

    for(int i=10;i>0;i--)                 // Pushing duplicates values into the linked list
      {
            l.push(i);
            l.push(i);
      }

      cout<<"List Before Removal of Duplicates\n";
      l.print();

     l.head =  l.removeDuplicates(l.head);

      cout<<"\n\nList After Removal of Duplicates\n";
      l.print();

    return 0;
}



                                                        /*****  @Ankit Shukla ****/
