#include<iostream>
#include<queue>
using namespace std; 

class Node{
public: 
    int data; 
    Node* left; 
    Node* right; 

//constructor 
    Node(int d){
        this -> data = d; 
        this -> left = NULL; 
        this -> right = NULL; 
    }
};

void levelOrderTraversal (Node* root){
    queue <Node*> q; 
    q.push(root); 
    //seperator
    q.push(NULL); 

    while(!q.empty()){
        Node* temp = q.front();  
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

Node* insertIntoBST(Node* &root, int d){
    //base case (kuch bhi nhi hai toh jo bhi value ayegi wo value root node bann jayegi) 
    if(root == NULL){
        root = new Node(d); 
        return root; 
    }

    // agar new data root se bada hai toh right part mai jana hai 
    if (d > root-> data)
    {
        //right part mai insert krna hai 
        root -> right = insertIntoBST(root -> right, d);  
    }
    else 
    { 
        // left part mai insert krna hai 
        root-> left = insertIntoBST(root -> left, d); 
    }

    return root; 
}

void inorder(Node* root){
    //base case 
    if(root == NULL){
        return; 
    }

    inorder(root -> left); 
    cout << root -> data << " "; 
    inorder(root-> right);
    cout << root -> data << " "; 
}

void preorder(Node* root){
    //base case 
    if(root == NULL){
        return; 
    }

    cout << root -> data << " "; 
    preorder(root -> left); 
    preorder(root -> right); 

}

void postorder(Node* root){
    //base case 
    if(root == NULL){
        return;
    }

    postorder(root -> left); 
    postorder(root -> right); 
    cout << root -> data << " "; 

}


void takeInput(Node* &root){
    
    int data ; 
    cin >> data; 

    while(data != -1){
        root = insertIntoBST(root, data); 
        cin >> data; 
    }
}

Node* deleteFromTree(Node* root, int val){
    //base case 
    if(root == NULL){
        return root; 
    }

    if(root -> data == val){
        // 0 child 
        if(root -> left == NULL && root -> right == NULL){
            delete root; 
            return NULL; 
        }
        // 1 child 

        // left child 
        if(root -> left != NULL && root -> right == NULL){
            Node* temp = root -> left;
            delete root; 
            return temp; 
        }

        // right child 
        if(root -> left == NULL && root -> right != NULL){
            Node* temp = root -> right;
            delete root; 
            return temp; 
        }

        // 2 child 
        if(root -> left != NULL && root -> right != NULL){
            int mini = minVal(root -> right ) -> data ; 
            root -> data = mini; 
            root -> right = deleteFromTree(root-> right, mini); 
            return root;
        }
    }
    // left part mai chale gye 
    else if (root-> data  > val){
        root -> left = deleteFromTree(root -> left, val); 
        return root; 
    }
    else 
    {
        // right part mai chale gye 
        root -> right = deleteFromTree(root -> right, val); 
        return root;
    }
}


int main()
{
    Node* root = NULL;

    cout << "Enter data to create a BST " << endl; 
    takeInput(root);  

    cout << "Printing the BST" << endl; 
    levelOrderTraversal(root); 

    cout << "Printing using inorder traversal" << endl; 
    inorder(root); 

    cout << "Printing using preorder traversal" << endl; 
    preorder(root); 

    cout << "Printing using postorder traversal" << endl; 
    postorder(root); 


    return 0; 
}