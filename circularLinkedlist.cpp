#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data; 
    Node* next; 

    //constructor
    Node(int d){
        this -> data = d; 
        this -> next = NULL; 
    }

    //destructor 
    ~Node() {
        int value = this -> data; 
        if(this -> next != NULL){
            delete next; 
            next = NULL; 
        }
        cout << " memory is free for node with data " << value << endl; 
    }
};

void insertNode(Node* &tail, int element, int d){
    //assuming  that the element is present in the list 

    //empty list 
    if(tail == NULL){
        //creating new Node 
        Node* newNode = new Node(d); 
        tail = newNode; 
        newNode -> next = newNode; 
    }
    //non empty list 
    else 
    {
        Node* curr = tail; 

        while( curr -> data != element ){
            curr = curr -> next; 
        }

        //element found -> curr is representing element wala node 
        Node* temp = new Node(d); 
        temp -> next = curr -> next; 
        curr -> next = temp; 
    }
}

void deleteNode (Node* &tail, int value){

    //empty list 
    if(tail == NULL){
        cout << "List is empty " << endl; 
        return; 
    }
    else {
        //non empty 
        Node* prev = tail; 
        Node* curr = prev -> next; 

        while (curr -> data != value ){ 
            prev = curr; 
            curr = curr -> next ; 
        }

        prev -> next = curr -> next; 

        //1 node linked list 
        if(curr == prev){
            tail = NULL; 
        }

        //>=2 Node linked list  

        else if(tail == curr){
            tail = prev; 
        }
        curr -> next = NULL; 
        delete curr; 
    }
}

void isCircular (Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next; 
    while(temp != NULL && temp != head){
        temp = temp -> next; 
    }

    if(temp == head){
        return true; 
    }
    return false; 
}

void detectLoop(Node* head){

    if(head == NULL){
        return false; 
    }

    map<Node*, bool> visited; 

    Node* temp = head; 

    while(temp != NULL ){

        //cycle is present 
        if(visited[temp] == true){
            return true; 
        }

        visited[temp] = true; 
        temp = temp -> next; 
    }
    return false; 

}

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL; 
    }

    Node* fast = head; 
    Node* slow = head; 

    while(slow != NULL && fast != NULL){

        fast = fast ->next; 
        if(fast != NULL){
            fast = fast -> next; 
        }

        slow = slow -> next; 

        if (slow == fast ){
            return 1;
        }
    }
    return false; 
}

void print(Node* tail) { 

    if(tail == NULL){
        cout << "Tail is empty " << endl; 
        return; 
    }
    
    //saving tails address in temp
    Node* temp = tail; 

    do
    {
        cout << tail -> data << " ";
        tail = tail -> next; 
    } while (tail != temp);
    cout << endl; 
}

int main(){

    Node* tail = NULL; 

    //inserting in empty list case 
    insertNode(tail, 5, 3); 
    print(tail); 

    insertNode(tail, 3, 5); 
    print(tail); 

    insertNode(tail, 5, 7); 
    print(tail); 

    deleteNode(tail, 3); 
    print(tail); 

    return 0;
}