#include <iostream>
using namespace std;

class Node{   // Node
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
}

class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head =NULL;
        tail = NULL;
    }
    //push_front
    void push_front(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    // push_back 
    void push_back(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode; 
        }   
    }

    // print function 
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> " ;
            temp = temp->next;
        }
    }


}


int main(){
    
    List ll;
    ll.push_front(1);


    return 0;
}