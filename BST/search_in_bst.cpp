BinaryTreeNode<int>* searchInBST(BinaryTreeNode<int> *root , int k){
    if(root==NULL)
        return root;
    
    if(root->data== k)
        return root;

   
    if(root->data > k)
    return searchInBST(root->left , k);
        
    if( root->data < k )
    return searchInBST(root->right , k);
}

