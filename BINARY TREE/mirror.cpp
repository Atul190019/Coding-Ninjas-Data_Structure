void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return ;
    if(root->left==NULL && root->right==NULL)
        return;
   
    else{
       BinaryTreeNode<int>* temp2;
        temp2=root->left;
        root->left=root->right;
        root->right=temp2;
    }
    
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
    
}
