pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
// Write your code here
    if(root==NULL)
    {
        pair<int,int> k;
        k.first=100;
        k.second=0;
        return k;
    }
    pair<int,int> temp1,temp2,res;
    temp1=getMinAndMax(root->left);
    temp2=getMinAndMax(root->right);
    
    res.first=min(root->data,min(temp1.first,temp2.first));
    res.second=max(root->data,max(temp1.second,temp2.second));
    
    return res;
}
