BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
    // BinaryTreeNode<int>* l;
    // BinaryTreeNode<int>* r;
    if(root->left==NULL && root->right==NULL){
       delete root;
        return NULL; 
    }
     if(root->left!=NULL)
      root->left=removeLeafNodes(root->left);
    if(root->right!=NULL)
      root->right=removeLeafNodes(root->right);   
    return root;
}

