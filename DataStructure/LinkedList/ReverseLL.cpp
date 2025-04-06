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

    // print function 
    void print(){
        Node* temp = head;
        
    }


}


int main(){
    
    List ll;
    ll.push_front(1);


    return 0;
}