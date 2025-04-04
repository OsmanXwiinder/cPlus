#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

class List{
    Node* head;
    Node* tail;

    public:    
    List(){
        head = NULL;
        tail = NULL;
    } 
    // push_front -> on front 
    void  push_front(int val){
        Node* newNode = new Node(val);
        
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head; // giving a current address to newNOde next Pointer
            head = newNode;   // now updating head to newnode address
        }
    }
    //  push-back -> on the last;
    void push_back(int val){
        Node* newNode = new Node(val);
            if(head == NULL){
            head = tail = newNode;

        }else{
            tail->next = newNode; // to tail ke next me newNODE KA ADDRESS  
            tail = newNode; // tail ko update kara newNode ke address ke sath 
        }
    } 

    // printing
    void printList(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> " ; // printing Current
            temp = temp->next;   // updating to new Address
        }
        
    }   
};   

int main(){
    List ll;
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);

    ll.printList();

    cout << endl;

    ll.push_back(2);
    ll.push_back(1);

    ll.printList();

    return 0;
}