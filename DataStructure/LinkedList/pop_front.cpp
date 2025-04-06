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

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
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
    // push_front functionss
    void push_front(int val){
        Node* newnode = new Node(val);   // head-[-] -> [-] -> [-] -> [-]-tail
        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->next = head;             //[-]  
            head = newnode;
        }                                                      
    }

    // puhs_back function 
    void push_back(int val){
        Node* newnode = new Node(val);
        
        if(tail == NULL){
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    //print function for printing
    void print(){
        Node* temp = head;  
        while(temp != NULL){
            cout << temp->data << " -> " ;
            temp = temp->next;
        }
    }

    //insert in middlefunction 
    void insert(int val, int pos){
        Node* newnode = new Node(val);
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->next;  
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }   
    
    //delete whole list -> destructor
    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    } 
    //pop_font function 
    void pop_front(){
        if(head == NULL) {cout << "LL is empty" << endl;}
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }

    //pop_back function
    void pop_back(){
        if(tail == NULL){
            cout << "Nothing" << endl;
        }
        Node* temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;           
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
        
    }

    // iterative search function for key : return pos or i
    int SearchKey(int val){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == val){
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return -1;
    }

    int helper(Node* temp, int key){
        //base case 
        if(temp == NULL){
            return -1;
        }

        if(temp->data == key){
            return 0;
        }

        int idx = helper(temp->next,key);
        if(idx == -1){   // agar -1 to -1
            return -1;
        }
        return idx+1;   // 0+1, 1+1, 2+1 => 3
    }

    // recursive search for key :
    int SearchRecursive(int key){
       return helper(head,key);
    }


    // reversed a linked list 
    void reversed(){
        Node* curr = head;
        Node* prev = NULL;

        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

};




int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.print();
    cout << endl;

    ll.reversed();
    ll.print();
    

    return 0;
}