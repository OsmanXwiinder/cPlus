#include <iostream>
using namespace std;

// Node 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
}   

class List{ 
    Node* head;
    Node* tail;
    public:
    List(){
        head = NULL;
        tail = NULL;
    }
    ~List(){
         if(head != NULL){
            delete head;
            head = NULL;
         }
    }
    // push_front 
    void push_front(int val){
        Node* newnode = new Node(val);
        if(head = NULL){
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    // push_back 
    void push_back(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        } else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    // pop_front
    void pop_front(){
        if(head == NULL) {cout << " list empty" << endl;}
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        
    }

    // pop_back
    void pop_back(){
        if(tail == NULL){cout << "list is" << endl;}
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    //insert in Middle
    void insert(int val, int pos){
        Node* newnodew = new Node(val);
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            temp= temp->next;
            newnodew->next = temp->next;
            temp->next = newnodew;
        }
    }
    //search key
    void Search(int key){
        Node* temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            if(temp->data == key){
                return idx;
            }
        }
        return -1;
        
    }
    
    // helper funtion 
    int help(int key){
        if(temp == NULL) {return -1;}

        if(temp->data == key){
            return 0;
        }

       int idx = help(temp->next,key);
        if(idx == -1){return -1;}

        return idx+1;
    }

    //RecursiveSearch
    void RecursiveSearch(int key){
        help(head,key);
    }

    //reverse a node list
    void Reverse(){
        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        
    }

}

int main(){

}