#include<iostream>
#include<queue>
using namespace std; 

class node {
    public: 
        int data; 
        node* left; 
        node* right; 
    
    node(int d){
        this -> data = d; 
        this -> left = NULL; 
        this -> right = NULL; 

    }
}; 

node* buildTree (node* root) {
    cout << "Enter the data:" << endl; 
    int data; 
    cin >> data; 
    root = new node(data); 

    if(data == -1) {
        return NULL; 
    }

    cout << "Enter data for left node" << data << endl ;

    root -> left = buildTree(root -> left); 
    cout << "Enter data for right node" << data << endl; 
    root -> right = buildTree(root -> right); 
    return root ;
}

node levelOrderTraversal (node* root){
    queue <node*> q; 
    q.push(root); 
    //seperator
    q.push(NULL); 

    while(!q.empty()){
        node* temp = q.front();  
        q.pop(); 

        if(temp == NULL){
            //if temp null ajata hai toh it means purana level complete traverse hogya hai 
            cout << endl; 
            if(!q.empty()){ 
                // if q is not empty it means still kuch elements hai queue mai jo traverse krne hai 
                q.push(NULL); 
            }
        }
        else
        {
            cout << temp -> data << " ";
            if(temp -> left ){
                q.push(temp -> left); 

            }

            if(temp -> right){
                q.push(temp -> right); 
            }
        }
    }
}


void inorder(node* root){
    //base case 
    if(root == NULL){
        return; 
    }

    inorder(root -> left); 
    cout << root -> data << " "; 
    inorder(root-> right);
    cout << root -> data << " "; 
}

void preorder(node* root){
    //base case 
    if(root == NULL){
        return; 
    }

    cout << root -> data << " "; 
    preorder(root -> left); 
    preorder(root -> right); 

}

void postorder(node* root){
    //base case 
    if(root == NULL){
        return;
    }

    postorder(root -> left); 
    postorder(root -> right); 
    cout << root -> data << " "; 

}

void buildFromLevelOrder(node* root) {
    queue<node*> q; 
    cout << "Enter data for root" << endl; 
    int data; 
    cin >> data; 
    root = new node(data); 
    q.push(root); 

    while(!q.empty()){
        node* temp = q.front(); 
        q.pop(); 

        cout << "Enter left node for: " << temp -> data << endl;
        int leftData; 
        cin >> leftData; 
        
        if(leftData != -1){
            temp -> left = new node(leftData); 
            q.push(temp -> left); 

        } 

        cout << "Enter right node for: " << temp -> data << endl;
        int rightData; 
        cin >> rightData; 
        
        if(rightData != -1){
            temp -> right = new node(rightData); 
            q.push(temp -> right); 
            
        }        
    }
}

int main(){

    node* root = NULL; 

    buildFromLevelOrder(root);
/*
    //creating a tree 
    root = buildTree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order 
    cout << "Printing the level order traversal output " << endl; 
    levelOrderTraversal(root); 

    cout << "Inorder traversal is "; 
    inorder(root); 

    cout <<endl << "pre order treaverasl "; 
    preorder(root); 

    cout << endl << "Post order traversal "; 
    postorder(root); 
*/
    return 0; 
}