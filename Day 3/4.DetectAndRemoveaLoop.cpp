                                            /****** Detect and Remove a Loop*******/

using namespace std;
#include<bits/stdc++.h>


// Node class for the Linked List
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


    void detectRemoveLoop()              // Function to detect and remove the loop
    {

        Node* p = head;
        Node* q = head;
        Node* temp;
        while(q && q->next)                // Detecting the loop
        {
            temp = p;
            p=p->next;
            q=q->next->next;
            if(p==q)                    // When both of them are at same position
                break;
        }


        if(p==q)
        {
            p = head;                // Pointing the first pointer to head
            while(p!=q)
            {
                p=p->next;
                temp = q;
                q=q->next;
            }
        temp->next=NULL;             // Removing the loop
        }

    }



};


int main()
{
    LinkedList l1;
    Node* head = new Node(10);                      // Pushing the nodes
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    head->next->next->next->next->next = head->next->next;        // creating the loop

    l1.detectRemoveLoop();


    return 0;
}


                                                        /*****  @Ankit Shukla ****/

