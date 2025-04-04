#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    // push front function
    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    // push_back function
    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // printing function for nodes
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    // inserting in Middle of Node

    void insertInMiddle(int val, int pos)
    {
        Node *newnode = new Node(val);

        Node *temp = head;

        for (int i = 0; i < pos - 1; i++){
            // ke agar temp == Null Ho jay
            if(temp == NULL) {
                cout << "Posoition is invalid" << endl;
                return;
            }
            
            temp = temp->next;
            
        }
        // at the and temp point on  pos-1 => prev/ left
        newnode->next = temp->next;
        temp->next = newnode;
    }
};



int main()
{
    List ll;
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.print();

    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);

    ll.print();

    ll.insertInMiddle(100,2);

    ll.print();

    return 0;
}