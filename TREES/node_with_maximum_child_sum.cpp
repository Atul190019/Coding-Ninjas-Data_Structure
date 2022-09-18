int maxsum;
TreeNode<int>* maxNode;
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
        return root;
    int sum=root->data;
    TreeNode<int>* k= maxNode;
    for(int i=0;i<root->children.size();i++){
        sum=sum+root->children[i]->data;
        k=maxSumNode(root->children[i]);
    }
    if(maxsum<sum || maxsum==NULL)
    {
    maxsum=sum;
        maxNode = root;
    }
    return maxNode;
}
