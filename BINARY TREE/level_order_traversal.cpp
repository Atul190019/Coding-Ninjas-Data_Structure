void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL)
        return;
    queue<BinaryTreeNode<int>*> q;
    
    q.push(root);
    q.push(NULL);
    while(q.size()!=1){
        BinaryTreeNode<int>* temp=q.front();
        q.pop();
        if(temp==NULL){
            q.push(NULL);
          cout<<endl;
        }
        else{
           cout<<temp->data<<" ";
        
           if( temp->left!=NULL)
            q.push(temp->left);
            
           if( temp->right!=NULL)
             q.push(temp->right);
        }      
    }
    
}
