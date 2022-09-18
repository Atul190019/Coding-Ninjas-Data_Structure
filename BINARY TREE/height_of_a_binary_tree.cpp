int height(BinaryTreeNode<int>* root) {
    // Write our code here
    if(root==NULL)
        return 0;
    int l,r;
    l=1+height(root->left);
    r=1+height(root->right);
    if(l>r)
        return l;
    else
        return r;
}
