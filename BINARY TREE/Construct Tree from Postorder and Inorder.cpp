BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
   BinaryTreeNode<int>* root=new BinaryTreeNode<int>(postorder[postLength-1]);
    int i=0;
    while(inorder[i]!=postorder[postLength-1])
        i++;
    int k=inLength-1-i;
        if(i!=0)
           root->left=buildTree(postorder,i,inorder,i);
        if(k!=0)
           root->right=buildTree(postorder+i,k,inorder+i+1,k);
    
    return root;
}
