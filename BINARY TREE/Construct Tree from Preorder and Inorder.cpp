BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
    BinaryTreeNode<int>* root=new BinaryTreeNode<int> (preorder[0]);
    int i=0;
    while(inorder[i]!=preorder[0])
        i++;
    int k=inLength-i-1;
    // if(inLength==0 || preLength==0)
    //     return root;
    if(i!=0)
      root->left=buildTree(preorder+1,i,inorder,i);
    if(k!=0)
      root->right=buildTree(preorder+i+1,k,inorder+i+1,k);
    
      
    return root;
}
