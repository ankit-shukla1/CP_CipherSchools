                                            /****** Add Two Numbers in Form of Linked List*******/

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

   Node* addNumbers(Node* l1, Node* l2)
     {


        // The basic idea for the solution is we traverse node by node and add the numbers
        //in each node and store it in a different linked list;

        //It is simple solution....the only catch is the carry part.
        // in every iteration you calculate the carry as well and add it to the sum
        //in next iteration.


        Node* first=l1;
        Node* second=l2;

        //creating new node it gets initialised as 0 in value part.
        Node* head = new Node(0);

        //using another node for creation of linked list as head will be the one
        //pointing to start of linked list so we cannot modify that
        Node* curr = head;

        int carry=0; // carry variable for storing the carry part.



        // traversing till both of them are empty
        while(first!=NULL || second!=NULL)
        {
            int sum =0;

            if(first!=NULL)
                sum+=first->data;
            if(second!=NULL)
                sum+=second->data;

            sum+=carry;

            // calculating the carry
            carry=sum/10;


            Node* temp= new Node(sum%10);
            curr->next=temp;
            curr=curr->next;

            if(first!=NULL)
                first=first->next;
            if(second!=NULL)
                second=second->next;

        }


        //adding the carry node to the list
        if(carry>0)
        {
                Node* temp= new Node(carry);
                 curr->next=temp;
        }


        // returning head->next because head was created with default value as 0....which
        // is of no use to us....
        return head->next;


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
    LinkedList l1;

    LinkedList l2;

    for(int i=0;i<5;i++)              // Push 12345 into first linked list
        l1.push(i+1);

    for(int i=0;i<5;i++)       // Push 12345 into second linked list
        l2.push(i+1);


    LinkedList l3;

     l3.head = l3.addNumbers(l1.head,l2.head);          // Calling the method to add the numbers
     l3.reverseLL();


    cout<<"The sum is\n";                         // Printing the sum
    l3.print();



    return 0;
}


                                                        /*****  @Ankit Shukla ****/

