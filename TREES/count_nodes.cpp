int getLargeNodeCount(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL)
        return 0;
    int count;
        if(root->data>x)
            count=1;
        else
            count=0;
    for(int i=0;i<root->children.size();i++){
        count+=getLargeNodeCount(root->children[i],x);    
    }
    
    return count;
}
