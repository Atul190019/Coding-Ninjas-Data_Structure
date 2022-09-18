int getHeight(TreeNode<int>* root) {
    // Write your code here
    if(root->children.size()==0)
        return 1;
    int arr[root->children.size()];
    for(int i=0;i<root->children.size();i++){
        arr[i]=getHeight(root->children[i]);
    }
    int max=arr[0];
    for(int i=1;i<root->children.size();i++)
        if(arr[i]>max)
            max=arr[i];
    
    return max+1;
}
